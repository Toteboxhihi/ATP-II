//Receber valores e calcular a media deles

#include <stdio.h>
#define QTD_NUM 6

int main(){

    //Declara��o do Arrray, soma e media
    float Nums[QTD_NUM], soma = 0, media = 0;

    // Obten��o e opera�oes sobre os valores
    for(int i = 0; i < QTD_NUM; i++){

        scanf("%f", &Nums[i]);
        soma = soma + Nums[i];
    }
    media = soma / QTD_NUM;

    printf("A media eh: %.2f", media);

return 0;
}
