//
// Created by shrik3 on 4/27/16.
//

#include <stdlib.h>
#include "MString.h"

int StrLength(HString S) {
    return S.length;
}

Status StrAssign(HString *TAR, char *SRC){
    int i;
    int j;
    if(TAR->ch){
        //free(TAR->ch);     ???????????
    }
    for(i=0;SRC[i];i++){}
    if(!i){
        TAR->ch = NULL;
        TAR->length = 0;
    }else{
        if(!(TAR->ch=(char*)malloc(i*sizeof(char)))){
            exit(OVERFLOW);
        }else{
            for(j=0;j<i;j++){
                TAR->ch[j] = SRC[j];
            }
            TAR->length = i;
        }

    }

    return OK;
}

