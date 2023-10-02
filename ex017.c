#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");

int opcao, opcao2;
    printf("Insira o primeiro numero:");
    scanf("%d", &opcao);
    printf("Insira o seundo numero:");
    scanf("%d", &opcao2);

   int i=opcao, i2= opcao2;

    while(i < i2){
        printf("%d\n", i); i++;}


    }
