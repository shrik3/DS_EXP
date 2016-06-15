#include "HuffmanTree.h"
#include <stdlib.h>
#include <stdio.h>


void HufmannCoding(HuffmanTree HT, HuffmanTree HC, unsigned int *w, int n) {
    if (n <= 1)return;
    int m = 2*n -1;
    HT = (HuffmanTree)malloc((m+1)* sizeof(HTNode));
    HuffmanTree p;
    int i;

    for(p=HT,i=1,;i<=n;++i,++p,++w){
        *p = {*w,0,0,0};
    }
    for(;i<=m;++i;++p){
        *p = {0,0,0,0};
    }
    for(i=n+1;i<=m;++i){
        Select


    }
}
