#include <stdio.h>

#include <stdio.h>

int main(){

    double i=0, j=1;    

    for(i=0; i <= 2.1; ){

        for(j=1; j <=5 ; j++){

            if(i== 0.0 || i == 1.0 || i >= 1.8 && j == 1.0 || j == 2.0 || j == 3.0 || j == 4.0 || j == 5.0){
                printf("I=%.0lf J=%.0lf\n", i, j+i);
                printf("I=%.0lf J=%.0lf\n", i, j+1+i);
                printf("I=%.0lf J=%.0lf\n", i, j+2+i); 
                i+= 0.2;
            }
            else{
                printf("I=%.1lf J=%.1lf\n", i, j+i);
                printf("I=%.1lf J=%.1lf\n", i, j+1+i);
                printf("I=%.1lf J=%.1lf\n", i, j+2+i); 
                i+= 0.2;
            }
        }              
                                
    } 
    return 0;
}