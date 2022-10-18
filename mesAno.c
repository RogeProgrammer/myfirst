#include<stdio.h>

//Criar um algoritmo que leia um número inteiro e diga a qual mês do ano o mesmo corresponde. Se
//o valor for maior que doze ou menor que um, apresente uma mensagem informando que o valor não
//corresponde a nenhum mês. Ex.: 3  mês de março.

int main()
{
    int numero, janeiro, fevereiro, marco, abril, maio, junho;
    int julho, agosto, setembro, outubro, novembro, dezembro;

    janeiro = 1;
    fevereiro = 2;
    marco = 3;
    abril = 4;
    maio = 5;
    junho = 6;
    julho = 7;
    agosto = 8;
    setembro = 9;
    outubro = 10;
    novembro = 11;
    dezembro = 12;
    
    printf("insira um numero e veja o mes do ano que ele corresponde: ");
    scanf("%d", &numero);
    
    if (numero == 1)
    {
        printf("corresponde ao mes de Janeiro! \n");
    }
    else if (numero == 2)
    {
        printf("corresponde ao mes de Fevereiro! /n");
    }
    else if(numero == 3)
    {
        printf("corresponde ao mes de Marco! \n");
    }
    else if (numero == 4)
    {
        printf("corresponde ao mes de Abril! \n");
    }
    else if(numero == 5)
    {
        printf("corresponde ao mes de Maio \n");
    }
    else if (numero == 6)
    {
        printf("corresponde ao mes de Junho! \n");
    }
    else if (numero == 7)
    {
        printf("corresponde ao mes de Julho! \n");
    }
    else if (numero == 8)
    {
        printf("corresponde ao mes de Agosto! \n");
    }
    else if (numero == 9)
    {
        printf("corresponde ao mes de Setembro! \n");
    }
    else if (numero == 10)
    {
        printf("corresponde ao mes de Outubro! \n");
    }
    else if (numero == 11)
    {
        printf("corresponde ao mes de Novembro! \n");
    }
    else if (numero == 12)
    {
        printf("corresponde ao mes de Dezembro \n");
    }
    else
    {
        printf("nao corresponde a nenhum mes do ano!");
    }

return 0;
}