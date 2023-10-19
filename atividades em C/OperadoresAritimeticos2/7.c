#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    // Solicita o salário atual e o percentual de reajuste
    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    // Calcula o novo salário com reajuste
    novoSalario = salarioAtual + (salarioAtual * (percentualReajuste / 100));

    // Exibe o novo salário
    printf("O novo salário é: %.2f\n", novoSalario);

    return 0;
}
