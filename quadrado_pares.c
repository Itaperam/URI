#include <stdio.h>

int main(){
    int n =0, x=0, val=0;

    scanf("%d", &n);

    for(x=1; x <= n; x++){        

        if(x % 2 == 0){
            val = x * x;
             printf("%d^2 = %d\n", x, val);
        }        
    }    
    return 0;
}