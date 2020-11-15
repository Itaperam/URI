#include <stdio.h>

int main(){

    int i=1, j=7;

    for(i=1; i <= 9; j--){ 
        
        printf("I=%d J=%d\n", i, j);                

        if(j - i == 4){
            j = j + 5;
            i = i+2;
        }             
    } 
    return 0;
}