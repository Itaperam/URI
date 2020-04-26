#include <stdio.h>

int main(){
    int curu, boi, boto, mapin, lara, total=0;
    
    scanf("%d", &curu);
    scanf("%d", &boi);
    scanf("%d", &boto);
    scanf("%d", &mapin);
    scanf("%d", &lara);

    total= curu*300 + boi*1500 + boto*600 + mapin*1000 + lara*150 + 225;

    printf("%d\n", total);
    
    return 0;
}