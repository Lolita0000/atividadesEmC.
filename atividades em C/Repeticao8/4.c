#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
        return 1;  // Encerra o programa com código de erro
    }

    printf("Os divisores do número %d são: ", numero);

    // Loop para encontrar e imprimir os divisores
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d", i);
            if (i < numero) {
                printf(", ");
            }
        }
    }

    printf("\n");

    return 0;
}
