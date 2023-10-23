#include <stdio.h>

int main() {
    int A[6]; // Vetor de 6 elementos

    // Atribuindo valores ao vetor A
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    // Calculando a soma 
    int soma = A[0] + A[1] + A[5];

    printf("A soma das posições 0, 1 e 5 é: %d\n", soma);

    // Modificando o valor na posição 4
    A[4] = 100;

    // Mostrando os valores do vetor A
    printf("Valores do vetor A:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}
