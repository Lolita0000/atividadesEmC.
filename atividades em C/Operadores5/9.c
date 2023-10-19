#include <stdio.h>

int main() {
    float salarioAtual, salarioReajustado;
    int tempoDeServico;

    printf("Digite o valor do salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de serviço na empresa (em anos): ");
    scanf("%d", &tempoDeServico);

    // Calcula o reajuste com base no salário atual
    if (salarioAtual <= 500.0) {
        salarioReajustado = salarioAtual * 1.25; // 25% de reajuste
    } else if (salarioAtual <= 1000.0) {
        salarioReajustado = salarioAtual * 1.20; // 20% de reajuste
    } else if (salarioAtual <= 1500.0) {
        salarioReajustado = salarioAtual * 1.15; // 15% de reajuste
    } else if (salarioAtual <= 2000.0) {
        salarioReajustado = salarioAtual * 1.10; // 10% de reajuste
    } else {
        salarioReajustado = salarioAtual; // Sem reajuste
    }

    // Calcula o bônus com base no tempo de serviço
    if (tempoDeServico < 1) {
        salarioReajustado += 100.0; // 100 de bônus
    } else if (tempoDeServico >= 1 && tempoDeServico <= 3) {
        salarioReajustado += 200.0; // 200 de bônus
    } else if (tempoDeServico >= 4 && tempoDeServico <= 6) {
        salarioReajustado += 300.0; // 300 de bônus
    } else if (tempoDeServico >= 7 && tempoDeServico <= 10) {
        salarioReajustado += 500.0; // 500 de bônus
    } else if (tempoDeServico > 10) {
        salarioReajustado += 1000.0; // 1000 de bônus
    }

    if (salarioReajustado == salarioAtual) {
        printf("O funcionário não tem direito a aumento.\n");
    } else {
        printf("O salário final reajustado é: R$ %.2f\n", salarioReajustado);
    }

    return 0;
}
