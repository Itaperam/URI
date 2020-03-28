#include <stdio.h>

int main(){

    float n1=0, n2=0, n3=0, n4=0, n5=0, media=0;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1* 2) + (n2 *3) + (n3 *4) + (n4 *1)) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        media = (media + n5) / 2;

        if(media >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else if(media < 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    return 0;
}