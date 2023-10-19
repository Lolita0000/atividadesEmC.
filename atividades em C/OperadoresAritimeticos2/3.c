#include <stdio.h>

int main() {
    // Declarar variáveis para armazenar a base e a altura
    float base, altura;

    // Inserir a base e a altura
    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    // Calcular a área do triângulo
    float area = (base * altura);

    // Mostrar a área
    printf("A área é: %.2f\n", area);

    return 0;
}
