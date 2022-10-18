#include<stdio.h>

// Desenvolva um programa para ler a temperatura de uma pessoa doente e mostrar a mensagem
// “está com febre” ou “Não está com febre” considerando o valor base de 37.5ºC.

int main()
{
float temperatura;
printf("insira a sua temperatura: ");
scanf("%f", &temperatura);

if (temperatura >= 37.5)
{
    printf("esta com febre \n");
}
else
{
    printf("nao esta com febre");
}

return 0;
}