// Maior e menor elemento em um array de 10 elementos

#include <stdio.h>
#include <stdlib.h>
#define QTD_NUM 10

int main(){

    //Alterando a seed de randomiza��o
    srand(time(NULL));


    // Declara��o do array e das variaveis de verifica��o
    int Nums[QTD_NUM], maior, menor;

    //Atribui��o do primeiro elemento aos comparadores
    Nums[0] = rand();
    maior = Nums[0];
    menor = Nums[0];

    //Demais elementos do array
    for(int i = 1; i < QTD_NUM; i++){

        Nums[i] = rand();

        // Caso queira ver os numeros, retirar de comentarios a linha abaixo:

//        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Nums[i]);

        if(Nums[i] > maior){
            maior = Nums[i];
        }else if(Nums[i] < menor)
            menor = Nums[i];
    }

    printf("O maior e menor numero sao \"%d\" \"%d\", respectivamente\n", maior, menor);

return 0;
}


