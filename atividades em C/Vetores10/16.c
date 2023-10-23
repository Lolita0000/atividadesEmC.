#include <stdio.h>

int main() {
    float vetor[5];
    int codigo;

    // Ler os valores do vetor
    printf("Digite 5 números reais:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    // Ler o código
    printf("Digite um código (0 para sair, 1 para mostrar na ordem direta, 2 para mostrar na ordem inversa): ");
    scanf("%d", &codigo);

    if (codigo == 0) {
        printf("Programa encerrado.\n");
    } else if (codigo == 1) {
        printf("Vetor na ordem direta:\n");
        for (int i = 0; i < 5; i++) {
            printf("%f\n", vetor[i]);
        }
    } else if (codigo == 2) {
        printf("Vetor na ordem inversa:\n");
        for (int i = 4; i >= 0; i--) {
            printf("%f\n", vetor[i]);
        }
    } else {
        printf("Código inválido. O código deve ser 0, 1 ou 2.\n");
    }

    return 0;
}