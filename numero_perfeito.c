#include <stdio.h>

int main(){

    int i=0, n=0, somaDiv=0, j=0;

    scanf("%d", & i);

    while(i > 0){

        scanf("%d", &n);

        for(j = 1; j < n; j++){
            if(n % j == 0){
                somaDiv += j;
            }            
        }
        if(somaDiv == n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }

        i--;
        somaDiv = 0;
    }

    return 0;
}