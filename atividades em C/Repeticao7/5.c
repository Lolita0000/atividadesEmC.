#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 2; 

    for (int i = 1; i <= 50; i++) {
        soma += numero;
        numero += 2; 
    }

    printf("A soma dos 50 primeiros numeros pares é: %d\n", soma);

    return 0;
}
