//Recep��o de n�meros e Soma aritm�tica de todos

#include <stdio.h>
#define QTD_NUM 10

int main (){

    //Declara��o do Array e soma
    int Num_Sum[QTD_NUM], soma = 0;


    for (int i = 0; i < QTD_NUM; i++){

        scanf("%d", &Num_Sum[i]);
        soma = soma + Num_Sum[i];
    }
    printf("A soma dos elementos eh: %d\n", soma);

return 0;
}
