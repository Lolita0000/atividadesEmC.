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
Neste programa, você lê as notas dos 15 alunos, armazena as notas em um vetor e calcula a média das notas. Em seguida, ele exibe as notas individuais de cada aluno e a média das notas. Certifique-se de compilar e executar o código em um ambiente C para utilizar o programa.


#include <stdio.h>

int main() {
    double vetor[10];
    int quantidadeNegativos = 0;
    double somaPositivos = 0.0;

    // Preenchendo o vetor com 10 números reais
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &vetor[i]);

        // Verificando se o número é negativo
        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    // Exibindo a quantidade de números negativos e a soma dos positivos
    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2lf\n", somaPositivos);

    return 0;
}


