#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 5
#define LIM_SUP 0
#define LIM_INF 255

// Gerador de caracteres aleatórios
void gerador(char *pont1){

    for(int i = 0; i < QTD_NUM; i++){

        *pont1 = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        printf("Caractere gerado: %c\n", *pont1);
        pont1++;
    }
}

//Swap entre os caracteres
void swap_char(char *pont_Array, int Qtd){

    char aux;

    for(int i = 0; i < ceil(Qtd/2); i++){
        aux = pont_Array[i];
        pont_Array[i] = pont_Array[Qtd - i - 1];
        pont_Array[Qtd - i - 1] = aux;
    }
    for(int i = 0; i < Qtd; i++){
        printf("Caractere posicao %d: %c\n", i, pont_Array[i]);
    }


}

int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    char Random[QTD_NUM];
    gerador(Random);

    swap_char(Random, QTD_NUM);

return 0;
}

