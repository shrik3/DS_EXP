//
// Created by cybershrike on 4/9/16.
//

#include "SqList.h"




Status InitList_Sq(SqList *L){                                                 //initiate list
    L->elem = (ELEM_TYPE *)malloc(LIST_INIT_SIZE * sizeof(ELEM_TYPE));
    if(!L->elem) exit(OVERFLOW);                                            //fail to apply for memory
    L->length = 0;                                                          //size of empty list
    L->listsize = LIST_INIT_SIZE;
    return OK;
}

Status ListInsert_Sq(SqList *L, int i, ELEM_TYPE e){                        //insert element e to position i of Sqlist
    if(i<1||i>L->length+1) return ERROR;                                    //legal range: 1<=i<=ListSize
    if(L->length >= L->listsize){
        ELEM_TYPE *newbase = (ELEM_TYPE *)realloc(L->elem, (L->listsize + LIST_INIT_SIZE)* sizeof(ELEM_TYPE));
        if(!newbase)exit(OVERFLOW);
        L->elem = newbase;
        L->listsize += LISTINCREMENT;
    }
    ELEM_TYPE *q = *L->elem[i-1];
    ELEM_TYPE *p;
    for (p = &(L->elem[L->length-1]); p>=q;--p){
        *(p+1) = *p;
        *q = e;
        ++L->length;
    }
}
