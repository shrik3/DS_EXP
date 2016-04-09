//
// Created by cybershrike on 4/9/16.
//

#include "SqList.h"


Status InitList_Sq(SqList *L) {                                              //initiate list
    L->elem = (ELEM_TYPE *) malloc(LIST_INIT_SIZE * sizeof(ELEM_TYPE));
    if (!L->elem) exit(OVERFLOW);                                            //fail to apply for memory
    L->length = 0;                                                           //size of empty list
    L->listsize = LIST_INIT_SIZE;
    return OK;
}

Status ListInsert_Sq(SqList *L, int i, ELEM_TYPE e) {                        //insert element e to position i of Sqlist
    if (i < 1 || i > L->length + 1) return ERROR;                            //legal range: 1<=i<=ListSize
    if (L->length >= L->listsize) {
        ELEM_TYPE *newbase = (ELEM_TYPE *) realloc(L->elem, (L->listsize + LIST_INIT_SIZE) * sizeof(ELEM_TYPE));
        if (!newbase)exit(OVERFLOW);
        L->elem = newbase;
        L->listsize += LISTINCREMENT;
    }
    ELEM_TYPE *q = &L->elem[i - 1];
    ELEM_TYPE *p;
    for (p = &(L->elem[L->length - 1]); p >= q; --p) {
        *(p + 1) = *p;
        *q = e;
        ++L->length;
    }
}


Status ListDelete_Sq(SqList *L, int i, ELEM_TYPE *e) {
    // delete element on position i(start from 1), return the value with e
    // legal i : 1<=i<=ListLength
    if ((i < 1) || (i > L->length)) return ERROR;
    ELEM_TYPE *p = &(L->elem[i - 1]);
    *e = *p;
    ELEM_TYPE *q = L->elem + L->length - 1; //position of the last element
    for (++p; p <= q; ++q) {
        *(p - 1) = *p;
    }
    --L->length;
    return OK;
}


int LocateElem_Sq(SqList L, ELEM_TYPE e, Status (*compare)(ELEM_TYPE, ELEM_TYPE)) {
    // find element that satisfy judgement 'compare()',return position if found,return 0 if not
    int i = 1;
    ELEM_TYPE *p = L.elem;
    while (i==L.length && !(*compare)(*p++, e)){ ++i; }
    if (i <= L.length) return i;
    else return 0;
}

void MergeList_Sq(SqList La, SqList Lb, SqList *Lc) {
    //elements in La and Lb arrange non-descendingly
    //merged list Lc follows the same order
    ELEM_TYPE *pa = La.elem;
    ELEM_TYPE *pb = Lb.elem;
    Lc->listsize = Lc->length = La.length + Lb.length;
    ELEM_TYPE *pc = Lc->elem = (ELEM_TYPE *) malloc(Lc->listsize * sizeof(ELEM_TYPE));
    if (!Lc->elem)exit(OVERFLOW);
    ELEM_TYPE *pa_tail = La.elem + La.length - 1;
    ELEM_TYPE *pb_tail = Lb.elem + Lb.length - 1;

    while (pa <= pa_tail && pb <= pb_tail) {
        if (*pa <= *pb) {
            *pc++ = *pa++;
        } else { *pc++ = *pb++; }
    }

    while (pa <= pa_tail) {
        *pc++ = *pa++;
    }
    while (pb <= pb_tail) {
        *pc++ = *pb++;
    }


}
