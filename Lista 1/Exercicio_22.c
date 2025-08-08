// Gera 20 numeros aleatorios, armazena-os em um array e verifica quantos pares e quantos impares foram gerados;

#include <stdio.h>
#include <stdlib.h>

#define QTD_NUM 20


int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM], par = 0, impar = 0;

    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = rand();

        // Caso queira ver os numeros, retirar de comentarios a linha abaixo:

//        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);
        if(Random[i]%2 == 0){
            par++;

        }else
            impar++;

    }
    printf("Dentre os %d numeros ha %d numeros pares e %d numeros impares\n", QTD_NUM, par, impar);

return 0;
}
