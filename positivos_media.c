#include<stdio.h>

int main(){
    double num, mountP=0, mediaP=0;
    int countP=0, i=0;    

    for(i; i < 6; i++){
        scanf("%lf",&num);
        if(num > 0){
            countP++;
            mountP+= num;           
        }
    }
    mediaP = mountP/countP;
    printf("%d valores positivos\n", countP);
    printf("%.1lf\n", mediaP);
    
    return 0;
}