#include <stdio.h>

int main() {
    int num_alunos = 30;
    double notas[num_alunos];
    double media_geral = 0.0;

    // Notas de cada aluno para calcular a média
    for (int i = 0; i < num_alunos; i++) {
        double n1, n2, n3, media_ponderada;

        printf("Digite as notas do aluno: ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        // Calcula a média para o aluno
        media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        
        // Adiciona a média ponderada a média geral
        media_geral += media_ponderada;

        // Aprovado ou reprovado
        if (media_ponderada >= 7.0) {
            printf("Aluno %d: Média Ponderada = %.2lf - Aprovado\n", i + 1, media_ponderada);
        } else {
            printf("Aluno %d: Média Ponderada = %.2lf - Reprovado\n", i + 1, media_ponderada);
        }
    }

    // Calcula a média geral da turma
    media_geral /= num_alunos;

    printf("Média Geral da Turma: %.2lf\n", media_geral);

    return 0;
}
