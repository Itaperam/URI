#include <stdio.h>

int main(){
    int x=0, nImpar=0;

    scanf("%d", &x);    
    
    while(nImpar < 6 ){

        if(x % 2 == 1 || x % 2 == -1){
            printf("%d\n", x);
            nImpar++;            
        }               
        x++;        
    }    
    return 0;
}