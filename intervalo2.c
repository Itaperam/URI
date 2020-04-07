#include <stdio.h>

int main(){
    int n =0, x=0, in=0, out=0, val;

    scanf("%d", &n);

    for(x=0; x < n; x++){
        scanf("%d", &val);

        if(val >= 10 && val <=20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0;
}