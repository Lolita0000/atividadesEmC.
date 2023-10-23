#include <stdio.h>

int main() {
    double vetorX[5], vetorY[5];
    double produtoEscalar = 0.0;

    // Ler os valores para o primeiro conjunto (vetorX)
    printf("Digite 5 números reais para o primeiro conjunto (vetorX):\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%lf", &vetorX[i]);
    }

    // Ler os valores para o segundo conjunto (vetorY)
    printf("Digite 5 números reais para o segundo conjunto (vetorY):\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%lf", &vetorY[i]);
    }

    // Calcular o produto escalar
    for (int i = 0; i < 5; i++) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    // Imprimir os conjuntos e o produto escalar
    printf("Conjunto X (vetorX): ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetorX[i]);
    }

    printf("\nConjunto Y (vetorY): ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetorY[i]);
    }

    printf("\nProduto Escalar: %.2lf\n", produtoEscalar);

    return 0;
}