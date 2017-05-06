%{
#include <stdio.h>
#include "crowbar.h"
#define YYDEBUG 1
%}
%union {
    char                *identifier;
    ParameterList       *parameter_list;
    ArgumentList        *argument_list;
    Expression          *expression;
    Statement           *statement;
    StatementList       *statement_list;
    Block               *block;
    Elsif               *elsif;
    IdentifierList      *identifier_list;
}
%token <expression>     INT_LITERAL
%token <expression>     DOUBLE_LITERAL
%token <expression>     STRING_LITERAL
%token <identifier>     IDENTIFIER
%token FUNCTION IF ELSE ELSIF WHILE FOR RETURN_T BREAK CONTINUE NULL_T
        LP RP LC RC SEMICOLON COMMA ASSIGN LOGICAL_AND LOGICAL_OR
        EQ NE GT GE LT LE ADD SUB MUL DIV MOD TRUE_T FALSE_T GLOBAL_T
%type   <parameter_list> parameter_list
%type   <argument_list> argument_list
%type   <expression> expression expression_opt
        logical_and_expression logical_or_expression
        equality_expression relational_expression
        additive_expression multiplicative_expression
        unary_expression primary_expression
%type   <statement> statement global_statement
        if_statement while_statement for_statement
        return_statement break_statement continue_statement
%type   <statement_list> statement_list
%type   <block> block
%type   <elsif> elsif elsif_list
%type   <identifier_list> identifier_list
%%
translation_unit
        : definition_or_statement
        | translation_unit definition_or_statement
        ;
definition_or_statement
        : function_definition
        | statement  /* 当statement左边没有 {（LC：左大括号）时候，就会执行这里的规约条件，代表这个一个单独的语句 */
        {
            CRB_Interpreter *inter = crb_get_current_interpreter();

            inter->statement_list
                = crb_chain_statement_list(inter->statement_list, $1);
        }
        ;
function_definition  /* 定义函数，以function字符串开头的，函数定义语句 */
        : FUNCTION IDENTIFIER LP parameter_list RP block  /* 带参数的函数 */
        {
            crb_function_define($2, $4, $6);  /* 存入解释器中的function_list当中，无返回值 */
        }
        | FUNCTION IDENTIFIER LP RP block  /* 不带参数的函数 */
        {
            crb_function_define($2, NULL, $5);  /* 存入解释器中的function_list当中 */
        }
        ;
parameter_list  /* 参数名列表：声明一个函数时，存储函数的参数名，属于函数本身的一部分，无返回值 */
        : IDENTIFIER  /* 只有一个参数名 */
        {
            $$ = crb_create_parameter($1);
        }
        | parameter_list COMMA IDENTIFIER  /* 多个参数名 */
        {
            $$ = crb_chain_parameter($1, $3);
        }
        ;
argument_list  /* 参数值列表：与函数有关，存储传给函数的参数值 */
        : expression  /* 单个参数值 */
        {
            $$ = crb_create_argument_list($1);
        }
        | argument_list COMMA expression  /* 多个参数值 */
        {
            $$ = crb_chain_argument_list($1, $3);
        }
        ;
statement_list  /* 程序语句链，用于block的语句存储，当statement左边为 {（LC: 左大括号）时，statement会规约到statement_list */
        : statement  /* 程序语句：都是以;分号结尾 */
        {
            $$ = crb_create_statement_list($1);  /* 第一个程序语句，所以创建一个新的程序语句列表 */
        }
        | statement_list statement
        {
            $$ = crb_chain_statement_list($1, $2);  /* 链入已有的程序语句链 */
        }
        ;
expression  /* = (赋值运算) */
        : logical_or_expression
        | IDENTIFIER ASSIGN expression  /* = (赋值运算)，如：value = expression */
        {
            $$ = crb_create_assign_expression($1, $3);
        }
        ;
logical_or_expression  /* 逻辑 或 运算（ || ） */
        : logical_and_expression
        | logical_or_expression LOGICAL_OR logical_and_expression
        {
            $$ = crb_create_binary_expression(LOGICAL_OR_EXPRESSION, $1, $3);
        }
        ;
logical_and_expression  /* 逻辑与运算（&& 高于 ||） */
        : equality_expression
        | logical_and_expression LOGICAL_AND equality_expression  /* 逻辑与运算 */
        {
            $$ = crb_create_binary_expression(LOGICAL_AND_EXPRESSION, $1, $3);
        }
        ;
equality_expression  /* 判断相等，一般返回true, false */
        : relational_expression
        | equality_expression EQ relational_expression  /* == 相等 */
        {
            $$ = crb_create_binary_expression(EQ_EXPRESSION, $1, $3);
        }
        | equality_expression NE relational_expression  /* != 不相等 */
        {
            $$ = crb_create_binary_expression(NE_EXPRESSION, $1, $3);
        }
        ;
relational_expression  /* 比较运算 */
        : additive_expression
        | relational_expression GT additive_expression  /* > (大于) 比较运算*/
        {
            $$ = crb_create_binary_expression(GT_EXPRESSION, $1, $3);
        }
        | relational_expression GE additive_expression  /* >= (大于等于) */
        {
            $$ = crb_create_binary_expression(GE_EXPRESSION, $1, $3);
        }
        | relational_expression LT additive_expression  /* < (小于) */
        {
            $$ = crb_create_binary_expression(LT_EXPRESSION, $1, $3);
        }
        | relational_expression LE additive_expression  /* <= (小于等于) */
        {
            $$ = crb_create_binary_expression(LE_EXPRESSION, $1, $3);
        }
        ;
additive_expression  /* 加, 减 运算 */
        : multiplicative_expression
        | additive_expression ADD multiplicative_expression
        {
            $$ = crb_create_binary_expression(ADD_EXPRESSION, $1, $3);
        }
        | additive_expression SUB multiplicative_expression
        {
            $$ = crb_create_binary_expression(SUB_EXPRESSION, $1, $3);
        }
        ;
multiplicative_expression  /* 乘, 除, 取模 运算 */
        : unary_expression
        | multiplicative_expression MUL unary_expression
        {
            $$ = crb_create_binary_expression(MUL_EXPRESSION, $1, $3);
        }
        | multiplicative_expression DIV unary_expression
        {
            $$ = crb_create_binary_expression(DIV_EXPRESSION, $1, $3);
        }
        | multiplicative_expression MOD unary_expression
        {
            $$ = crb_create_binary_expression(MOD_EXPRESSION, $1, $3);
        }
        ;
unary_expression
        : primary_expression
        | SUB unary_expression  /* 变负数 */
        {
            $$ = crb_create_minus_expression($2);
        }
        ;
primary_expression
        : IDENTIFIER LP argument_list RP  /* 单独的调用函数(带参数,有参数列表) */
        {
            $$ = crb_create_function_call_expression($1, $3);
        }
        | IDENTIFIER LP RP  /* 单独的调用函数(不带参数) */
        {
            $$ = crb_create_function_call_expression($1, NULL);
        }
        | LP expression RP  /* 一个单独的表达式 */
        {
            $$ = $2;
        }
        | IDENTIFIER  /* 单数的一个标识符 */
        {
            $$ = crb_create_identifier_expression($1);
        }
        | INT_LITERAL
        | DOUBLE_LITERAL
        | STRING_LITERAL
        | TRUE_T
        {
            $$ = crb_create_boolean_expression(CRB_TRUE);
        }
        | FALSE_T
        {
            $$ = crb_create_boolean_expression(CRB_FALSE);
        }
        | NULL_T
        {
            $$ = crb_create_null_expression();
        }
        ;
statement
        : expression SEMICOLON  /* expression; （以;分号结尾，作为一个语句的结束符号） */
        {
          $$ = crb_create_expression_statement($1);  /* 创建一个存储 expression 的 statement  */
        }
        | global_statement    /*   以特殊字符串 global 开头的语句   */
        | if_statement        /*   以特殊字符串 if 开头的语句       */
        | while_statement     /*   以特殊字符串 while 开头的语句    */
        | for_statement       /*   以特殊字符串 for 开头的语句      */
        | return_statement    /*   以特殊字符串 return 开头的语句   */
        | break_statement     /*   以特殊字符串 break 开头的语句    */
        | continue_statement  /*   以特殊字符串 continue 开头的语句 */
        ;
global_statement
        : GLOBAL_T identifier_list SEMICOLON   /* 如：global name1, name2, name3; */
        {
            $$ = crb_create_global_statement($2);  /* 参数为 identifier_list (变量名列表) */
        }
        ;
identifier_list  /* identifier_list 主要是用于 global 变量类型 的使用 */
        : IDENTIFIER  /* 当 IDENTIFIER 遇到 ,（COMMA：逗号）时候，会 规约到 identifier_list */
        {
            $$ = crb_create_global_identifier($1);  /* 创建 */
        }
        | identifier_list COMMA IDENTIFIER
        {
            $$ = crb_chain_identifier($1, $3);
        }
        ;
if_statement
        : IF LP expression RP block
        {
            $$ = crb_create_if_statement($3, $5, NULL, NULL);
        }
        | IF LP expression RP block ELSE block  /* 如：if(expression){ do something.... } else { do something.... } */
        {
            $$ = crb_create_if_statement($3, $5, NULL, $7);
        }
        | IF LP expression RP block elsif_list  /* 如：if(expression){ do something.... } elsif {} elsif {}... */
        {
            $$ = crb_create_if_statement($3, $5, $6, NULL);
        }
        | IF LP expression RP block elsif_list ELSE block  /* 如:if(expression){ do something.... } elsif {}.. else{} */
        {
            $$ = crb_create_if_statement($3, $5, $6, $8);
        }
        ;
elsif_list
        : elsif
        | elsif_list elsif
        {
            $$ = crb_chain_elsif_list($1, $2);
        }
        ;
elsif
        : ELSIF LP expression RP block
        {
            $$ = crb_create_elsif($3, $5);
        }
        ;
while_statement
        : WHILE LP expression RP block
        {
            $$ = crb_create_while_statement($3, $5);
        }
        ;
for_statement
        : FOR LP expression_opt SEMICOLON expression_opt SEMICOLON
          expression_opt RP block
        {
            $$ = crb_create_for_statement($3, $5, $7, $9);
        }
        ;
expression_opt
        : /* empty */
        {
            $$ = NULL;
        }
        | expression
        ;
return_statement
        : RETURN_T expression_opt SEMICOLON
        {
            $$ = crb_create_return_statement($2);
        }
        ;
break_statement
        : BREAK SEMICOLON
        {
            $$ = crb_create_break_statement();
        }
        ;
continue_statement
        : CONTINUE SEMICOLON
        {
            $$ = crb_create_continue_statement();
        }
        ;
block
        : LC statement_list RC
        {
            $$ = crb_create_block($2);
        }
        | LC RC
        {
            $$ = crb_create_block(NULL);
        }
        ;
%%
