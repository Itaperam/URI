#include <stdio.h>

int main(){

    int x=-1, qtdPar=0, somaPar=0;

    while(x != 0){

        scanf("%d", &x);

        if( x != 0){

            while(qtdPar < 5){
                if(x % 2 == 0){
                    somaPar += x;
                    qtdPar++;
                }
                x++;
            }
            printf("%d\n", somaPar);
            somaPar=0;
            qtdPar=0;
        }
    }

    return 0;
}