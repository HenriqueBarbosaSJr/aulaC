#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1, n2, n3, n4, n5, media;

int main(){
    setlocale(LC_ALL,"portuguese");
    printf("\nDigite a nota do aluno 1 =");
    scanf("%f", &n1);
    printf("\nDigite a nota do aluno 2 =");
    scanf("%f", &n2);
    printf("\nDigite a nota do aluno 3 =");
    scanf("%f", &n3);
    printf("\nDigite a nota do aluno 4 =");
    scanf("%f", &n4);
    printf("\nDigite a nota do aluno 5 =");
    scanf("%f", &n5);

    media = n1+n2+n3+n4+n5;
    media=media/5;
    printf("\nA média das notas = %.1f\n", media);

     return 0;
}