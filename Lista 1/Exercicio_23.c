// Gera 10 numeros aleatorios de 0 a 5, armazena-os em um array e verifica se forma um palindromo;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUM 10
#define LIM_SUP 1
#define LIM_INF 0


//Verificação de palimdromo

int EhPalindromo (int array[QTD_NUM]){

    for(int i = 0, j = QTD_NUM - 1; i < QTD_NUM/2; i++, j--){
            if(array[i] != array[j]){
                return 0;
            }
    }
    return 1;
}



int main(){

    // Alterando a seed da randomização
    srand(time(NULL));

    int Random[QTD_NUM];


    // Preenchendo o Array
    for(int i = 0; i < QTD_NUM; i++){

        Random[i] = (rand() % (LIM_SUP+1 - LIM_INF)) - LIM_INF;

        // Descomente a linha abaixo para ver os numeros gerados
//        printf("O numero gerado na posicao \"%d\" foi: %d\n", i, Random[i]);
    }


        if(EhPalindromo(Random))
            printf("O Array eh um palindromo\n");
        else
            printf("O Array nao eh um palindromo\n");

return 0;
}
