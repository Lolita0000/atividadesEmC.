#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10];

    // Ler os valores para o vetor A
    printf("Digite 10 números inteiros para o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    // Ler os valores para o vetor B
    printf("Digite 10 números inteiros para o vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetorB[i]);
    }

    // Calcular o vetor C (CA - B)
    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    // Mostrar os valores do vetor C
    printf("Vetor C (CA - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}