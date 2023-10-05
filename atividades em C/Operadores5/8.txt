#include <stdio.h>

int main() {
    int idade, tempoDeServico;

    // Idade e o tempo de serviço
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempoDeServico);

    // Verifica se o trabalhador pode se aposentar
    if (idade >= 65 || tempoDeServico >= 30 || (idade >= 60 && tempoDeServico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador ainda não pode se aposentar.\n");
    }

    return 0;
}
