#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;

    // Solicita as informações ao usuário
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);

    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor que ele recebe por carro vendido: ");
    scanf("%f", &valorPorCarro);

    // Calcula o salário final
    salarioFinal = salarioFixo + (numCarrosVendidos * valorPorCarro) + (0.05 * valorVendas);

    // Exibe o salário final
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

    return 0;
}
