#include <stdio.h>

int main(){

    double salario=0, novoSalario, reajuste=0;
    int percent=0;
    char p = '%';

    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 400){
        novoSalario = salario + ((salario * 15)/100);
        reajuste = novoSalario - salario;
        percent = 15;
        
    }
    else if (salario >= 400.01 && salario <= 800){
        novoSalario = salario + ((salario * 12)/100);
        reajuste = novoSalario - salario;
        percent = 12;
    }
    else if (salario >= 800.01 && salario <= 1200){
        novoSalario = salario + ((salario * 10)/100);
        reajuste = novoSalario - salario;
        percent = 10;
    }
    else if (salario >= 1200.01 && salario <= 2000){
        novoSalario = salario + ((salario * 7)/100);
        reajuste = novoSalario - salario;
        percent = 7;
    }
    else if (salario > 2000){
        novoSalario = salario + ((salario * 4)/100);
        reajuste = novoSalario - salario;
        percent = 4;
    }
    
    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %c\n", percent, p);
    
    return 0;
}