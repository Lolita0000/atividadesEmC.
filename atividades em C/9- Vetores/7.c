#include <stdio.h>

int main() {
    int vetor[10];
    int maior, posicao;

    // Lendo 10 números inteiros e armazenando no vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;

    // Encontrando o maior elemento e sua posição
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Imprimindo o vetor
    printf("Vetor lido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Imprimindo o maior elemento e sua posição
    printf("O maior elemento do vetor é: %d\n", maior);
    printf("Ele se encontra na posição: %d\n", posicao);

    return 0;
}