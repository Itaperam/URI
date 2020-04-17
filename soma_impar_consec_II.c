#include <stdio.h>

int main(){
    int x=0, y=0, qtd=0, somaImpar=0, i,j;
    
    scanf("%d", &qtd);

    for(j = 0; j < qtd; j++){    

        scanf("%d %d", &x, &y);            
    
        if(x < y){
            for(i = x+1; i < y; i++){
                if(i % 2 != 0){
                    somaImpar = somaImpar + i;
                }            
            }
            printf("%d\n", somaImpar);
            somaImpar = 0;        
        }
        else if(x > y){
            for(i = x-1; i > y; i--){
                if(i % 2 != 0){
                    somaImpar = somaImpar + i;
                }            
            }
            printf("%d\n", somaImpar);
            somaImpar = 0;      
        }
        else{
            printf("%d\n", somaImpar);
            somaImpar = 0; 
        }
    }
      
    return 0;
}