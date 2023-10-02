#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){

    int a, c;

    printf("Insira o primeiro valor:");
    scanf("%d",&a);
    printf("Insira o segundo valor:");
    scanf("%d", &c);

    printf("a soma entre %d e %d da %d\n", a, c, a + c);
    printf("%d meno %d da %d\n", a, c, a-c);
    printf("%d vezes %d da %d\n", a, c, a*c);
    printf("O resto entre %d e %d da %d\n",a ,c, a/c);
    printf("%d a dividi por %d da igual a %d\n", a, c, a%c);

    }
