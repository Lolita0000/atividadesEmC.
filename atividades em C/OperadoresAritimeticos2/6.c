#include <stdio.h>

int main() {
    float raio, area;

    // Solicita o raio do círculo
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo (pi * raio^2)
    area = 3.14159 * raio * raio;

    // Exibe a área do círculo
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
