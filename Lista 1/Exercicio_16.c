// Verifica quantos caracteres em um array sao letras maiusculas via ponteiro

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 7
#define LIM_SUP 0
#define LIM_INF 255

void Qtd_Maiusculas(char *pont_Array, int Qtd){
    int cont = 0;
    for(int i = 0; i < Qtd; i++){

        if(*pont_Array >= 'A' && *pont_Array <= 'Z'){
            cont++;
        }
        pont_Array++;
    }

    printf("Ha %d letras maiusculas no array.\n", cont);

}

void gerador(char *pont1){

    for(int i = 0; i < QTD_NUM; i++){

        *pont1 = rand() % (LIM_SUP + 1 - LIM_INF) + LIM_INF;
        printf("Caractere gerado: %c\n", *pont1);
        pont1++;
    }
}

int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    char Random[QTD_NUM];
    gerador(Random);

    Qtd_Maiusculas(&Random[0], QTD_NUM);


return 0;
}

