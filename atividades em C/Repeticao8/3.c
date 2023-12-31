#include <stdio.h>

// Função para calcular o enésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Inicialize os primeiros dois termos da sequência
        int a = 0, b = 1, temp;
        // Calcula os termos subsequentes da sequência
        for (int i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

int main() {
    int n;

    // Solicita ao usuário o valor de n
    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    // Verifica se n é válido
    if (n < 0) {
        printf("O número deve ser maior ou igual a zero.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}
