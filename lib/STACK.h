//
// Created by cybershrike on 4/6/16.
// 整数顺序栈
#include "common.h"

#ifndef DS_EXP_STACK_H
#define DS_EXP_STACK_H

#endif //DS_EXP_STACK_H


typedef struct {
    int *base;
    int *top;
    int stacksize;
}SqStack;

Status InitStack(SqStack *S);
Status DestroyStack(SqStack *S);
Status ClearStack(SqStack *S);
Status GetTop(SqStack S,int *e);
Status Push(SqStack *S,int e);
Status Pop(SqStack *S,int *e);
Status StackEmpty(SqStack S);
Status GiveMeMore(SqStack S);
