
/* Programa para criação e exibição de um array com os 7 primeiros primos */

#include <stdio.h>

/* Função para verificação de primo */
int ehPrimo(int numero){
    for(int j = 2; j*j <= numero; j++){

            if(numero % j == 0){
                return 0;
            }
        }
        return 1;
}


int main (){

    // Declação do Array:
    short int Primos[7];
    int Num = 2;

    // For para alocação dos próximos primos
    int i = 0;
    while(i < 7){

    if(ehPrimo(Num) == 1){
        Primos[i] = Num;
        printf("Primo na posicao \"%d\": %d\n", i, Primos[i]);
        i++;
    }

    Num++;
    }
return 0;
}
