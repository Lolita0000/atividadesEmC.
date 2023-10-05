#include <stdio.h>

int main() {
    float salario, salarioMinimo;

    // Defina o valor do salário mínimo (você pode atualizá-lo conforme necessário)
    salarioMinimo = 1100.00;

    // Solicita o salário ao usuário
    printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    // Verifica se o salário é maior que o salário mínimo
    if (salario > salarioMinimo) {
        printf("Você ganha mais do que o salário mínimo.\n");
    } else {
        printf("Você ganha igual ou menos que o salário mínimo.\n");
    }

    return 0;
}
