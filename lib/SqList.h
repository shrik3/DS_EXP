//
// Created by cybershrike on 4/9/16.
// 修改宏定义 ELEM_TYPE 改变元素类型.
// 线性表的动态分配顺序存储结构
#ifndef DS_EXP_SQLIST_H
#define DS_EXP_SQLIST_H

#endif //DS_EXP_SQLIST_H

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ELEM_TYPE int

#include "common.h"
#include <stdlib.h>

typedef struct {
    ELEM_TYPE *elem;
    int length;
    int listsize;
}SqList;

Status InitList_Sq(SqList *L);
Status ListInsert_Sq(SqList *L, int i, ELEM_TYPE e);
Status ListDelete_Sq(SqList *L,int i, ELEM_TYPE *e);
