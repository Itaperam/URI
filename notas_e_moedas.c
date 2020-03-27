#include <stdio.h>
int main(){
    
    int q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0, q1 = 0,m1= 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1c = 0;
    double valor = 0;

    scanf("%lf", &valor);
    valor += 1e-9;
    
    do{
        if (valor > 99.999){
            valor = valor - 100;
            q100++;
        }  
    }while(valor > 99.999);

    do{
        if (valor > 49.999){
            valor = valor - 50;
            q50++;
        }  
    }while(valor > 49.999);

    do{
        if (valor > 19.999){
            valor = valor - 20;
            q20++;
        }  
    }while(valor > 19.999);

    do{
        if (valor > 9.999){
            valor = valor - 10;
            q10++;
        }  
    }while(valor > 9.999);

    do{
        if (valor > 4.999){
            valor = valor - 5;
            q5++;
        }  
    }while(valor > 4.999);

    do{
        if (valor > 1.999){
            valor = valor - 2;
            q2++;
        }  
    }while(valor > 1.999);

    do{
        if (valor > 0.999){
            valor = valor - 1;
            m1++;
        }  
    }while(valor > 0.999);

    do{
        if (valor > 0.4999){
            valor = valor - 0.50;
            m50++;
        }  
    }while(valor > 0.4999);

    do{
        if (valor > 0.2499){
            valor = valor - 0.25;
            m25++;
        }  
    }while(valor > 0.2499);

    do{
        if (valor > 0.0999){
            valor = valor - 0.10;
            m10++;
        }  
    }while(valor > 0.0999);

    do{
        if (valor > 0.04999){
            valor = valor - 0.05;
            m5++;
        }  
    }while(valor > 0.04999);

    do{
        if (valor > 0.00999){
            valor = valor - 0.01;
            m1c++;
        }  
    }while(valor > 0.00999);    
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", q100,q50,q20,q10,q5,q2);             
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", m1,m50,m25,m10,m5,m1c);    
      
    return 0;
}