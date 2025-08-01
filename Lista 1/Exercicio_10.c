//Gera 10 numeros aleatorios de 50 a 150, armazena-os em um array e imprima a media;

#include <stdio.h>
#include <stdlib.h>

#define QTD_NUM 10
#define LIM_SUP 150
#define LIM_INF 50


int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM], soma = 0;
    float media = 0;

    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = rand() % (LIM_SUP+1) + LIM_INF;
        soma = soma + Random[i];

        // Caso queira ver os numeros, retirar de comentarios a linha abaixo:

//        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);

    }
    media = soma / QTD_NUM;

    printf("A media eh: %f\n", media);

return 0;
}
