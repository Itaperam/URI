#include <stdio.h>

int main(){
    int idade=0, qtd=0;
    double media=0, soma=0;

    while(idade >=0){
        
        scanf("%d", &idade);
        
        if(idade >= 0){
            soma += idade;
            qtd++;
        }        
    }
    media = soma / qtd;
    printf("%.2lf\n", media);

    return 0;
}