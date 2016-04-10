//
// Created by cybershrike on 4/6/16.
// 使用顺序栈检测括号匹配
#include <stdio.h>
#include "STACK.h"
#include <string.h>

#define NO 0
#define YES 1
#define ELEM_TYPE str

Status CheckBrackts(char *expr){
    SqStack S;
    InitStack(&S);
    while(sizeof(strlen(expr))>=S.stacksize){
        GiveMeMore(&S);
    }

    int i = 0;
    while(expr[i]!='\0'){
        char temp = expr[i];
        if(temp == '('||temp == '['||temp == '{'){
            Push(&S,temp);
        }
        if(temp == ')'||temp == ']'||temp == '}') {
            char top, trash;
            GetTop(S, &top);
            if (temp == top) {
                Pop(&S, &trash);
            } else { return NO; }
        }
        i ++;
    }

    if(StackEmpty(S)){
        return YES ;
    }else{return NO ;}
}

int main(){
    char expr[256];
    fgets(expr, sizeof(expr), stdin);
    if(CheckBrackts(expr)){
        printf("YES!\n");
    }else{printf("NO!\n");}

    return 0;
}
