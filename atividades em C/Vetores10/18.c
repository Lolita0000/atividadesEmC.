#include <stdio.h>

int main() {
    int vetor[10];
    int r;
    int count = 0;

    // Ler os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Ler o número r
    printf("Digite o número r para encontrar seus múltiplos: ");
    scanf("%d", &r);

    // Contar e mostrar os múltiplos de r
    printf("Múltiplos de %d no vetor:\n", r);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % r == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", r);
    } else {
        printf("\nTotal de %d múltiplos de %d encontrados no vetor.\n", count, r);
    }

    return 0;
}