//
// Created by cybershrike on 4/6/16.
// 整数顺序栈
#include "common.h"

#ifndef DS_EXP_STACK_H
#define DS_EXP_STACK_H

#include "BiTree.h"

#define ELEM_TYPE BiTree

typedef struct stack{
    ELEM_TYPE *base;
    ELEM_TYPE *top;
    int stacksize;
} SqStack;

Status InitStack(SqStack *S);

Status DestroyStack(SqStack *S);

Status ClearStack(SqStack *S);

Status GetTop(SqStack S, ELEM_TYPE *e);

Status Push(SqStack *S, ELEM_TYPE e);

Status Pop(SqStack *S, ELEM_TYPE *e);

Status StackEmpty(SqStack S);

Status GiveMeMore(SqStack *S);

#endif //DS_EXP_STACK_H