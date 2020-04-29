#include <stdio.h>

int main(){
    int x, soma=0, i, z, qtd=1;

    scanf("%d", &x);
    scanf("%d", &z);
    while(z <= x){
        scanf("%d", &z);
    }

    soma = x;

    while(soma <= z){
        soma += x+1;
        qtd++;
        x++;
    }
    printf("%d\n", qtd);
    return 0;
}