#include<stdio.h>
#include<stdlib.h>

//Fazer um algoritmo que leia duas notas para cada um dos vinte alunos
//de uma turma e escreva a média aritmética de cada aluno.

int main()
{
    float nota1, nota2, media;
    int i = 0;

    while(i < 20)
    {
        printf(" insira as notas do aluno %d: \n", i);
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        
        media = (nota1 + nota2) /2;
        printf("%.2f", media );
        i = i + 1;
    }
    
    return 0;
}