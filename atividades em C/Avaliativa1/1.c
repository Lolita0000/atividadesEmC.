#include <stdio.h>
#include <math.h>

int main() {
    double x, resultado;

    // Valor de x
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    // Verifica se o valor de x é maior ou igual a 4
    if (x < 4.0) {
        printf("A função não está definida para x < 4.\n");
    } else {
        // Calcule o valor de f(x) usando a fórmula.
        resultado = (5.0 * x + 3.0) / sqrt(x * x - 16);

        // Imprime o resultado
        printf("O valor de f(x) é: %lf\n", resultado);
    }

    return 0;
}
