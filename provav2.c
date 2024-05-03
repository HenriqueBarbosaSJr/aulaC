#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float notas[5], media=0;
int i;
int main(){
    setlocale(LC_ALL,"portuguese");

    for(i=0; i<5; i++){
        printf("\nDigite a nota do aluno %i = ", 1+i);
        scanf("%f", &notas[i]);
        if(notas[i]<0 || notas[i]>10){
            printf("Nota digitada inválida, digite uma nota entre 0 e 10.");
            i--;
        }else{
            media+=notas[i]; 
        }
    }
    media/=5;
    printf("\nA média das notas = %.1f\n", media);

     return 0;
}