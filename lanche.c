#include <stdio.h>

int main(){
    int code=0, qtd=0;
    double total=0;

    scanf("%d %d", &code, &qtd);

    switch(code){
        case 1:
            total = qtd * 4.00;
            printf("Total: R$ %.2lf\n", total);
        break;
        case 2:
            total = qtd * 4.50;
            printf("Total: R$ %.2lf\n", total);
        break;
        case 3:
            total = qtd * 5.00;
            printf("Total: R$ %.2lf\n", total);
        break;
        case 4:
            total = qtd * 2.00;
            printf("Total: R$ %.2lf\n", total);
        break;
        case 5:
            total = qtd * 1.50;
            printf("Total: R$ %.2lf\n", total);
        break;
    }
    return 0;
}