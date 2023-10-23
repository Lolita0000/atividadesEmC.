#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    // Lendo o vetor de 8 posições
    printf("Digite 8 valores inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    // Lendo os valores de x e y
    printf("Digite os valores de x e y (entre 0 e 7): ");
    scanf("%d %d", &x, &y);

    // Verificando se x e y estão dentro dos limites válidos
    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        // Calculando a soma dos valores nas posições x e y
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    } else {
        printf("Valores de x e y estão fora dos limites válidos (0 a 7).\n");
    }

    return 0;
}