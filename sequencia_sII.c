#include <stdio.h>

int main(){

    int i, j=0;
    double s=1;

    for(i = 3, j = 2; i <= 39; i+=2, j*=2){
        s += (double)i/j;           
    }
    printf("%.2lf\n", s);

    return 0;
}