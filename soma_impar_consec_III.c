#include <stdio.h>

int main(){

    int n, x, y, soma=0, qtdImpar=0;

    scanf("%d", &n);

    while(n > 0){
        
        scanf("%d %d", &x, &y);

        while (qtdImpar < y){

            if(x % 2 != 0){
                soma += x;
                qtdImpar++;
            }
            x++;           
        }
        printf("%d\n", soma);
        qtdImpar=0;
        soma=0;

        n--; 
    }

    return 0;
}