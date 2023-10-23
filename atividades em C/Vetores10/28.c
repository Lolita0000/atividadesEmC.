#include <stdio.h>

int main() {
    int vetor[10];
    int le1[10], le2[10];
    int count_le1 = 0, count_le2 = 0;

    // Ler os valores e armazená-los no vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Copiar valores ímpares para le1 e valores pares para le2
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            le2[count_le2] = vetor[i];
            count_le2++;
        } else {
            le1[count_le1] = vetor[i];
            count_le1++;
        }
    }

    // Imprimir elementos utilizados de le2
    printf("Elementos UTILIZADOS de le2 (valores pares):\n");
    for (int i = 0; i < count_le2; i++) {
        printf("%d ", le2[i]);
    }

    return 0;
}