//Cria um array com 5 numeros e soma 10 a todos os elementos via ponteiros

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 5
#define LIM_SUP 0
#define LIM_INF 100

void gerador(int *pont1){

    for(int i = 0; i < QTD_NUM; i++){

        *pont1 = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        printf("Numero gerado: %d\n", *pont1);
        pont1++;
    }
}

void soma_10 (int *pont1, int Qtd){

    for(int i = 0; i < Qtd; i++){
        *pont1 = *pont1 + 10;
        printf("Numero modificado: %d\n", *pont1);
        pont1++;
    }

}

int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM];
    gerador(Random);

    soma_10(Random, QTD_NUM);

return 0;
}

