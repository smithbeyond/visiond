/*
** Created by 国海峰 on 17/4/30.
*/
#include <stdio.h>
#include <string.h>
#include "MEM.h"
#include "crowbar.h"

#define STRING_ALLOC_SIZE       (256)

static char *st_string_literal_buffer = NULL;
static int st_string_literal_buffer_size = 0;
static int st_string_literal_buffer_alloc_size = 0;

void
crb_open_string_literal(void)
{
    st_string_literal_buffer_size = 0;
}

void
crb_add_string_literal(int letter)
{
    if (st_string_literal_buffer_size == st_string_literal_buffer_alloc_size) {
        st_string_literal_buffer_alloc_size += STRING_ALLOC_SIZE;
        st_string_literal_buffer
                = MEM_realloc(st_string_literal_buffer,
                              st_string_literal_buffer_alloc_size);
    }
    st_string_literal_buffer[st_string_literal_buffer_size] = letter;
    st_string_literal_buffer_size++;
}

/* 重置读入buffer */
void
crb_reset_string_literal_buffer(void)
{
    MEM_free(st_string_literal_buffer);
    st_string_literal_buffer = NULL;
    st_string_literal_buffer_size = 0;
    st_string_literal_buffer_alloc_size = 0;
}

/* 将字符串装入新空间，并返回新空间地址 */
char *
crb_close_string_literal(void)
{
    char *new_str;

    new_str = crb_malloc(st_string_literal_buffer_size + 1);

    memcpy(new_str, st_string_literal_buffer, st_string_literal_buffer_size);
    new_str[st_string_literal_buffer_size] = '\0';

    return new_str;
}

/* 创建变量名，传入变量名字符串，返回新copy的变量名字符串，地址不同，底层为copy动作 */
char *
crb_create_identifier(char *str)
{
    char *new_str;

    new_str = crb_malloc(strlen(str) + 1);

    strcpy(new_str, str);

    return new_str;
}

