// 查找指定关键字.

#include "BiTree.h"
#include <stdio.h>


int main() {
    BiTree T;
    CreateBiTree(&T);

    PreOrder(T);


    return 0;
}