#include <stdio.h>

// Declara��o de um array e atribui��o de 0 a 9

int main (){

    // Declara��o:
    int Array[10];

    // Atribui��o de 0 a 9
    for(int i = 0; i < 10; i++){
        Array[i] = i;

        //Exibi��o do n�mero atribuido:
        printf("Numero atribuido ao array na posicao \"%d\": %d\n", Array[i], i);
    }


    return 0;
}
