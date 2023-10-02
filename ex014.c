#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
    setlocale(LC_ALL,"");

    int valor1, valor2;
    int opcao;

    printf("Insira o primeiro numero:");
    scanf("%d", &valor1);
    printf("Insira o segundo numero:");
    scanf("%d", &valor2);


    printf("Bem vindo");
    printf("\n[1]-Subetrair");
    printf("\n[2]-Soma");
    printf("\n[3]-Multiplique"),
    printf("\n[4]- Divide\n");
    scanf("%d",&opcao );


    switch ( opcao){
    case 1:
            printf("%d - %d = %d", valor1, valor2, valor1-valor2);
        break;
    case 2:
            printf("%d + %d = %d", valor1, valor2, valor1 + valor2);
        break;
    case 3:
            printf("%d * %d = %d", valor1, valor2, valor1 * valor2);
        break;
    case 4:
            printf("%d / %d = %d", valor1, valor2, valor1 / valor2);
        break;
    default:
            printf("ERRO");
    }

    }
