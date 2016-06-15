#include "BiTree.h"
#include "STACK.h"
#include <stdio.h>
#include <stdlib.h>

Status CreateBiTree(BiTree *t)
{
    char ch;
    scanf("%c",&ch);
    if ( ch == '.' )
        *t = NULL;
    else
    {
        *t = (BiTree)malloc(sizeof(BiTNode));
        if ( !*t )
        {
            printf("分配内存出错！");
            return ERROR ;
        }
        (*t)->data = ch;
        CreateBiTree(&(*t)->lchild);
        CreateBiTree(&(*t)->rchild);
    }
}

Status PreOrder(BiTree t) {
    if ( t )
    {
        printf("%c",t->data);
        PreOrder(t->lchild);
        PreOrder(t->rchild);
    }
    return OK;
}


Status InOrderTraverse(BiTree T, Status (*Visit)(ElemType e)) {
    if (T->lchild) {
        if (InOrderTraverse(T->lchild, Visit)) {
            if (InOrderTraverse(T->rchild, Visit)) {
                return OK;
            }
        }
        Visit(T->data);


    } else {
        return ERROR;
    }
    return OK;
}