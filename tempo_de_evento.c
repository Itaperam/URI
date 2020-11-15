#include<stdio.h>

int main(){
    
    int diaInicio=0, diaFim=0, hhI=0, mmI=0, ssI=0, hhF=0, mmF=0, ssF=0, dias=0, horas=0, min=0, seg=0;

    printf("Dia ");
    scanf("%d", &diaInicio);

    scanf("%d : %d : %d", &hhI, &mmI, &ssI);

    printf("Dia ");
    scanf("%d", &diaFim);

    scanf("%d : %d : %d", &hhF, &mmF, &ssF); 


    dias = diaFim - diaInicio;
    //horas = hhF - hhI;
   // min = mmF - mmI;
   // seg = ssF - ssI;    

    if(hhI == hhF && mmI == mmF){
        
        horas = 24 + hhF - hhI;
        min = mmF - mmI;
        
    }   
    else if(hhI == hhF && mmI < mmF){
        
        horas = hhF - hhI;
        min = mmF - mmI;
        
    }
    else if(hhI == hhF && mmI > mmF){
        
        horas = hhF - hhI + 24 -1;
        min = mmF - mmI + 60;
        
    }
    else if(hhI < hhF && mmI == mmF){
        
        dias--;
        horas = hhF - hhI;
        min = mmF - mmI;
    }        
    else if(hhI > hhF && mmI == mmF){        
        
        horas = (hhF - hhI) + 24;
        min = mmF - mmI;
        
    }
    else if(hhI > hhF && mmI > mmF){
        
        horas = (hhF - hhI) + 24 -1;
        min = (mmF - mmI)+ 60;

    }   
    else if(hhI < hhF && mmI < mmF){
        
        dias--;
        horas = hhF - hhI;
        min = mmF - mmI;
        
    }
    else if(hhI > hhF && mmI < mmF){
        
        horas = (hhF - hhI)+24;
        min = mmF - mmI;
       
    }
    else if(hhI < hhF && mmI > mmF){
        
        dias--;
        horas = (hhF - hhI)-1;
        min = (mmF - mmI)+60;
        
    }


   

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);
   
    
    return 0;
}