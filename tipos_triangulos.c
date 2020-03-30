#include <stdio.h>
#include <math.h>

int main(){
    float A=0, B=0, C=0, aux=0;
    
    scanf("%f %f %f", &A, &B, &C);
    
    if(A < B){    
        aux = A;
        A = B;
        B = aux;    
    }
    if(B < C){
       aux = B;
       B = C;
       C = aux;       
    }
    if(A < B){    
        aux = A;
        A = B;
        B = aux;    
    }    

    if(A >= (B + C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(pow(A,2) == (pow(B,2) + pow(C,2))){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(pow(A,2) > (((pow(B,2)) + (pow(C,2))))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(pow(A,2) < (pow(B,2) + pow(C,2))){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if((A == B) && (B == C)){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ((A == B) || (B == C)){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}



