#include "BiTree.h"
#include <stdio.h>

Status PrintE(ElemType e){
    printf("%c",e);
    return OK;
}

int main(){

    BiTree T = NULL;
    CreateBiTree(T);
    PreOrderTraverse(T,PrintE);

    return 0;
}