// Escreva um programa em C que leia a quantidade de faltas de um aluno e sua média e informe seu conceito final, sendo:
// Faltas > 5  F
// Faltas <=5 e Média <6  C
// Faltas <=5 e 6<= Média <7.5  B
// Faltas <=5 e 7.5<= Média <9  A
// Faltas <=5 e Média >= 9  E

#include <stdio.h>

int main()
{
    int faltas;
    float nota;
    system("cls");
    printf("Digite a Quantidade de Faltas:");
    scanf("%d", &faltas);
    printf("Digite a Quantidade de Faltas:");
    scanf("%f", &nota);

    if (faltas > 5)
    {
        printf("F: numero de faltas maior que o permitido");
    }
    else
    {
        if (nota >= 9)
        {
            printf("E: \nFaltas: %d \ne Nota %f", faltas, nota);
        }
        else if (nota >= 7.5)
        {
            printf("A: \nFaltas: %d \ne Nota %f", faltas, nota);
        }
        else if (nota >= 6)
        {
            printf("B: \nFaltas: %d \ne Nota %f", faltas, nota);
        }
        else
        {
            printf("C: \nFaltas: %d \ne Nota %f", faltas, nota);
        }
    }

    return 0;
}