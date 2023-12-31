#include <stdio.h>
#include <limits.h> 

int main() {
    int codigo_cidade, num_veiculos, num_acidentes;
    char estado[3]; 
    int maior_indice_acidentes = INT_MIN, menor_indice_acidentes = INT_MAX;
    int soma_veiculos = 0, soma_acidentes_RS = 0;
    int num_cidades_RS = 0;

    while (1) {
        // Info da cidade ou -1 para encerrar
        printf("Digite o código da cidade ou -1 para encerrar: ");
        scanf("%d", &codigo_cidade);

        if (codigo_cidade == -1)
            break;

        printf("Digite o estado da cidade (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);

        printf("Digite o número de veículos de passeio em 1992: ");
        scanf("%d", &num_veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &num_acidentes);

        // Maior e menor quantidades de acidentes
        if (num_acidentes > maior_indice_acidentes) {
            maior_indice_acidentes = num_acidentes;
        }
        if (num_acidentes < menor_indice_acidentes) {
            menor_indice_acidentes = num_acidentes;
        }

        // Média da soma dos veículos
        soma_veiculos += num_veiculos;

        // Procura se a cidade é do RS
        if (estado[0] == 'R' && estado[1] == 'S') {
            soma_acidentes_RS += num_acidentes;
            num_cidades_RS++;
        }
    }

    // Média de veículos
    double media_veiculos = (double)soma_veiculos / (double)(num_cidades_RS + (num_cidades_RS == 0 ? 1 : 0));

    // Calcula a média de acidentes no Rio Grande do Sul.
    double media_acidentes_RS = (double)soma_acidentes_RS / (double)(num_cidades_RS == 0 ? 1 : num_cidades_RS);

    // Exibe os resultados.
    printf("a) Maior índice de acidentes: %d\n", maior_indice_acidentes);
    printf("   Menor índice de acidentes: %d\n", menor_indice_acidentes);
    printf("b) Média de veículos nas cidades brasileiras: %.2lf\n", media_veiculos);
    printf("c) Média de acidentes com vítimas nas cidades do Rio Grande do Sul: %.2lf\n", media_acidentes_RS);

    return 0;
}
