#include <stdio.h>

// Estrutura para representar uma fruta
struct Fruta {
    char nome[20];
    float preco;
};

int main() {
    struct Fruta frutas[] = {
        {"ABACAXI", 5.0},
        {"MAÇA", 1.0},
        {"PERA", 4.0}
    };

    int quantidadeFrutas = sizeof(frutas) / sizeof(frutas[0]);
    float total = 0.0;

    printf("Bem-vindo à loja de frutas!\n");

    while (1) {
        printf("\nLista de frutas disponíveis:\n");
        for (int i = 0; i < quantidadeFrutas; i++) {
            printf("%d => %s - R$ %.2f a unidade\n", i + 1, frutas[i].nome, frutas[i].preco);
        }

        int escolha;
        printf("\nDigite o número da fruta que deseja comprar (ou 0 para encerrar): ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            break;
        }

        if (escolha >= 1 && escolha <= quantidadeFrutas) {
            int quantidade;
            printf("Quantas unidades de %s deseja comprar? ", frutas[escolha - 1].nome);
            scanf("%d", &quantidade);

            if (quantidade > 0) {
                float precoTotal = frutas[escolha - 1].preco * quantidade;
                total += precoTotal;
                printf("%d unidades de %s foram adicionadas ao carrinho por R$ %.2f.\n", quantidade, frutas[escolha - 1].nome, precoTotal);
            } else {
                printf("Quantidade inválida. Tente novamente.\n");
            }
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    printf("\nResumo da compra:\n");
    printf("Total da compra: R$ %.2f\n", total);

    printf("Obrigado por comprar conosco!\n");

    return 0;
}
