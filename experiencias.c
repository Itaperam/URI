#include <stdio.h>

int main(){

    int n, qtd, i; 
    char tipo, pct = '%';
    double pctCoelho=0, pctRato=0, pctSapo=0, totalCobaias=0, totalCoelhos=0, totalRatos=0, totalSapos=0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %c", &qtd, &tipo);
        totalCobaias += qtd;

        if(tipo == 'C'){
            totalCoelhos+=qtd;
        }
        if(tipo == 'R'){
            totalRatos+=qtd;
        }
        if(tipo == 'S'){
            totalSapos+=qtd;
        }

        pctCoelho = (totalCoelhos*100)/totalCobaias;
        pctRato = (totalRatos*100)/totalCobaias;
        pctSapo = (totalSapos*100)/totalCobaias;        
    }

    printf("Total: %.0lf cobaias\n", totalCobaias);

    printf("Total de coelhos: %.0lf\n", totalCoelhos);
    printf("Total de ratos: %.0lf\n", totalRatos);
    printf("Total de sapos: %.0lf\n", totalSapos);

    printf("Percentual de coelhos: %.2lf %c\n",pctCoelho, pct);
    printf("Percentual de ratos: %.2lf %c\n",pctRato, pct);
    printf("Percentual de sapos: %.2lf %c\n",pctSapo, pct);
    
    return 0;
}