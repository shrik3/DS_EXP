//
// Created by shrik3 on 5/18/16.
//

#ifndef DS_EXP_HUFFMANTREE_H
#define DS_EXP_HUFFMANTREE_H



#include "common.h"

typedef struct {
    unsigned int weight;
    unsigned int parent, lchild, rchild;
} HTNode, *HuffmanTree;

typedef char ** HuffmanCode

void HufmannCoding(HuffmanTree HT,HuffmanCode HC,int *w,int n);

#endif //DS_EXP_HUFFMANTREE_H