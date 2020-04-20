//URI Online Judge | 1134
#include <stdio.h>

int main(){
    int tipo=0, gasolina=0, alcool=0, diesel=0;

    while(tipo != 4){
        scanf("%d", &tipo);
        
        switch (tipo)
        {
        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alcool);
            printf("Gasolina: %d\n", gasolina);
            printf("Diesel: %d\n", diesel);
            break;
        default:            
            break;
        }
    }

    return 0;
}