#include <stdio.h>

int main(){

    int t = 0, hh = 0, mm = 0, ss = 0;

    scanf("%d", &t);    

    do{
        if(t >= 3600){           
            t -= 3600;
             hh++;
        }
        else if(t < 3600 && t >= 60){
            t -= 60;
            mm++;
        }
        else if(t < 60){
            t -= 1;
            ss++;
        }       

    }while(t != 0);   
  
    printf("%d:%d:%d\n", hh, mm, ss);   

    return 0;
}