//Concatenação de strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TM_STR 400

int main(){

    char string1[TM_STR], string2[TM_STR];

    printf("Digite a string 1:\n");
    gets(string1);
    printf("Digite a string 2:\n");
    gets(string2);

    strcat(string1, string2);

    printf("Strings concatenadas:\n%s", string1);

return 0;
}
