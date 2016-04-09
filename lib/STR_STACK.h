//
// Created by cybershrike on 4/6/16.
// 整数顺序栈


#ifndef DS_EXP_STACK_H
#define DS_EXP_STACK_H

#endif //DS_EXP_STACK_H

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
#define OK 1
#define TRUE 1
#define FALSE 0
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;

typedef struct {
    char *base;
    char *top;
    int stacksize;
}SqStack;

Status InitStack(SqStack *S);
Status DestroyStack(SqStack *S);
Status ClearStack(SqStack *S);
Status GetTop(SqStack S,char *e);
Status Push(SqStack *S,char e);
Status Pop(SqStack *S,char *e);
Status StackEmpty(SqStack S);
Status GiveMeMore(SqStack *S);