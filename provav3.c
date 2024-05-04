#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float notas[5], media=0;
int i=0;

int main(){
    setlocale(LC_ALL,"portuguese");

    do{
        printf("\nDigite a nota do aluno %i = ", 1+i);
        scanf("%f", &notas[i]);
        if(notas[i]<0 || notas[i]>10){
            printf("Nota digitada inválida, digite uma nota entre 0 e 10!!!!");
        }else{
            media+=notas[i]; 
            i++;
        }
    }while(i<5);
    
    media/=5;
    printf("\nA média das notas = %.1f\n", media);

     return 0;
}