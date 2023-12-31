#include <stdio.h>

int main() {
    int votos_candidato[4] = {0}; 
    int votos_nulos = 0;
    int votos_branco = 0;
    int voto;

    do {
        // Código do voto
        printf("Digite o código do seu voto, sendo: 1, 2, 3 e 4 para os candidatos, 5 sendo nulo e 6 sendo branco, ou difgite 0 para encerrar a contagem de votos: ");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
            case 2:
            case 3:
            case 4:
                votos_candidato[voto - 1]++; // Contador do candidato correspondente
                break;
            case 5:
                votos_nulos++; // Contador de votos nulos
                break;
            case 6:
                votos_branco++; // Contador de votos em branco
                break;
            case 0:
                break; // Encerra a contagem
            default:
                printf("Código de voto inválido. Tente novamente.\n");
        }
    } while (voto != 0);

    // Resultados
    for (int i = 0; i < 4; i++) {
        printf("Total de votos para o Candidato %d: %d\n", i + 1, votos_candidato[i]);
    }
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_branco);

    return 0;
}
