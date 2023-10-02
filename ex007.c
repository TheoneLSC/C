#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

    void main(){
    setlocale(LC_ALL,"");

int a, b;

printf("Inserir ano de nascimento: ");
scanf("%d", &a);

printf("Inserir ano atual:");
scanf("%d", &b);

int idade = b - a;

printf("A idade do utilizador e %d anos",idade);

    }
