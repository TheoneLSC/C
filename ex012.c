#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //declarar opcao do jogador
    int jogador1;

    //apresentar e ler a opcao do jogador
    printf("----PEDRA----PAPEL----TESOURA----\n\n");
    printf("[1] - PEDRA\n");
    printf("[2] - PAPEL\n");
    printf("[3] - TESOURA\n");
    printf("Qual a sua opção: ");
    scanf("%d", &jogador1);

    //declarar variavel aleatoria do computador
    srand(time(NULL));
    int computador = rand() % 3 + 1;

    //jogo
    if(jogador1 > 3 || jogador1 < 1){
        printf("ERRO!! Tente novamente!!"); //caso o jogador selecione opção inválida
    }else{

        //Apresentar a escolha do jogador em STRING
        if(jogador1 == 1){
            printf("\n\nJOGADOR ESCOLHE PEDRA\n");
        }else if(jogador1 == 2){
            printf("\n\nJOGADOR ESCOLHA PAPEL\n");
        }else{
            printf("\n\nJOGADOR ESCOLHE TESOURA\n");
        }

        //Apresentar a escolha do computador em STRING
        if(computador == 1){
            printf("COMPUTADOR ESCOLHE PEDRA\n\n");
        }else if(jogador1 == 2){
            printf("COMPUTADOR ESCOLHA PAPEL\n\n");
        }else{
            printf("COMPUTADOR ESCOLHE TESOURA\n\n");
        }

        //JOGO
        if(jogador1 == 1 && computador == 2){
            printf("COMPUTADOR GANHA!");
        }else if(jogador1 == 1 && computador == 3){
            printf("JOGADOR GANHA!");
        }else if(jogador1 == 2 && computador == 1){
            printf("JOGADOR GANHA!");
        }else if(jogador1 == 2 && computador == 3){
            printf("COMPUTADOR GANHA!");
        }else if(jogador1 == 3 && computador == 1){
            printf("COMPUTADOR GANHA!");
        }else if(jogador1 == 3 && computador == 2){
            printf("JOGADOR GANHA!");
        }else{
            printf("EMPATE!");
        }
    }
}


