// Gera 20 numeros aleatorios de 0 a 100, armazena-os em um array e imprima-os;

#include <stdio.h>
#include <stdlib.h>

#define QTD_NUM 20
#define LIM_SUP 100
#define LIM_INF 0


int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM];

    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = rand() % (LIM_SUP+1);
        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);

    }

return 0;
}
