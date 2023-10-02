#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
    setlocale(LC_ALL,"");

    int notaF;


    printf("Insira a nota final:");
    scanf("%d", &notaF);


    switch(notaF){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Muito insuficiente");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Insuficiente");
            break;
        case 11:
        case 12:
        case 13:
        case 14:
            printf("suficiente");
            break;
        case 15:
        case 16:
            printf("Bom");
            break;
        case 17:
        case 18:
        case 19:
            printf("Muito bom");

        break;
        case 20:
            printf("Excelente");
        default:
            printf("ERRO por favor insira un muneor inteiro entre 0 e 20");
}
    }
