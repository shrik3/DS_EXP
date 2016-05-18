//
// Created by shrik3 on 4/27/16.
//


#include "MString.h"
#include <stdio.h>


int main() {
    HString s1;
    s1.ch = "123";
    char s2[] = "SOURCE";
    StrAssign(&s1,s2);
    printf("%s",s1.ch);
    return 0;
}
