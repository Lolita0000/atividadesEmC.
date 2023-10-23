#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorResultado[20];

    // Ler os valores para o primeiro vetor
    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    // Ler os valores para o segundo vetor
    printf("Digite 10 números inteiros para o segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Calcular o vetor resultado
    for (int i = 0; i < 10; i++) {
        vetorResultado[2 * i] = vetor1[i];     // Posições pares
        vetorResultado[2 * i + 1] = vetor2[i]; // Posições ímpares
    }

    // Mostrar o vetor resultado
    printf("Vetor resultado (pares do primeiro, ímpares do segundo):\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetorResultado[i]);
    }

    return 0;
}