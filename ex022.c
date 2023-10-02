#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");

    // declara as variaveis
    int i;
    int numero[5];
    int temp;

    /*Peça ao utilizador para inserir 5 números inteiros e armazene-os num vetor.
    De seguida, inverta a ordem dos elementos no vetor e imprima o vetor invertido.*/
// ler os numeros e scanar-los para o vetor
    printf("Por favor insira 5 numeros inteiros :");
    for ( i = 0; i <5; i++){
        printf("\ndigite um numero");
        scanf("%d",&numero[i]);
    }
    //Imprimir os numeros digitados pela ordem digitada
    for ( i = 0; i<5; i++){
        printf("%d\n", numero[i]);
    }
    // alterar a ordem
    for (i = 0; i < 2; i++){
    temp = numero[i]; // a variavel temp vai receber o veto no indice de i
    numero[i] = numero [4-i]; //o vetor no indice i vai receber o vetor no indice de 4(
    numero [4 - i] = temp;//
}

    printf("Os numeors invertidos");
    for ( i = 0; i <5; i++){
        printf("\n%d", numero[i]);



}}



