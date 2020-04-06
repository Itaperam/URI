#include<stdio.h>

int main(){
    int num=0, countP=0, i=0;

    for(i; i < 5; i++){
        scanf("%d",&num);
        if(num % 2 == 0){
            countP++;            
        }
    }
    printf("%d valores pares\n", countP);
    
    return 0;
}