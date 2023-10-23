#include <stdio.h>

int main() {
    int valores[6];

    // Lendo 6 valores inteiros
    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    // Mostrando os valores na ordem inversa
    printf("Valores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}