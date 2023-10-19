#include <stdio.h>

int main() {
    double A, B, C;

    // Variaveis
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    // Verifique se os valores podem ser de um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Verifique o tipo de triângulo com base nos ângulos.
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("Triângulo Retângulo (ângulo de 90º).\n");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("Triângulo Obtusângulo (ângulo maior que 90º).\n");
        } else {
            printf("Triângulo Acutângulo (ângulo menor que 90º).\n");
        }
    } else {
        // Caso os valores não formam um triângulo
        printf("Não é um triângulo.\n");
    }

    return 0;
}
