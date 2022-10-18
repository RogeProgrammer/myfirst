#include<stdio.h>

int main()
{
    int cedulas, valor_dolar, valor_real;

    printf("insira o valor atual do dolar");
    scanf("%d", &valor_dolar);

    printf("insira o numero de cedulas que deseja converter");
    scanf("%d", &cedulas);

    valor_real = (valor_dolar * cedulas);

    printf("sera convertido para %d reais. \n", valor_real); 

    return 0;
}