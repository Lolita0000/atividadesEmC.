#include <stdio.h>

int main() {
    int valores[6];
    int contPares = 0;

    // Lendo 6 valores inteiros pares
    printf("Digite 6 valores inteiros pares:\n");

    for (int i = 0; i < 6; i++) {
        int valor;
        scanf("%d", &valor);

        // Verificando se o valor é par
        if (valor % 2 == 0) {
            valores[contPares] = valor;
            contPares++;

            // Se já lemos 6 valores pares, saímos do loop
            if (contPares == 6) {
                break;
            }
        } else {
            printf("Este valor não é par. Tente novamente.\n");
            i--;
        }
    }

    // Mostrando os valores pares na ordem inversa
    printf("Valores pares lidos na ordem inversa:\n");
    for (int i = contPares - 1; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}