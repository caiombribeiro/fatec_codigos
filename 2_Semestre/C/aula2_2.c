#include <stdio.h>
#include <math.h>


// 2º
int main(){
    float f, c;
    system("cls");
    printf("Digite a temperatura em F:");
    scanf("%f",&f);
    c = (f - 32)* 5/9;
    printf("Celcius = %.2f",c);
    return 0;
}

