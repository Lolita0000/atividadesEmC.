#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1; // Começar com o primeiro número natural

    for (int i = 0; i < 100; ) {
        // Verificar se o número não é múltiplo de 7 e não termina com 7
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[i] = numero;
            i++;
        }
        numero++;
    }

    // Imprimir o vetor
    printf("Os 100 primeiros números naturais que não são múltiplos de 7 ou não terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n"); // Quebra de linha a cada 10 números
        }
    }

    return 0;
}