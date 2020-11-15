//URI Online Judge | 1117
#include <stdio.h>

int main(){
    double n, n1=-1, n2=-1, media;
    int j=-1;

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
                n2 = n;a
                media = (n1+n2)/2;
                printf("media = %.2lf\n", media);
                j++;               
            }
        }        
    }
    return 0;
}