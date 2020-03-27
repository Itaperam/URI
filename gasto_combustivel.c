#include <stdio.h>

int main(){
    double h, v, d, l;

    scanf("%lf", &h);
    scanf("%lf", &v);

    d = h*v;
    l = d/12;   
    
    printf("%.3lf\n", l);

    return 0;
}