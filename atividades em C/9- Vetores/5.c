#include <stdio.h>

int main() {
    int vetor[10];
    int countPares = 0;

    // Lendo o vetor de 10 posições
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Contando valores pares no vetor
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", countPares);

    return 0;
}