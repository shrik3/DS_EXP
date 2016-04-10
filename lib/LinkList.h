//
// Created by shrik3 on 4/10/16.
//

#ifndef DS_EXP_LINKLIST_H
#define DS_EXP_LINKLIST_H

#endif //DS_EXP_LINKLIST_H


#include "common.h"
#include <stdlib.h>

#define ELEMTYPE int

typedef struct LNode {
    ELEMTYPE data;
    struct LNode *next;

} LNode, *LinkList;

