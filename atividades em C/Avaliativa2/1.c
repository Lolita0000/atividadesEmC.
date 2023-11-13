#include <stdio.h>

// Função para validar a quantidade de peças
int validaQuantidade(int quantidade) {
    return quantidade >= 0;
}

// Função para calcular o salário com base na quantidade de peças
float calculaSalario(int quantidade) {
    const float SALARIO_BASE = 600.00;
    const float ADICIONAL_50 = 0.50;
    const float ADICIONAL_80 = 0.75;

    if (quantidade <= 50) {
        return SALARIO_BASE;
    } else if (quantidade <= 80) {
        return SALARIO_BASE + ADICIONAL_50 * (quantidade - 50);
    } else {
        return SALARIO_BASE + ADICIONAL_50 * 30 + ADICIONAL_80 * (quantidade - 80);
    }
}

// Procedimento para mostrar o salário final
void mostraFinal(float salario) {
    printf("O salário final é de R$ %.2f\n", salario);
}

int main() {
    int quantidade;

    while (1) {
        printf("Digite a quantidade de peças fabricadas ou um valor negativo para encerrar: ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        if (validaQuantidade(quantidade)) {
            float salario = calculaSalario(quantidade);
            mostraFinal(salario);
        } else {
            printf("Quantidade inválida. Por favor, digite novamente.\n");
        }
    }

    return 0;
}