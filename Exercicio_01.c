#include <stdio.h>

// Declaração de um array e atribuição de 0 a 9

int main (){

    // Declaração:
    int Array[10];

    // Atribuição de 0 a 9
    for(int i = 0; i < 10; i++){
        Array[i] = i;

        //Exibição do número atribuido:
        printf("Numero atribuido ao array na posicao \"%d\": %d\n", Array[i], i);
    }


    return 0;
}
