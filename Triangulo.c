#include<stdio.h>
#include<stdlib.h>

//Fazer um algoritmo que leia e verifique se três valores (a,b,c) podem ser os comprimentos dos lados
//de um triângulo, escrevendo o tipo do triângulo (equilátero, isósceles, escaleno).

//Não é triângulo: A soma dos lados menores é menor ou igual ao lado maior
//Eqüilátero: Todos os lados com tamanhos iguais
//Isósceles: Somente dois lados com tamanhos iguais
//Escaleno: Todos os lados com tamanhos diferentes

int main()
{
    float l1, l2, l3;
    
    printf("insira p valor de um dos lados do triangulo: ");
    scanf("%f", &l1);
    printf("insira o valor do segundo outro lado do triangulo: ");
    scanf("%f", &l2);
    printf("insira o valor do ultimo lado do triangulo: ");
    scanf("%f", &l3);

    if (l1 == l2 && l2 == l3)
    {
        printf("eh um triangulo equilatero!");
    }
    else if (l1 != l2 && l2 != l3)
    {
        printf("eh um triangulo escaleno!");
    }
    else if (l1 != l2 && l1 != l3)
    {
        printf("eh um triangulo escaleno!");
    }
    else if (l1 == l2 && l2 != l3)
    {
        printf("eh um triangulo isoceles!");
    }
    else if (l1 == l3 && l2 != l3)
    {
        printf("eh um triangulo isoceles!");
    }
    else if (l2 == l3 && l3 != l1)
    {
        printf("eh um triangulo isoceles");
    }
    else
    {
        printf("nao eh um triangulo!");
    }

    return 0;

}
