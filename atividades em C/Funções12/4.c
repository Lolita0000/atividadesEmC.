#include <stdio.h>

// Função para imprimir a matriz
void imprimirMatriz(int matriz[61][10]) {
    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Procedimento para somar individualmente as colunas
void somarColunas(int matriz[61][10]) {
    for (int j = 0; j < 10; j++) {
        int soma = 0;
        for (int i = 0; i < 61; i++) {
            soma += matriz[i][j];
        }
        matriz[60][j] = soma; // Armazena o resultado na 61ª linha
    }
}

int main() {
    int matriz[61][10];

    // Inicialize a matriz com valores apropriados.

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    // Realize a soma individual das colunas
    somarColunas(matriz);

    printf("\nMatriz após a soma das colunas:\n");
    imprimirMatriz(matriz);

    return 0;
}