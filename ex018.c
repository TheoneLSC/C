#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");


    int op1, op2;

    printf("Insira o numero:");
    scanf("%d", &op1);

    int i1=op1, i2=op2;

    do {
        printf("%d x %d =%d\n", i1, i2, i1*i2);
        i2++;
    }   while (i2<100);
    }
