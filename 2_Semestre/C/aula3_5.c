// Dado um inteiro n, informe se n é par ou ímpar usando o operador condicional ternário.

#include <stdio.h>

int main()
{
    int num;

    system("cls");

    printf("Digite um numero: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Numero Par.\n") : printf("Numero Impar.\n");

    return 0;

}
