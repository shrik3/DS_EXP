//
// Created by shrik3 on 4/10/16.
//
#include "LinkList.h"
#include <stdio.h>

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
    *e = p->data;
    return OK;
}

Status ListInsert_L(LinkList L, int i, ELEM_TYPE e) {
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


Status ListDelete_L(LinkList La, int i, ELEM_TYPE *e) {
    int j = 0;
    LNode *P = La;
    while (j++ < i - 1 && P->next) {
        P = P->next;
    }//P located on the previous node of i
    if (!P->next || j > i - 1) {
        return ERROR;
    }
    LNode *Q = P->next;
    *e = Q->data;
    P->next = P->next->next;
    free(Q);
}


void MergeList_L(LinkList La, LinkList Lb, LinkList Lc) {
    // 线性单链表La 和 Lb 的元素按值非递减排列.
    // 归并两个链表得到单链线性表 Lc, Lc的元素也按值非递减排列.
    LNode *Pa = La->next;
    LNode *Pb = Lb->next;
    Lc = La;
    LNode *Pc = Lc;


    while (Pa && Pb) {
        if (Pa->data <= Pb->data) {
            Pc->next = Pa;
            Pc = Pa;
            Pa = Pa->next;

        } else {
            Pc->next = Pb;
            Pc = Pb;
            Pb = Pb->next;
        }
        Pc->next = Pa ? Pa : Pb;
        free(Lb);
    }


}

