#include<stdio.h>
#include <math.h>

//Fazer um algoritmo que leia valores para as variáveis hora, minuto e segundo; verificando e
//escrevendo se elas correspondem a um horário válido ou não. Para um horário ser valido, a hora
//deve estar no intervalo de 0 a 23, o minuto e o segundo no intervalo de 0 a 59.


int main()
{
    int h, m, s;
    
    printf("insira a hora: ");
    scanf("%d", &h);
    printf("insira os minutos: ");
    scanf("%d", &m);
    printf("insira os segundos: ");
    scanf("%d", &s);

    if(h < 24 && m < 60 && s < 60)
    {
        printf("%d:%d,%d correspondem a um horario valido", h, m, s);
    }
    else
    {
        printf("nao corresponde a um horario vago");
    }
    return 0;
}        
    