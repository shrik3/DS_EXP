//
// Created by shrik3 on 5/18/16.
//

#ifndef DS_EXP_BITREE_H
#define DS_EXP_BITREE_H



#include "common.h"
typedef char ElemType;
//链式存储二叉树

typedef struct BiTree {
    ElemType data;
    struct BiTree *lchild;
    struct BiTree *rchild;
}BiTNode,*BiTree;

Status CreateBiTree(BiTree *T);
Status PreOrder(BiTree t);
Status PreOrderTraverse(BiTree T, Status (*Visit)(ElemType e));
Status InOrderTraverse(BiTree T,Status(*Visit)(ElemType e));
Status PostOrderTraverse(BiTree T,Status(*Visit)(ElemType e));
Status LevelOrderTraverse(BiTree T,Status(*Visit)(ElemType e));

#endif //DS_EXP_BITREE_H



