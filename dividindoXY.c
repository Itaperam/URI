//URI Online Judge | 1116
#include <stdio.h>

int main(){
    int n, i, x, y;
    double r;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%d %d", &x, &y);
        
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            r = (double) x/y;
            printf("%.1lf\n", r);
        }
    }

    return 0;
}