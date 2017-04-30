/**
 * Created by 国海峰 on 17/4/30.
 */

#include <stdio.h>
#include "CRB.h"
#include "MEM.h"

int
main(int argc, char **argv)
{
    CRB_Interpreter     *interpreter;
    FILE *fp;  /* 文件指针 */

    if (argc != 2) {
        fprintf(stderr, "usage:%s filename", argv[0]);
        exit(1);
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "%s not found.\n", argv[1]);
        exit(1);
    }
    interpreter = CRB_create_interpreter();  /* 创建并初始化一个解释器 */
    CRB_compile(interpreter, fp);  /* 设置yacc的输入源，设定当前解释器，开始编译源文件 */
    CRB_interpret(interpreter);  /* 申请运行时内存，初始化全局变量，执行程序语句列表 */
    CRB_dispose_interpreter(interpreter);  /* 释放解释器的所有内存 */

    MEM_dump_blocks(stdout);

    return 0;
}
