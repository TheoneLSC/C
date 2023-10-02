#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

    void main(){

    setlocale(LC_ALL,"");

printf("~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~Bem vindo~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~\n");

int dias, km;
printf("Quantos dias teve o carro:");
scanf("%d", &dias);

printf("Quantos km percorridos:");
scanf("%d", &km);

float preco_total = dias * 60 + km * 0.456;

printf("O cliente tem a pagar %0.2f ", preco_total);


}
