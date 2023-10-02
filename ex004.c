#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
    setlocale(LC_ALL,"");

    int a;

    printf("Insira um numero:");

    scanf("%d", &a);

    printf("O numero antecessor a %d e %d o numero sucessor  é %d", a, a-1, a+1);

    }
