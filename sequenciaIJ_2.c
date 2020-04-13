#include <stdio.h>

int main(){

    int i=1, j=7;

    for(i=1; i <= 9; j--){ 
        
        printf("I=%d J=%d\n", i, j);                

        if(j == 5){
            j = 8;
            i = i+2;
        }       
            
    } 
    return 0;
}