#include <stdlib.h>
#include "STACK.h"

Status InitStack(SqStack *S) {
    (*S).base = (ELEM_TYPE *) malloc(STACK_INIT_SIZE * sizeof(ELEM_TYPE));
    if (!(*S).base) exit(OVERFLOW);
    (*S).top = (*S).base;
    (*S).stacksize = STACK_INIT_SIZE;
    return OK;
}

Status GetTop(SqStack S, ELEM_TYPE *e) {
    if (S.top == S.base) {
        return ERROR;
    } else {
        *e = *(S.top - 1);
        return OK;
    }
}

Status Push(SqStack *S, ELEM_TYPE e) {
    if (S->top - S->base >= S->stacksize) {
        S->base = (ELEM_TYPE *) realloc(S->base, (S->stacksize + STACK_INIT_SIZE) * sizeof(ELEM_TYPE));
        if (!S->base)exit(OVERFLOW);
        S->top = S->base + S->stacksize;
        S->stacksize += STACKINCREMENT;
    }
    *S->top++ = e;
    return OK;
}

Status Pop(SqStack *S, ELEM_TYPE *e) {
    if (S->top == S->base) return ERROR;
    *e = *(--S->top);
    return OK;
}

Status StackEmpty(SqStack S) {
    if (S.top == S.base) { return 1; }
    return 0;
}

Status GiveMeMore(SqStack *S) {
    S->base=(
    ELEM_TYPE *)realloc(S->base, (S->stacksize + STACK_INIT_SIZE) * sizeof(ELEM_TYPE));
    if (!S->base)exit(ERROR);
    return OK;
}