#include <stdio.h>

int main(){

    int i;
    double s=0;

    for(i = 1; i <=100; i++){
        s += (double)1/i;       
    }
    printf("%.2lf\n", s);

    return 0;
}