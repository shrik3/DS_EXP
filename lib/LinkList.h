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

Status ListInsert_L(LinkList L, int i, ELEM_TYPE e);

Status GetElem_L(LinkList L, int i, ELEM_TYPE *e);

Status ListDelete_L(LinkList La,int i, ELEM_TYPE *e);

void MergeList_L(LinkList La,LinkList Lb,LinkList Lc);



