#include <stdio.h>

int main(){
    int x=0, y=0, somaImpar=0, i;

    scanf("%d", &x);
    scanf("%d", &y);    
    
    if(x < y){
        for(i = x+1; i < y; i++){
            if(i % 2 != 0){
                somaImpar = somaImpar + i;
            }            
        }
         printf("%d\n", somaImpar);        
    }
    else if(x > y){
        for(i = x-1; i > y; i--){
            if(i % 2 != 0){
                somaImpar = somaImpar + i;
            }            
        }
         printf("%d\n", somaImpar);        
    }
    else{
       printf("%d\n", somaImpar); 
    }  
      
    return 0;
}