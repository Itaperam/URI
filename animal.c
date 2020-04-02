#include <stdio.h>
#include <stdlib.h>

int main(){

    char palavra1[15];
    char palavra2[10];
    char palavra3[10];

    char categoria1[] = {"vertebrado"};
    char categoria2[] = {"invertebrado"};
    
    char categoria3[] = {"ave"};
    char categoria4[] = {"mamifero"};
    char categoria5[] = {"inseto"};
    char categoria6[] = {"anelideo"};

    char categoria7[] = {"carnivoro"};
    char categoria8[] = {"onivoro"};
    char categoria9[] = {"herbivoro"};
    char categoria10[] = {"hematofago"};

    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);
   
    //vertebrado
    if(strcmp(palavra1, categoria1) == 0){        
        //Ave
        if(strcmp(palavra2, categoria3) == 0){
            //Carnivoro
            if(strcmp(palavra3, categoria7) == 0){              
            printf("aguia\n");
            }
            //Onivoro 
            else if(strcmp(palavra3, categoria8) == 0){
                printf("pomba\n");
            }
        }
        //Mamifero
        else if(strcmp(palavra2, categoria4) == 0){
            //Onivoro 
            if(strcmp(palavra3, categoria8) == 0){
                printf("homem\n");
            }
            //Herbivoro 
            else if(strcmp (palavra3, categoria9) == 0){
                printf("vaca\n");
            }
        }           
    }    
    //Invertebrado
    else if(strcmp(palavra1, categoria2) == 0){
        //Inseto
        if(strcmp(palavra2, categoria5) == 0){
            //Hematofago
            if(strcmp(palavra3, categoria10) == 0){
               printf("pulga\n");
            }
            //Lagarta
            else if (strcmp(palavra3, categoria9) == 0){
               printf("lagarta\n");
            }
        }
        //Anelideo
        else if(strcmp(palavra2, categoria6) == 0){
            //hematofago
            if(strcmp(palavra3, categoria10) == 0){
                printf("sanguessuga\n");
            }
            //Onivoro
            else if(strcmp(palavra3, categoria8) == 0){
                printf("minhoca\n");
            }
        }        
    }     
    return 0;
}