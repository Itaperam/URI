#include<stdio.h>

int main(){
    int num=0, par=0, impar=0, pos=0, neg=0,  i;

    for(i=0; i < 5; i++){
        scanf("%d",&num);
        if(num % 2 == 0)
            par++;         
        if(num % 2 == 1 || num % 2 == -1 )
            impar++;       
        if(num > 0)
            pos++;        
        if(num < 0)
            neg++;       
    }
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    
    return 0;
}