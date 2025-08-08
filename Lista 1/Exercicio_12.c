// Gera 12 numeros aleatorios de -20 a 20, armazena-os em um array e avalie a quantidade de negativos;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 12
#define LIM_SUP 20
#define LIM_INF -20


int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM], cont = 0;

    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = (rand() % (LIM_SUP +1 - LIM_INF)) + LIM_INF;

//        Caso queira ver os numeros, retirar de comentarios a linha abaixo:

//        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);
        if(Random[i] < 0)
            cont++;

    }
    printf("Foi(ram) gerado(s) %d numero(s) negativo(s)\n", cont);

return 0;
}
