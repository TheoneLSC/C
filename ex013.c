#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");

    char dia;

    printf("Insira um numero de 1 a 7:");
    scanf(" %c", &dia);

    switch(dia){
    case '1':
            printf("O dia e seguda");
        break;
    case '2':
            printf("O dia e terca");
        break;
    case '3':
            printf("O dia e quarta");
        break;
    case '4':
            printf("O dia e quinta");
        break;
    case '5':
            printf("O dia e sexta");
        break;
    case '6':
            printf("O dia e sabado");
        break;
    case '7':
            printf("O dia e domingo");
        break;
    default:
        printf("ERRO TENTE DENOVO");
        break;}


}
