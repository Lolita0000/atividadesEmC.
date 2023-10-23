#include <stdio.h>

// Função para imprimir a matriz
void imprimirMatriz(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para trocar duas linhas da matriz
void trocarLinhas(int matriz[10][10], int linha1, int linha2) {
    for (int j = 0; j < 10; j++) {
        int temp = matriz[linha1][j];
        matriz[linha1][j] = matriz[linha2][j];
        matriz[linha2][j] = temp;
    }
}

// Função para trocar duas colunas da matriz
void trocarColunas(int matriz[10][10], int coluna1, int coluna2) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][coluna1];
        matriz[i][coluna1] = matriz[i][coluna2];
        matriz[i][coluna2] = temp;
    }
}

// Função para trocar a diagonal principal com a diagonal secundária
void trocarDiagonais(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }
}

// Função para trocar uma linha com uma coluna
void trocarLinhaComColuna(int matriz[10][10], int linha, int coluna) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][linha];
        matriz[i][linha] = matriz[i][coluna];
        matriz[i][coluna] = temp;
    }
}

int main() {
    int matriz[10][10];

    // Inicialize a matriz com valores apropriados.

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    // Realize as trocas especificadas
    trocarLinhas(matriz, 1, 7);
    trocarColunas(matriz, 3, 9);
    trocarDiagonais(matriz);
    trocarLinhaComColuna(matriz, 4, 9);

    printf("\nMatriz após as trocas:\n");
    imprimirMatriz(matriz);

    return 0;
}