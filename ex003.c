#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
        setlocale(LC_ALL,"");

        int a, b;

        printf("insira o primeiro numero :");
        scanf("%d", &a);

        printf("insira o segundo numero :");
        scanf("%d", &b);

        printf("A soma entre %d é %d e %d", a ,b , a+b);

    }
