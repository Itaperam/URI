#include <stdio.h>

int main(){
    int A=0, B=0;

    scanf("%d %d", &A, &B);

    if((B % A == 0 || (A % B == 0))){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }      
    return 0;
}