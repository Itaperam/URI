#include <stdio.h>

int main(){
    int x, y, i, qtd =0;

    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++){
        qtd++;
        if(qtd == x){
            printf("%d", i);
        }
        else{
            printf("%d ",i);
        }    

        if(qtd == x){
            qtd = 0;
            printf("\n");
        }           
    }    
    return 0;
}