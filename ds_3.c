//使用顺序栈实现整数到任意数制的转换.

#include <stdio.h>
#include "STACK.h"

void converse(int n,int r)
{
    SqStack S;//构建一个栈
    InitStack(&S);
    while(n)
    {
        Push(&S,n%r);//数据入栈
        n=n/r;
    }
    while(!StackEmpty(S))
    {
        int e;
        Pop(&S,&e);//数据出栈
        printf("%d",e);
    }
    printf("\n");
}

int main(){
    for(;;){
        int n;
        int r;
        scanf("%d",&n);
        scanf("%d",&r);
        converse(n,r);

    }

}
