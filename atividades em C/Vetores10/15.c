#include <stdio.h>

int main() {
    int vetor[20];
    int i, j, k;
    
    // Ler os valores do vetor
    printf("Digite 20 valores inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Eliminar elementos repetidos
    for (i = 0; i < 20; i++) {
        for (j = i + 1; j < 20; ) {
            if (vetor[i] == vetor[j]) {
                for (k = j; k < 19; k++) {
                    vetor[k] = vetor[k + 1];
                }
            } else {
                j++;
            }
        }
    }

    // Imprimir o vetor sem elementos repetidos
    printf("Elementos do vetor sem repetição:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
