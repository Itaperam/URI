#include <stdio.h>

int main(){
    char nome[30];   
    double S, V;
    scanf("%s", &nome);
    scanf("%lf", &S);
    scanf("%lf", &V);
    
    printf("TOTAL = R$ %.2lf\n", (S + ((V*15)/100)));
    return 0;
}