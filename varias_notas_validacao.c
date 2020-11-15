//URI Online Judge | 1118
#include <stdio.h>

int main(){
    double n, n1=-1, n2=-1, media;
    int j=-1, x;

    while(j!= 0){
        scanf("%lf", &n);

        if(n < 0 || n >10){
            printf("nota invalida\n");
        }
        else{
            if(n1 == -1){
                n1 = n;
            }
            else if(n1 != -1 && n2 == -1){
                n2 = n;
                media = (n1+n2)/2;
                printf("media = %.2lf\n", media);

                while(x != 2){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &x);
                
                    switch (x){
                        case 1:
                            if(n < 0 || n >10){
                                printf("nota invalida\n");
                            }
                            else if(n1 == -1){
                                    n1 = n;
                                }
                            }
                            else if(n1 != -1 && n2 == -1){
                                n2 = n;
                                media = (n1+n2)/2;
                                printf("media = %.2lf\n", media);
                            }
                        break;

                        case 2:
                            j++;
                        break;

                        default:
                            printf("novo calculo (1-sim 2-nao)\n");
                            continue;
                        break;
                    } 
                }               
            }             
        }
                 
    }
    return 0;
}