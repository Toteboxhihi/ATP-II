// Calcula a soma de um array via ponteiro

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 7
#define LIM_SUP 10
#define LIM_INF 0

void gerador(int *pont1){

    // Alterando a seed da randomização
    srand(time(NULL));

    for(int i = 0; i < QTD_NUM; i++){

        *pont1 = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        printf("Numero gerado: %d\n", *pont1);
        pont1++;

    }
}

void somador(int *pont_Array , int *pont_soma, int Qtd){

    *pont_soma = 0;
    for(int i = 0; i < Qtd; i++){

        *pont_soma = *pont_soma + *pont_Array;
        pont_Array++;

    }

}

int main(){

    int Random[QTD_NUM], soma = 0;
    gerador(&Random[0]);

    somador(&Random[0], &soma, QTD_NUM);

    printf("A soma eh: %d\n", soma);

return 0;
}

