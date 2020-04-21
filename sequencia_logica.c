//URI Online Judge | 1144
#include <stdio.h>

int main(){
    int n, i, q=0, c=0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
       q = i*i;
       c = i*i*i;
       printf("%d %d %d\n", i, q, c);
       printf("%d %d %d\n", i, q+1, c+1);         
    }
    return 0;
}