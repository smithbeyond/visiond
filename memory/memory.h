/*
** Created by 国海峰 on 17/4/30.
*/

#ifndef VISIOND_MEMORY_H
#define VISIOND_MEMORY_H

#include "../MEM.h"

typedef union Header_tag Header;


struct MEM_Controller_tag {
    FILE        *error_fp;
    MEM_ErrorHandler    error_handler;
    MEM_FailMode        fail_mode;
    Header      *block_header;
};

#endif /* VISIOND_MEMORY_H */
