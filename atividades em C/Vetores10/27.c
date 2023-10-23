#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[10];

    // Ler os valores e armazená-los no vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Verificar e imprimir os números primos no vetor
    printf("Números primos no vetor e suas posições:\n");
    for (int i = 0; i < 10; i++) {
        if (isPrime(vetor[i])) {
            printf("Posição %d: %d\n", i, vetor[i]);
        }
    }

    return 0;
}