// Dados último dígito da placa de um carro, informe o dia do seu rodízio. Sugestão: utilize switch/ case.

#include <stdio.h>
#include <string.h>

int main() {
    char placa[8];
    char ultimoDigito;

    system("cls");

    printf("Digite a placa do carro (formato: 0000-ABC): ");
    scanf("%s", placa);

    // Obtendo o último caractere (dígito) da placa
    ultimoDigito = placa[3];
    printf("\n%c\n", ultimoDigito);

    switch (ultimoDigito) {
        case '1':
        case '2':
            printf("SEGUNDA-FEIRA.\n");
            break;
        case '3':
        case '4':
            printf("TERÇA-FEIRA.\n");
            break;
        case '5':
        case '6':
            printf("QUARTA-FEIRA.\n");
            break;
        case '7':
        case '8':
            printf("QUINTA-FEIRA.\n");
            break;
        case '9':
        case '0':
            printf("SEXTA-FEIRA.\n");
            break;
        default:
            printf("Número inválido.\n");
    }

    return 0;
}