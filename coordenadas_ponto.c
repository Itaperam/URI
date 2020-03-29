#include<stdio.h>

int main(){
    double x=0, y=0;

    scanf("%lf %lf", &x, &y);   

    if(x == 0.0 && y == 0.0){
        printf("Origem\n");
    }    
    else if(x > 0 && y > 0){ //Q1
        printf("Q1\n");
    }
    else if(x < 0 && y > 0){ //Q2
        printf("Q2\n");
    }
    else if(x < 0 && y < 0){ //Q3
        printf("Q3\n");
    }
    else if(x > 0 && y < 0){ //Q4
        printf("Q4\n");
    }
    else if(x != 0.0 && y == 0.0){
        printf("Eixo X\n");
    }
    else if(x == 0.0 && y != 0.0){
        printf("Eixo Y\n");
    }
    return 0;
}