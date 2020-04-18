//URI Online Judge | 1115
#include <stdio.h>

int main(){

    int x, y, i=-1;

    while(i != 0){
        scanf("%d %d", &x, &y);

        if(x == 0 || y == 0){
            i = 0;
        }
        else{
            if(x > 0 && y > 0){
                printf("primeiro\n");
            }
            else if(x < 0 && y > 0){
                printf("segundo\n");
            }
            else if(x < 0 && y < 0){
                printf("terceiro\n");
            }
            else if(x > 0 && y < 0){
                printf("quarto\n");
            }            
        }
    }    

    return 0;
}