#include <stdio.h>

int main(){

    int dias = 0, aa = 0, mm = 0, dd = 0;

    scanf("%d", &dias);    

    do{
        if(dias >= 365){           
             dias -= 365;
             aa++;
        }
        else if( dias < 365 &&  dias >= 30){
            dias -= 30;
            mm++;
        }
        else if( dias < 30){
             dias -= 1;
            dd++;
        }       

    }while(dias != 0);   
  
    printf("%d ano(s)\n", aa);
    printf("%d mes(es)\n", mm);
    printf("%d dia(s)\n", dd); 

    return 0;
}