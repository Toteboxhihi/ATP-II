// Cria��o de um Array com os 8 primeiros n�meros de Fibonacci

#include <stdio.h>
#define QTD_FIBO 8


//Fun��o para descobrir n-�simo n�mero de Fibonacci
float Num_Fibo (int num){

    if(num == 0 || num == 1){
        return 1;
    }
    return Num_Fibo(num-1) + Num_Fibo(num-2);

}


int main (){

    // Declara��o do Array
    float Fibonacci[QTD_FIBO];

    for (int i = 0; i < QTD_FIBO; i++){

        Fibonacci[i] = Num_Fibo(i);
        printf("N�mero de Fibonacci na posi��o \"%d\": %.2f\n", i, Fibonacci[i]);
    }
return 0;
}
