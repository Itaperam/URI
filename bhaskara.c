#include <stdio.h>
#include <math.h>

int main(){

    double A=0, B=0, C=0, R1=0, R2=0, D=0;

    scanf("%lf %lf %lf", &A, &B, &C);    

    D = pow(B,2) - (4*A*C);

    R1 = (-B + sqrt(D))/(2*A);
    R2 = (-B - sqrt(D))/(2*A);   

    if(A == 0 || D < 0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }

    return 0;
}