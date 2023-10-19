#include <stdio.h>

int main() {
    int capacidade = 100;
    int contador_otimo = 0;
    int contador_bom = 0;
    int contador_regular = 0;
    int soma_idades_ruim = 0;
    int contador_ruim = 0;
    int contador_pessimo = 0;
    int maior_idade_pessimo = 0;
    int maior_idade_otimo = 0;
    int maior_idade_ruim = 0;
    
    for (int i = 0; i < capacidade; i++) {
        int idade;
        char opiniao;
        
        printf("Digite a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);
        
        printf("Digite a opinião (A, B, C, D ou E) do espectador %d: ", i + 1);
        scanf(" %c", &opiniao);
        
        switch (opiniao) {
            case 'A':
                contador_otimo++;
                if (idade > maior_idade_otimo) {
                    maior_idade_otimo = idade;
                }
                break;
            case 'B':
                contador_bom++;
                break;
            case 'C':
                contador_regular++;
                break;
            case 'D':
                contador_ruim++;
                soma_idades_ruim += idade;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            case 'E':
                contador_pessimo++;
                if (idade > maior_idade_pessimo) {
                    maior_idade_pessimo = idade;
                }
                break;
            default:
                printf("Opinião inválida. Por favor, digite A, B, C, D ou E.\n");
                i--;  // Decrementa o contador para repetir a entrada para o espectador atual.
        }
    }
    
    // Calcula e imprime os resultados
    printf("Quantidade de respostas Ótimo: %d\n", contador_otimo);
    
    float diferenca_percentual = ((float)contador_bom - contador_regular) / contador_bom * 100;
    printf("Diferença percentual entre respostas Bom e Regular: %.2f%%\n", diferenca_percentual);
    
    float media_idades_ruim = contador_ruim > 0 ? (float)soma_idades_ruim / contador_ruim : 0;
    printf("Média de idade das pessoas que responderam Ruim: %.2f\n", media_idades_ruim);
    
    float percentagem_pessimo = ((float)contador_pessimo / capacidade) * 100;
    printf("Percentagem de respostas Péssimo: %.2f%%\n", percentagem_pessimo);
    
    printf("Maior idade que escolheu Péssimo: %d\n", maior_idade_pessimo);
    
    int diferenca_idades = maior_idade_otimo - maior_idade_ruim;
    printf("Diferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d\n", diferenca_idades);
    
    return 0;
}
