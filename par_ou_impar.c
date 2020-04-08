#include<stdio.h>

int main(){
    int num=0,i=0;

    scanf("%d",&num);

    int vet[num];

    for(i=0; i < num; i++){

        scanf("%d", &vet[i]);            
        
    } 
    for(i=0; i < num; i++){

        if(vet[i] % 2 == 0 && vet[i] != 0){
           printf("EVEN "); 
        }
        if(vet[i] % 2 != 0){
           printf("ODD "); 
        }
        if(vet[i] > 0){
           printf("POSITIVE"); 
        }
        if(vet[i] < 0){
           printf("NEGATIVE"); 
        }
        if(vet[i] == 0){
           printf("NULL"); 
        }

        printf("\n");        
    }   
    return 0;
}