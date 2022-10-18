#include<stdio.h>
#include<stdlib.h>

//Apresentar os resultados das potências de 3, variando do expoente 0 até o expoente 15

int main()
{
    int potencia;
    int i = 0;
    while(i<15)
    {
        potencia = i * i * i;
        printf("%d \n", potencia);
        i = i + 1;
    }

    return 0;

}