#include<stdio.h>
#include<stdlib.h>

//Uma cafeteria possui o seguinte cardápio:

//Especificação          Código  Preço
//Café expresso pequeno    100   2,00
//Café expresso grande     101   3,00
//Café com leite pequeno   102   2,50
//Café com leite grande    103   3,50
//Água sem gás (200 ml)    104   1,50
//Água com gás (500 ml)    105   2,40


//Fazer um algoritmo que leia a quantidade e o código do item pedido, e calcule o valor a ser pago.
//Considere que em cada execução somente será calculado um tipo de item. O algoritmo deve
//escrever a descrição do produto pedido, a quantidade, o valor unitário e o total a ser pago.

int main()
{
    int quantidade, codigo;
    float v1, v2, v3, v4, v5, v6;
    
    printf("insira o codigo do produto: ");
    scanf("%d", &codigo);
    printf("insira a quantidade desejada: ");
    scanf("%d", &quantidade);

    v1 = quantidade * 2;
    v2 = quantidade * 3;
    v3 = quantidade * 2,50;
    v4 = quantidade * 3,50;
    v5 = quantidade * 1,50;
    v6 = quantidade * 2,40;

    if (codigo == 100)
    {
        printf("o valor a ser pago sera %f reais \n", v1);
    }
    else if (codigo == 101)
    {
        printf("o valor a ser pago sera %f reais \n", v2);
    }
    else if (codigo == 102)
    {
        printf("o valor a ser pago sera %f reais \n", v3);
    }
    else if (codigo == 103)
    {
        printf("o valor a ser pago sera %f reais \n", v4);
    }
    else if (codigo == 104)
    {
        printf("o valor a ser pago sera %f reais \n", v5);
    }
    else if (codigo == 105)
    {
        printf("o valor a ser pago sera %f reais \n", v6);
    }
    else
    {
        printf("codigo inexistente, confira o numero e tente novamente");
    }

    return 0;
}
