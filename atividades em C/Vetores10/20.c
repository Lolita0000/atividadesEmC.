#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int i, j = 0;

    // Ler números no intervalo [0,50] e preencher vetor1
    printf("Digite 10 números inteiros no intervalo [0,50]:\n");
    for (i = 0; i < 10; i++) {
        do {
            printf("Digite o valor para a posição %d: ", i);
            scanf("%d", &vetor1[i]);
        } while (vetor1[i] < 0 || vetor1[i] > 50);
    }

    // Preencher vetor2 com os números ímpares de vetor1
    for (i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    // Imprimir os dois vetores com 2 elementos por linha
    printf("Vetor 1:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nVetor 2 (Números ímpares de vetor 1):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}