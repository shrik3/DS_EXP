#include <stdio.h>
#define N 64
#define M 17

int main(){
    int i;

    //编号:
    int shit[N];
    for(i=0 ; i<N ;++i){
        shit[i] = i+1;
    }


    int servive = N;
    int count = 1;

    for(i=0;i<servive;i++){

        if(servive == 1){
            break;
        }
        //if died
        if (count==M){
            //shit[i] dead
            printf("%d died\n",shit[i]);
            int j;
            for(j = i;j<servive-1;j++){
                shit[j] = shit[j+1];
            }

            servive --;
            count = 1;
        }

        if(i+1 == servive){
            i = -1;
        }

        count ++;

    }


    printf("%d servived",shit[0]);
    return 0;
}