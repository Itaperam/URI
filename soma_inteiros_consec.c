#include <stdio.h>

int main(){
    int a, soma=0, i, n=0;

    scanf("%d %d", &a, &n);
    while(n <= 0){
        scanf("%d", &n);
    }

    for(i =1; i <= n; i++){
        soma += a;
        a++;
    }
    printf("%d\n", soma);
    return 0;
}