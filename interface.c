//
// Created by 国海峰 on 17/4/30.
//

#include "MEM.h"
#include "DBG.h"
#define GLOBAL_VARIABLE_DEFINE
#include "crowbar.h"

static void
add_native_functions(CRB_Interpreter *inter)
{
    CRB_add_native_function(inter, "print", crb_nv_print_proc);
    CRB_add_native_function(inter, "fopen", crb_nv_fopen_proc);
    CRB_add_native_function(inter, "fclose", crb_nv_fclose_proc);
    CRB_add_native_function(inter, "fgets", crb_nv_fgets_proc);
    CRB_add_native_function(inter, "fputs", crb_nv_fputs_proc);
}

CRB_Interpreter *
CRB_create_interpreter(void)
{
    MEM_Storage storage;
    CRB_Interpreter *interpreter;

    storage = MEM_open_storage(0);  /* 开辟第一块内存空间 */
    interpreter = MEM_storage_malloc(storage,
                                     sizeof(struct CRB_Interpreter_tag));  /* 为解释器开辟空间 */
    /* 初始化解释器 */
    interpreter->interpreter_storage = storage;
    interpreter->execute_storage = NULL;
    interpreter->variable = NULL;
    interpreter->function_list = NULL;
    interpreter->statement_list = NULL;
    interpreter->current_line_number = 1;

    crb_set_current_interpreter(interpreter);  /* 设置一个全局变量，使得可以随时获取当前解释器 */
    add_native_functions(interpreter);  /* 为解释器装载函数内部方法，如: print() */

    return interpreter;
}

void
CRB_compile(CRB_Interpreter *interpreter, FILE *fp)
{
    extern int yyparse(void);
    extern FILE *yyin;

    crb_set_current_interpreter(interpreter);  /* 设置一个全局变量，使得可以随时获取当前解释器 */

    yyin = fp;  /* 指定yacc的输入源 */
    if (yyparse()) {  /* 运行yyparse()方法，开始lex与yacc的词法分析与语法分析，最终利用程序源文件构建分析树 */
        /* BUGBUG */
        fprintf(stderr, "Error ! Error ! Error !\n");
        exit(1);
    }
    crb_reset_string_literal_buffer();  /* 重置字符串buffer */
}

/* 申请运行时内存，初始化全局变量，执行程序语句列表 */
void
CRB_interpret(CRB_Interpreter *interpreter)
{
    interpreter->execute_storage = MEM_open_storage(0);  /* 创建执行存储内存空间 */
    crb_add_std_fp(interpreter);  /* 声明STDIN、STDOUT、STDERR全局变量，分别对应C语言中的stdin、stdout、stderr */
    crb_execute_statement_list(interpreter, NULL, interpreter->statement_list);  /* 执行程序语句 */
}

static void
release_global_strings(CRB_Interpreter *interpreter) {
    while (interpreter->variable) {
        Variable *temp = interpreter->variable;
        interpreter->variable = temp->next;
        if (temp->value.type == CRB_STRING_VALUE) {
            crb_release_string(temp->value.u.string_value);
        }
    }
}

/* 释放解释器的所有内存 */
void
CRB_dispose_interpreter(CRB_Interpreter *interpreter)
{
    release_global_strings(interpreter);  /* 释放全局字符串常量 */

    /* 释放执行内存 */
    if (interpreter->execute_storage) {
        MEM_dispose_storage(interpreter->execute_storage);
    }

    MEM_dispose_storage(interpreter->interpreter_storage);  /* 释放解析程序源文件内存 */
}

void
CRB_add_native_function(CRB_Interpreter *interpreter,
                        char *name, CRB_NativeFunctionProc *proc)
{
    FunctionDefinition *fd;

    fd = crb_malloc(sizeof(FunctionDefinition));
    fd->name = name;
    fd->type = NATIVE_FUNCTION_DEFINITION;
    fd->u.native_f.proc = proc;
    fd->next = interpreter->function_list;

    interpreter->function_list = fd;
}
