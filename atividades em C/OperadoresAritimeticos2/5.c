#include <stdio.h>

int main() {
    float custoMercadoria, valorFrete, despesasEventuais, valorVenda, percentualLucro;

    // Solicita o custo da mercadoria
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);

    // Solicita o valor do frete
    printf("Digite o valor do frete: ");
    scanf("%f", &valorFrete);

    // Solicita as despesas eventuais
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesasEventuais);

    // Calcula o custo total
    float custoTotal = custoMercadoria + valorFrete + despesasEventuais;

    // Solicita o valor de venda
    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);

    // Calcula o percentual de lucro
    percentualLucro = ((valorVenda - custoTotal) / custoTotal) * 100;

    // Exibe o resultado
    printf("O custo total é: %.2f\n", custoTotal);
    printf("A percentagem de lucro é: %.2f%%\n", percentualLucro);

    return 0;
}
