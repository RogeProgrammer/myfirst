#include<stdio.h>

//Fazer um algoritmo que leia um número inteiro, verifique e escreva se ele e negativo, zero ou
//positivo. Caso seja positivo diga ainda se ele e par ou impar.

int main ()
{
    int numero, par;
    
    printf("insira o numero que deseja descobrir se eh positivo ou negativo: ");
    scanf("%d", &numero);

    par = numero % 2;
    
    if (numero > 0 && par == 0)
    {
        printf("o numero %d eh positivo e par!", numero);
    }
    else if (numero > 0 ||par != 0)
    {
        printf("o numero %d eh positivo e impar!", numero);
    }    
    else 
    {
        printf("seu numero eh negativo!");
    }
    return 0;
}


