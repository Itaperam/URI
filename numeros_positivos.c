#include<stdio.h>

int main(){
    double num;
    int countP=0, i=0;

    for(i; i < 6; i++){
        scanf("%lf",&num);
        if(num > 0){
            countP++;            
        }
    }
    printf("%d valores positivos\n", countP);
    
    return 0;
}