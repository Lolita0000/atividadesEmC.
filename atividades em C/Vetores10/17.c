#include <stdio.h>

int main() {
    int vetor[10];

    // Ler os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Atribuir valor 0 aos elementos negativos
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    // Imprimir o vetor modificado
    printf("Vetor com valores negativos transformados em 0:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}