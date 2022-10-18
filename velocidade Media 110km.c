#include<stdio.h>

//Escrever um algoritmo que solicite a distância em km e o tempo de viagem em horas de um
//automóvel e dizer se a velocidade média foi superior ao limite de 110km/h ou não.

int main()
{
    float distancia, tempo, velocidade_media;

    printf("insira quantos quilometros foram percorridos em sua viagem: ");
    scanf("%f", &distancia);

    printf("insira quantas horas levou para concluir o trajeto: ");
    scanf("%f", &tempo);

    velocidade_media = (distancia / tempo);
    
    if (velocidade_media > 110)
    {
        printf("a velocidade media foi superior a 110km/h");
    }
    else
    { 
        printf("a velocidade media foi inferior a 110km/h");
    }
    
    return 0;
}