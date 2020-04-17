#include <stdio.h>

int main(){
    int soma=0, n, m, i, j=1;    

    while(j!=0){
        
        scanf("%d %d", &n, &m);

        if (n == 0 || m ==0 || n < 0 || m < 0){
            j = 0;
        }
        else if(n < m) {
            for(i = n; i <=m; i++){
                soma +=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
            soma=0;
        }
        else if(n > m) {
            for(i = m; i <=n; i++){
                soma +=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
            soma=0;
        }
        else if(n == m) {
           for(i = m; i <=n; i++){
                soma +=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
            soma=0;
        }      
    }

    return 0;
}