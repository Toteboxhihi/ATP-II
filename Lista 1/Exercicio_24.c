// Programa que gera um array com 5 inteiros e verifica se todos os elementos são positivos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 10
#define LIM_SUP RAND_MAX/2
#define LIM_INF -RAND_MAX/2


// Função que verifica se todos os elementos do Array sao positivos
_Bool Eh_Positivo (int Array[QTD_NUM]){

    for(int i = 0; i < QTD_NUM; i++){

        if(Array[i] < 0)
            return 0;
    }
    return 1;
}



int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    long int Random[QTD_NUM];


    // Preenchendo o Array
    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = (rand() % (LIM_SUP + 1 - LIM_INF)) + LIM_INF;

        // Descomente a linha abaixo para ver os numeros gerados
//        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);
    }
    if(Eh_Positivo(Random))
        printf("Todos os numeros sao positivos\n");
    else
        printf("Nem todos os elementos sao positivos\n");

return 0;
}
