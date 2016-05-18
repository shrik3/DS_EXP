//
// Created by shrik3 on 5/18/16.
//

#ifndef DS_EXP_BITREE_H
#define DS_EXP_BITREE_H

#endif //DS_EXP_BITREE_H

#include "common.h"
typedef char ElemType;
//链式存储二叉树

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;

Status CreateBiTree(BiTree T);
Status PreOrderTraverse(BiTree T, Status (*Visit)(ElemType e));

