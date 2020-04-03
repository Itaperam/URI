#include <stdio.h>

int main(){

    double salario=0, imposto=0;

    scanf("%lf", &salario);   

    if(salario >= 0 && salario <= 2000){
        printf("Isento\n");
    }
    else if(salario >= 2000.01 && salario <= 3000){
        // 8%
         salario -=2000;
         imposto = (salario*8) / 100;
         printf("R$ %.2lf\n", imposto);
    }
    else if(salario >= 3000.01 && salario <= 4500){
        // 18%
        salario -=3000;
        imposto = ((salario*18) / 100) +80; 
        printf("R$ %.2lf\n", imposto);       
    }
    else{
        // 28%
        salario -=4500;
        imposto = ((salario*28) / 100) +350;
        printf("R$ %.2lf\n", imposto);
    }    

    return 0;
}