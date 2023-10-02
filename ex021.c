#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Crie um programa que solicite ao utilizador a entrada de 10 números inteiros, armazenando-os num vetor.
De seguida, encontre o maior valor presente no vetor e a posição em que ele está.
Por fim, imprima o maior valor encontrado e sua posição no vetor.*/

//NAO FEITO POR MIM
void main(){
    setlocale(LC_ALL,"");

    //declarar o vetor
    int vetor[10];

    //declarar variavel maior
    int auxMaior, auxPosicao;

    //pedir os numeros
    for(int cont = 0; cont < 10; cont++){
        printf("Digite um número: ");
        scanf("%d", &vetor[cont]);
    }

    //verificar o maior
    for(int cont = 0; cont < 10; cont++){
        if(cont == 0){
            auxMaior = vetor[cont];
            auxPosicao = cont;
        }else{
            if(vetor[cont] > auxMaior){
                auxMaior = vetor[cont];
                auxPosicao = cont;
            }
        }
    }

    printf("O maior valor encontrado é: %d\n", auxMaior);
    printf("Na posição %d do vetor", auxPosicao + 1);

}
