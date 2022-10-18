#include<stdio.h>
#include<stdlib.h>

//Desenvolver um programa que apresente todos os números divisíveis por 4 que sejam menores que 200

int main()
{
    int i = 0;
    while(i < 200)
    {
        if(i % 4 == 0)
        {
            printf("%d \n", i);
        }
        i = i + 1;
    }

    return 0;
}