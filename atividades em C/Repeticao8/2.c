#include <stdio.h>

int main() {
    // Inicialize as variáveis para contar o uso de elevadores e períodos
    int contagem_elevador_A = 0;
    int contagem_elevador_B = 0;
    int contagem_elevador_C = 0;
    int contagem_matutino = 0;
    int contagem_vespertino = 0;
    int contagem_noturno = 0;

    // Número total de moradores
    int total_moradores = 50;

    // Loop para coletar dados de cada morador
    for (int i = 0; i < total_moradores; i++) {
        char elevador;
        char periodo;

        printf("Morador %d: Qual elevador você utiliza com mais frequência (A, B ou C)? ", i + 1);
        scanf(" %c", &elevador);

        printf("Qual período você utiliza o elevador (M, V ou N)? ");
        scanf(" %c", &periodo);

        // Contagem de uso de elevadores e períodos
        switch (elevador) {
            case 'A':
                contagem_elevador_A++;
                break;
            case 'B':
                contagem_elevador_B++;
                break;
            case 'C':
                contagem_elevador_C++;
                break;
            default:
                printf("Elevador inválido. Use A, B ou C.\n");
                i--;  // Decrementa o contador para repetir a entrada para o morador atual.
                continue;
        }

        switch (periodo) {
            case 'M':
                contagem_matutino++;
                break;
            case 'V':
                contagem_vespertino++;
                break;
            case 'N':
                contagem_noturno++;
                break;
            default:
                printf("Período inválido. Use M, V ou N.\n");
                i--;  // Decrementa o contador para repetir a entrada para o morador atual.
        }
    }

    // Encontre o elevador mais frequentado
    char elevador_mais_frequentado;
    int max_uso_elevador = contagem_elevador_A;
    
    if (contagem_elevador_B > max_uso_elevador) {
        max_uso_elevador = contagem_elevador_B;
        elevador_mais_frequentado = 'B';
    }
    
    if (contagem_elevador_C > max_uso_elevador) {
        max_uso_elevador = contagem_elevador_C;
        elevador_mais_frequentado = 'C';
    }

    // Encontre o período mais usado
    char periodo_mais_usado;
    int max_uso_periodo = contagem_matutino;
    
    if (contagem_vespertino > max_uso_periodo) {
        max_uso_periodo = contagem_vespertino;
        periodo_mais_usado = 'V';
    }
    
    if (contagem_noturno > max_uso_periodo) {
        max_uso_periodo = contagem_noturno;
        periodo_mais_usado = 'N';
    }

    // Calcule a diferença percentual entre o mais usado e o menos usado
    int min_uso = contagem_matutino;
    
    if (contagem_vespertino < min_uso) {
        min_uso = contagem_vespertino;
    }
    
    if (contagem_noturno < min_uso) {
        min_uso = contagem_noturno;
    }

    float diferenca_percentual = ((float)(max_uso_periodo - min_uso) / min_uso) * 100;

    // Calcule a percentagem do total de serviços prestados do elevador de média utilização
    int elevador_media_utilizacao;
    
    if (elevador_mais_frequentado == 'A') {
        elevador_media_utilizacao = contagem_elevador_B + contagem_elevador_C;
    } else if (elevador_mais_frequentado == 'B') {
        elevador_media_utilizacao = contagem_elevador_A + contagem_elevador_C;
    } else {
        elevador_media_utilizacao = contagem_elevador_A + contagem_elevador_B;
    }

    float percentagem_media_utilizacao = ((float)elevador_media_utilizacao / total_moradores) * 100;

    // Imprima os resultados
    printf("O período mais usado de todos é %c e pertence ao elevador %c.\n", periodo_mais_usado, elevador_mais_frequentado);
    printf("O elevador mais frequentado é %c e se concentra no período %c.\n", elevador_mais_frequentado, periodo_mais_usado);
    printf("A diferença percentual entre o mais usado e o menos usado é %.2f%%.\n", diferenca_percentual);
    printf("A percentagem sobre o total de serviços prestados do elevador de média utilização é %.2f%%.\n", percentagem_media_utilizacao);

    return 0;
}
