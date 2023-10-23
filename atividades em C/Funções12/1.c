#include <stdio.h>

// Função para imprimir as opções e solicitar a escolha do usuário
char escolherOpcao() {
    char opcao;
    printf("Escolha uma opção de pagamento:\n");
    printf("a) À vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preço da etiqueta)\n");
    printf("c) De 3 a 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100.00)\n");
    printf("Digite a letra da opção desejada: ");
    scanf(" %c", &opcao);
    return opcao;
}

// Função para calcular o valor das prestações à vista com desconto
void opcaoA(double total) {
    double desconto = total * 0.10;
    double valorPrestacao = total - desconto;
    printf("Total com desconto: %.2lf\n", desconto);
    printf("Valor da prestação: %.2lf\n", valorPrestacao);
}

// Função para calcular o valor das prestações em duas vezes
void opcaoB(double total) {
    printf("Valor da prestação (em duas vezes): %.2lf\n", total / 2);
}

// Função para calcular o valor das prestações com juros
void opcaoC(double total) {
    if (total > 100.0) {
        int parcelas;
        printf("Digite o número de parcelas (3 a 10): ");
        scanf("%d", &parcelas);

        if (parcelas >= 3 && parcelas <= 10) {
            double juros = total * 0.03 * parcelas;
            double valorPrestacao = (total + juros) / parcelas;

            printf("Total de juros: %.2lf\n", juros);
            printf("Valor da prestação: %.2lf\n", valorPrestacao);
        } else {
            printf("Número de parcelas inválido.\n");
        }
    } else {
        printf("Essa opção de parcelamento é válida apenas para compras acima de R$ 100.00.\n");
    }
}

int main() {
    double total;
    char opcao;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%lf", &total);

    opcao = escolherOpcao();

    switch (opcao) {
        case 'a':
            opcaoA(total);
            break;
        case 'b':
            opcaoB(total);
            break;
        case 'c':
            opcaoC(total);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}