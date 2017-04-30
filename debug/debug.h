//
// Created by 国海峰 on 17/4/30.
//

#ifndef VISIOND_DEBUG_H
#define VISIOND_DEBUG_H

#include <stdio.h>
#include "../DBG.h"

struct DBG_Controller_tag {
    FILE        *debug_write_fp;
    int         current_debug_level;
};



#endif //VISIOND_DEBUG_H
