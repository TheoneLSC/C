#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");

int num1;
printf("Insira o n�mero:");
scanf("%d", &num1);

if (num1 % 2 == 0){
printf("O n�mero %d e par", num1);

}
else {
    printf("O n�mero inserido %d � impar",num1);
}
}
