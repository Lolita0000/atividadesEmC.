#include <stdio.h>
#include <stdlib.h>

void calcularLocacoesGratuitas(const int *vetorA, int *vetorLocacoes, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetorLocacoes[i] = vetorA[i] / 15;
    }
}

int main() {
    int vetorA[500];
    int vetorLocacoes[500];

    return 0;
}