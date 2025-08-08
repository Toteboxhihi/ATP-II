// Calcula a media de um array via ponteiro

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 8
#define LIM_SUP 10
#define LIM_INF 0

void gerador(float *pont1){

    for(int i = 0; i < QTD_NUM; i++){

        *pont1 = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        printf("Numero gerado: %.2f\n", *pont1);
        pont1++;

    }
}

void f_media(float *pont_Array , float *pont_media, int Qtd){

    for(int i = 0; i < Qtd; i++){

        *pont_media = *pont_media + *pont_Array;
        pont_Array++;
    }

    *pont_media = *pont_media/Qtd;

}

int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    float Random[QTD_NUM], media = 0;
    gerador(&Random[0]);

    f_media(&Random[0], &media, QTD_NUM);

    printf("A media eh: %.2f\n", media);

return 0;
}


