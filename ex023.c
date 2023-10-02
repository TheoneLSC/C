#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*Crie 3 Vetores. Cada vetor vai receber 5 notas introduzidas pelo utilizador.
Calcule a média de cada vetor e exiba no ecrã, juntamente com a validação: >=9.5 aprovado >8 em recuperação <=8 reprovado
*/

    void main(){
    setlocale(LC_ALL,"");
    //Declarar arrays e variavel de tamanho
    float somaPaulo = 0, somaMayra = 0, somaPatricia = 0;
    int paulo[5], mayra[5], patricia[5], cont;
    int tam = sizeof(paulo) / sizeof(paulo[0]); // Calcular o numero de elementos


    printf("Notas do paulo: \n");
    for ( int i = 0; i < tam; i++){
        printf("Digite a nota:");
        scanf("%d", &paulo[i]);
        somaPaulo = somaPaulo + paulo[i];
    }

    printf("Notas do Mayra: \n");
    for ( int i = 0; i < tam; i++){
        printf("Digite a nota:");
        scanf("%d", &paulo[i]);
        somaMayra = somaMayra + mayra[i];
    }
     printf("Notas do Patricia: \n");
     for ( int i = 0; i < tam; i++){
        printf("Digite a nota:");
        scanf("%d", &paulo[i]);
        somaPatricia = somaPatricia +  patricia[i];
    }




    float mediaPaulo = somaPaulo / tam;
    float mediaMayra = somaMayra / tam;
    float mediaPatricia= somaPatricia / tam;


    if( mediaPaulo >= 9.6){
        printf("O Paulo foi aprovado com media de %.2f valores.\n", mediaPaulo);
    }else if (mediaPaulo<= 8){
        printf("O Paulo foi reprovado com media de %.2f valores.\n", mediaPaulo);
    }else {
        printf("O Paulo esta em recuperacao com media de %.2f valores\n", mediaPaulo);
    }

    if( mediaPatricia>= 9.6){
        printf("O Paulo foi aprovado com media de %.2f valores.\n", mediaPatricia);
    }else if (mediaPatricia<= 8){
        printf("O Paulo foi reprovado com media de %.2f valores.\n", mediaPatricia);
    }else {
        printf("O Paulo esta em recuperacao com media de %.2f valores\n", mediaPatricia);
    }

    if( mediaMayra >= 9.6){
        printf("O Paulo foi aprovado com media de %.2f valores.\n", mediaMayra);
    }else if (mediaMayra<= 8){
        printf("O Paulo foi reprovado com media de %.2f valores.\n", mediaMayra);
    }else {
        printf("O Paulo esta em recuperacao com media de %.2f valores\n", mediaMayra);
    }

    }
