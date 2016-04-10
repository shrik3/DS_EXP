//
// Created by shrik3 on 4/10/16.
//

#ifndef DS_EXP_LINKLIST_H
#define DS_EXP_LINKLIST_H

#endif //DS_EXP_LINKLIST_H


#include "common.h"
#include <stdlib.h>

#define ELEM_TYPE int

typedef struct LNode {
    ELEM_TYPE data;
    struct LNode *next;

} LNode, *LinkList;

Status GetElem_L(LinkList L,int i, ELEM_TYPE *e);
