// Declaração de um array com as 5 vogais


#include <stdio.h>

int main (){

    // Declaração do array para vogais:
    char Vogais[5];

    // Atribuição das vogais
    for(int i = 0; i < 5; i++){
        Vogais[i] = (int) 'a' + i;

        // Exibição da Atribuição:
        printf("Vogal atribuida a posicao \"%d\": %c\n", i, Vogais[i]);
    }
return 0;
}
