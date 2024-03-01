#include <stdio.h>
#include <math.h>
#define PI 3.1415

// 3º
int main(){
    float r, a, p;
    system("cls");
    printf("Digite o Raio:");
    scanf("%f",&r);
    a = PI * pow(r,2);
    p = 2*PI*r;
    printf("Area = %.2f \nPerimetro = %.2f",a,p);
    return 0;
}

