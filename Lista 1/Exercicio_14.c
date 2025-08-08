// Programa que declara um array imprime os elementos dele com um ponteiro

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 5
#define LIM_SUP RAND_MAX/2
#define LIM_INF -RAND_MAX/2



int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM], *pont1;

    //Preenchimento do Array
    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);

    }

    printf("\n\n");

    // Modificação do array via ponteiro
    pont1 = &Random[0];
    for(int i = 0; i < QTD_NUM; i++){

        *pont1  = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        printf("O numero alterado na posicao \"%d\" eh: %d\n", i, *pont1);
        pont1++;
    }

return 0;
}

