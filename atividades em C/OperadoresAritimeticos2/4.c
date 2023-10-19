#include <stdio.h>

int main() {
    float valorReais, cotacaoDolar = 4.98; // Valor fixo da cotação do dólar
    float valorDolares;

    // Solicita o valor em reais
    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    // Calcula o valor em dólares
    valorDolares = valorReais / cotacaoDolar;

    // Exibe o resultado
    printf("O valor em dólares é: %.2f\n", valorDolares);

    return 0;
}
