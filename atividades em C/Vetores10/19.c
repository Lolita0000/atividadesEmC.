#include <stdio.h>

int main() {
    int vetor[50];

    // Preencher o vetor com os valores
    for (int i = 0; i < 50; i++) {
        vetor[i] = (i + 51) % (i + 1);
    }

    // Imprimir o vetor na tela
    printf("Vetor preenchido com os valores:\n");
    for (int i = 0; i < 50; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}