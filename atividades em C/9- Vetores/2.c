#include <stdio.h>

int main() {
    int valores[6]; // Declarando um vetor para armazenar os valores

    // Lendo os valores
    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    // Mostrando os valores na tela
    printf("Valores lidos:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}