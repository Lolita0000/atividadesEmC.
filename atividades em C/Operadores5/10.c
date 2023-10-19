#include <stdio.h>

int main() {
    int ddd;

    printf("Digite o número de DDD: ");
    scanf("%d", &ddd);

    switch (ddd) {
        case 61:
            printf("Brasília\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 11:
            printf("São Paulo\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 27:
            printf("Vitória\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        default:
            printf("Uma cidade no Brasil sem identificação\n");
    }

    return 0;
}
