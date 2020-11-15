#include <stdio.h>

int main(){

    int N[20] = {};
    int i = 0, aux = 0, tamanho_vet = 0;

    for(i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }

    tamanho_vet = sizeof(N)/sizeof(int) - 1;

    for(i = 0; i < 20; i++){
        if(i < 10){
            aux = N[i];
            N[i] = N[tamanho_vet - i];
            N[tamanho_vet - i] = aux;
        }        

        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}