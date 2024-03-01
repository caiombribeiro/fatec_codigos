#include <stdio.h>
#include <math.h>

// 1º
int main(){
    float imc, peso, altura;
    system("cls");
    printf("Digite o peso e a altura:");
    scanf("%f %f",&peso,&altura);
    imc = peso/pow(altura,2);
    printf("O resultado do imc deu: %.2f",imc);
    return 0;
}

