#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Crie um programa que solicite ao utilizador a entrada de 10 n�meros inteiros, armazenando-os num vetor.
De seguida, encontre o maior valor presente no vetor e a posi��o em que ele est�.
Por fim, imprima o maior valor encontrado e sua posi��o no vetor.*/

//NAO FEITO POR MIM
void main(){
    setlocale(LC_ALL,"");

    //declarar o vetor
    int vetor[10];

    //declarar variavel maior
    int auxMaior, auxPosicao;

    //pedir os numeros
    for(int cont = 0; cont < 10; cont++){
        printf("Digite um n�mero: ");
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

    printf("O maior valor encontrado �: %d\n", auxMaior);
    printf("Na posi��o %d do vetor", auxPosicao + 1);

}
