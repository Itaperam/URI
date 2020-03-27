#include <stdio.h>

int main(){
    int C1, Q1, C2, Q2;
    double P1, P2;

    scanf("%d %d %lf", &C1, &Q1, &P1);
    scanf("%d %d %lf", &C2, &Q2, &P2);    
    
    printf("VALOR A PAGAR: R$ %.2lf\n", Q1*P1+Q2*P2);
    return 0;
}