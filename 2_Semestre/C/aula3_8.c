// Dados os coeficientes (a0, b e c) de uma equação do 2o grau, calcule e informe suas raízes reais, usando a fórmula de Báskara.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, r1, r2;

    system("cls");

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta >= 0)
    {


        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raizes sao %.2f e %.2f.", r1, r2);
    }
    else
    {
        printf("As raízes são complexas.\n");
    }
}