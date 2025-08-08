// Substitui um caracter por outro em uma string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TM_STR 400

int main(){

    char string1[TM_STR], substituido, substituidor;

    printf("Digite a string 1:\n");
    gets(string1);
    printf("Digite o caractere a ser substituido:\n");
    scanf("%c", &substituido);
    getchar();
    printf("Digite o caractere a substituir:\n");
    scanf("%c", &substituidor);

    for(int i = 0; i < strlen(string1); i++){
        if(string1[i] == substituido)
            string1[i] = substituidor;
    }

    printf("\n\nA string com as devidas substituicoes eh:\n\n%s\n\n", string1);

return 0;
}
