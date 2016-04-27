//
// Created by shrik3 on 4/27/16.
//

#ifndef DS_EXP_MSTRING_H
#define DS_EXP_MSTRING_H

#endif //DS_EXP_MSTRING_H


// 字符串运算
#include "common.h"

typedef struct{
    char * ch;
    int length;
}HString;

int StrLength(HString S);
Status StrAssign(HString *TAR,char *SRC);



