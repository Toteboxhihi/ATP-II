// Declara��o de um array com as 5 vogais


#include <stdio.h>

int main (){

    // Declara��o do array para vogais:
    char Vogais[5];

    // Atribui��o das vogais
    for(int i = 0; i < 5; i++){
        Vogais[i] = (int) 'a' + i;

        // Exibi��o da Atribui��o:
        printf("Vogal atribuida a posicao \"%d\": %c\n", i, Vogais[i]);
    }
return 0;
}
