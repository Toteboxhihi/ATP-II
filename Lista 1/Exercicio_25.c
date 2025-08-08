#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TM_STR 400

int main(){

    char string[TM_STR];
    int chars = 0, palavras = 1, linhas = 1;

    printf("Digite a string:\n");
    gets(string);

    for(int i = 0; string[i] != '\0'; i++){
        chars++;

        if(string[i] == ' ')
            palavras++;
        if(string[i] == '\n')
            linhas++;

    }
    printf(" O programa tem %d caracteres, %d palavras e %d linhas\n", chars, palavras, linhas);

return 0;
}
