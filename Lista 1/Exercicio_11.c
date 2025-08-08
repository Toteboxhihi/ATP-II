// Gera 15 numeros aleatorios de 0 a 50, armazena-os em um array e imprima o maior;



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 15
#define LIM_SUP 50
#define LIM_INF 0


int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM], Comparador = -1;

    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = rand() % (LIM_SUP+1) - LIM_INF;
        // Caso queira ver os numeros, retirar de comentarios a linha abaixo:

//        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);

        if (Comparador < Random[i])
            Comparador = Random[i];
    }
    printf("O maior valor gerado foi: %d\n", Comparador);

return 0;
}
