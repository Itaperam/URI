#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d", &a, &b);

    if(a == b){
        c = a;
    }
    else if(a > b){
        c = a;
    }
    else if(a < b){
        c = b;
    }

    printf("%d\n", c);

    return 0;
}