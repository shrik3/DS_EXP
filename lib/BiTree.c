#include "BiTree.h"
#include <stdio.h>
#include <stdlib.h>

Status CreateBiTree(BiTree T) {
    char ch;
    scanf("%c", &ch);
    if (ch == '.') {
        T = NULL;
    } else {

        T = (BiTree) malloc(sizeof(BiTNode));
        if (!T) { exit(OVERFLOW); }
        T->data = ch;
        printf("%c", T->data);
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return OK;
}

Status PreOrderTraverse(BiTree T, Status (*Visit)(ElemType e)) {
    if (T) {
        if (Visit(T->data)) {
            if (PreOrderTraverse(T->lchild, Visit)){
                if (PreOrderTraverse(T->rchild, Visit)){
                    return OK;
                }
            }

        }
    } else {
        return ERROR;
    }
}
