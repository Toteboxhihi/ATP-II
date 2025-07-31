// Quantidade de vogais em uma sequencia de caracteres

#include <stdio.h>
#define QTD_CHAR 8

int main(){

    char Chars[QTD_CHAR];
    int Vogais;

    for(int i = 0; i < QTD_CHAR; i++){

        scanf("%c", &Chars[i]);
        getchar();

        if(Chars[i] == 'a' || Chars[i] == 'e' || Chars[i] == 'i' || Chars[i] == 'o' || Chars[i] == 'u')
            Vogais++;
    }

    printf("Ha %d vogais\n", Vogais);

return 0;
}
