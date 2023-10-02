#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
setlocale(LC_ALL,"");

int veInserida, veMaxima = 80, kmH = 7, multa = 100;

printf("Insira a velocidade:");
scanf("%d", &veInserida);

int multaTotal = (veInserida - veMaxima)*7  + multa;

if (veInserida > veMaxima) {
printf("Tem de pagar multa de %d", multaTotal);}

else printf ("Tenha um bom dia!!");
}
