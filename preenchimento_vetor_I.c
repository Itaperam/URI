#include <stdio.h>

int main(){

    int N[10] = {};
    int i = 0, x = 0;
    
        scanf("%d", &N[0]);

    for(i = 1; i < 10; i++){
        N[i] = N[i-1] * 2;
    }    

    for(i = 0; i < 10; i++){
        if(N[i] == 0 || N[i] < 0){
            N[i] = 1;
        }
        printf("N[%d] = %d\n",i, N[i]);
    }

    return 0;
}