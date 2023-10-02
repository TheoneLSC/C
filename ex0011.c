#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
    setlocale(LC_ALL,"");

float nota1,nota2, nota3, nota4, nota5;

    printf("Insira a primeira nota :");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    printf("Insira a quarta nota: ");
    scanf("%f", &nota4);

    printf("Insira a quinta nota: ");
    scanf("%f", &nota5);

float notaTotal = (nota1 + nota2 +nota3+nota4+nota5) /5;

if (notaTotal >= 9.5 ){
printf("Passou com %f valores", notaTotal);
}
else if (notaTotal >= 8){
printf("Em recuperação com nota total %f valores", notaTotal);
}
else(printf("reprovou com %f valores"), notaTotal);







    }
