#include <stdio.h>

int main(){
    int x, y, soma=0, i;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x < y){
        for(i = x; i <= y; i++){
            if(i % 13 != 0){
                soma = soma + i;
            } 
        }
        printf("%d\n", soma); 
    }
    if(x > y){
        for(i = x; i >= y; i--){
            if(i % 13 != 0){
                soma = soma + i;
            } 
        }
        printf("%d\n", soma); 
    }
    if(x == y){
        
        if(x % 13 != 0){
            soma = x;
        }         
        printf("%d\n", soma); 
    }
   


    return 0;
}