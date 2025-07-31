//Recepção de números e impressão em ordem inversa

#include <stdio.h>
#define QTD_NUM 5

int main (){

    //Declaração dos Arrays
    int Num[QTD_NUM];

    for(int i = 0; i < QTD_NUM; i++){
        printf("Escreva o numero para a posicao %d\n", i);
        scanf("%d", &Num[i]);
    }

    for(int i = QTD_NUM - 1; i >= 0; i--){

        printf("Numeros na ordem inversa: %d\n", Num[i]);
    }

return 0;
}
