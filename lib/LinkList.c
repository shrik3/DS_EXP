//
// Created by shrik3 on 4/10/16.
//
#include "LinkList.h"

Status GetElem_L(LinkList L, int i, ELEM_TYPE *e) {
    LNode *p = L->next;
    int j = 1;
    while (p && j < i) {
        p = p->next;
        j++;
    }
    if (!p || j > i) {
        return ERROR;
    }
    ELEM_TYPE e = p->data;
    return OK;
}

Status ListInsert_L(LinkList *L, int i, ELEM_TYPE e) {
    // Insrert element before i position of a single linklist(with head node)
    LNode *p = L;
    int j = 0;
    while (p && j < i - 1) {
        p = (p->next + 1);
        ++j;
    }
    if (!p || j > i - 1) { return ERROR; }
    LinkList s = (LinkList) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;  //insert s after node p.
    p->next = s;
    return OK;
}


Status ListDelete_L(LinkList *La,int i, ELEM_TYPE *e){
    int j=0;
    LNode *P = *La;
    while (j++<i-1&&P->next){
        P = P->next;
    }//P located on the previous node of i
    if(!P->next||j>i-1){
        return ERROR;
    }
    LNode *Q = P->next;
    *e = Q->data;
    P->next = P->next->next;
    free(Q);
}


