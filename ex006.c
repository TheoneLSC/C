#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

    void main(){

    setlocale(LC_ALL,"");

    float a, b, c, d, e;
    printf("Insira o primeiro numero:");
    scanf("%f",&a);
    printf("Insira o segundo numero:");
    scanf("%f",&b);
    printf("Insira o terceiro numero:");
    scanf("%f",&c);
    printf("Insira o quarto numero:");
    scanf("%f",&d);
    printf("Insira o quinto nunero:");
    scanf("%f",&e);
    float numbtotal = a + b +c + d + e;
    printf("A media entre os 5 numeros da %.2f", numbtotal/5 );
    }
