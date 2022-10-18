#include<stdio.h>
#include<stdlib.h>

//Criar um programa para apresentar o quadrado dos números inteiros de 15 a 100.

int main()
{
    int quadrado;
    int i = 15;
    while (i < 100)
    {
        quadrado = i * i;
        printf("%d \n", quadrado);
        i = i + 1;
    }

    return 0;

}