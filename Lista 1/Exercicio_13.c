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

    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        pont1 = &Random[i];
        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, *pont1);

    }

return 0;
}
