//URI Online Judge | 1866
#include <stdio.h>

int main(){

    int n, s=0, c;

    scanf("%d", &c);

    while(c > 0){

        scanf("%d", &n);

        if(n % 2 == 0){
            s = 0;
        }else if(n % 2 == 1){
            s = 1;
        }
        printf("%d\n", s);
        c--;
    }  

    return 0;
}