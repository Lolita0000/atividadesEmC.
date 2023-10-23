#include <stdio.h>

int main() {
    // Declarando um vetor para armazenar as notas de 15 alunos
    float notas[15];
    float soma = 0.0;

    // Lendo as notas dos alunos
    printf("Digite as notas dos 15 alunos:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i]; // Acumula a soma das notas
    }

    // Calculando a média das notas
    float media = soma / 15;

    // Exibindo as notas e a média
    printf("Notas dos alunos:\n");
    for (int i = 0; i < 15; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }
    printf("Média das notas: %.2f\n", media);

    return 0;
}