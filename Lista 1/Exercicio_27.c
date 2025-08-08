//Verifica se uma string eh um palindromo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TM_STR 400

int main(){

    char string1[TM_STR];

    printf("Digite a string 1:\n");
    gets(string1);

    for(int i = 0, j = strlen(string1) - 1; i < strlen(string1); i++, j--){

        if(string1[i] != string1[j]){
            printf("A string nao eh um palindromo");
            return 0;
        }
    }
    printf("A string eh um palindromo");

return 0;
}
