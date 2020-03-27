#include <stdio.h>

int main(){

    int N = 0, q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0, q1 = 0, aux = 0;

    scanf("%d", &N);
    aux = N;

    do{
        if(N >= 100){           
            N -= 100;
             q100++;
        }
        else if(N >= 50){
            N -= 50;
            q50++;
        }
        else if(N >= 20){
            N -= 20;
            q20++;

        }
        else if(N >= 10){
            N -= 10;
            q10++;
        }
        else if(N >= 5){
            N -= 5;
            q5++;
        }
        else if(N >= 2){
            N -= 2;
            q2++;
        }
        else if(N >= 1){
            N -= 1;
            q1++;
        }

    }while(N != 0);
   
    printf("%d\n",aux);
    printf("%d nota(s) de R$ 100,00\n", q100);             
    printf("%d nota(s) de R$ 50,00\n", q50);
    printf("%d nota(s) de R$ 20,00\n", q20);
    printf("%d nota(s) de R$ 10,00\n", q10);
    printf("%d nota(s) de R$ 5,00\n", q5);
    printf("%d nota(s) de R$ 2,00\n", q2);
    printf("%d nota(s) de R$ 1,00\n", q1);

    return 0;
}