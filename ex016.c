#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    void main(){
    setlocale(LC_ALL,"");


int i, opcao;

printf("Inserir o numero:");
scanf("%d", &opcao);

i = opcao;
 while (i >0){
        printf("%d\n", i); i--;}

}


