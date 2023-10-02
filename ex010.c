#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");

int num1;
printf("Insira o número:");
scanf("%d", &num1);

if (num1 % 2 == 0){
printf("O número %d e par", num1);

}
else {
    printf("O número inserido %d é impar",num1);
}
}
