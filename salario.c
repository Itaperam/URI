#include <stdio.h>

int main(){
    int NUMBER;
    double Q, H;
    scanf("%d", &NUMBER);
    scanf("%lf", &Q);
    scanf("%lf", &H);   

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2lf\n", Q*H);
    return 0;
}