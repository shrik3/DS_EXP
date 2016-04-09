#include <stdio.h>
#define DSIZE 100
#define ARRAYSIZE 10000

int main(){
    int data[ARRAYSIZE] = {10,20,30,40,50};
    int n = 5;
    int i ;
    int new;
    int pos;

    for(;;){
        for(i = 0; i<n ; ++i){
            printf("%d,",data[i]);

        }
        printf("\n");
        scanf("%d",&new);
        printf("\n");
        if(++n>=ARRAYSIZE){
            printf("overflow");
            break;
        }

        if(new<=data[0]){
            pos = 0;
        }else if(new>=data[n-1]){
            pos = n-1;
        }

        for(i=0;i<n;++i){
            if(data[i]<=new&&new<=data[i+1]){
                pos = i+1;
            }
        }
        for(i = n;i>pos;--i){
            data[i] = data[i-1];
        }
        data[pos] = new;
        n++;

    }

    return 0;


}


