#include <stdio.h>

int main() {
    float conjuntoOriginal[10];  // Vetor para armazenar os números reais originais
    float conjuntoQuadrado[10];  // Vetor para armazenar os quadrados dos números

    // Lendo o conjunto de números reais
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &conjuntoOriginal[i]);
    }

    // Quadrado das componentes e armazenando no segundo vetor
    for (int i = 0; i < 10; i++) {
        conjuntoQuadrado[i] = conjuntoOriginal[i] * conjuntoOriginal[i];
    }

    printf("Conjunto Original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", conjuntoOriginal[i]);
    }
    printf("\n");

    // Imprimindo o conjunto com os quadrados
    printf("Conjunto com os Quadrados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", conjuntoQuadrado[i]);
    }
    printf("\n");

    return 0;
}