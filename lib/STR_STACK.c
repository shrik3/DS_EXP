#include <stdlib.h>
#include "STR_STACK.h"


Status InitStack(SqStack *S){
    (*S).base = (char *)malloc(STACK_INIT_SIZE*sizeof(char));
    if(!(*S).base) exit(OVERFLOW);
    (*S).top = (*S).base;
    (*S).stacksize = STACK_INIT_SIZE;
    return OK;
}

Status GetTop(SqStack S,char *e){
    if(S.top == S.base){
        return ERROR;
    }else {
        *e = *(S.top - 1);
        return OK;
    }
    }

Status Push(SqStack *S,char e){
    if (S->top - S->base >= S->stacksize){
        S->base = (char *)realloc(S->base,(S->stacksize+STACK_INIT_SIZE) * sizeof(char));
        if(!S->base)exit(OVERFLOW);
        S->top = S->base + S->stacksize;
        S->stacksize += STACKINCREMENT;
    }
    *S->top ++ = e;
    return OK;
}

Status Pop(SqStack *S, char *e){
    if(S->top == S->base) return ERROR;
    *e = *(--S->top);
    return OK;
}

Status StackEmpty(SqStack S){
    if(S.top == S.base){return 1;}
    else return 0;
}

Status GiveMeMore(SqStack *S){
    S->base = (char*)realloc(S->base,(S->stacksize+STACK_INIT_SIZE) * sizeof(char));
    if(!S->base)exit(ERROR);
    return OK;
}