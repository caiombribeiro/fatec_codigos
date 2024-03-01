#include <stdio.h>
#include <math.h>


// 4º
int main(){
    char letra;
    system("cls");
    printf("Digite uma letra: ");
    scanf("%c",&letra);

    printf("Valor em octal: %o\n",letra);
    printf("Valor em decimal: %d\n",letra);
    printf("Valor em hexadecimal: %x\n",letra);

    return 0;
}