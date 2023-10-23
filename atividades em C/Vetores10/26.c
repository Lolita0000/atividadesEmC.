#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1; // Começar com o primeiro número natural

    for (int i = 0; i < 100; ) {
        // Verificar se o número não é múltiplo de 7 e não termina com 7
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[i] = numero;
            i++;
        }
        numero++;
    }

    // Imprimir o vetor
    printf("Os 100 prime#include <stdio.h>
#include <math.h>

int main() {
    int n = 10;
    double v[n]; // Vetor com 10 elementos
    double media = 0.0;
    double soma = 0.0;

    // Ler os valores do vetor
    printf("Digite 10 números:\n");
    for (int i = 0; i < n; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%lf", &v[i]);
        media += v[i];
    }

    // Calcular a média
    media /= n;

    // Calcular a soma dos quadrados das diferenças
    for (int i = 0; i < n; i++) {
        soma += pow(v[i] - media, 2);
    }

    // Calcular o desvio padrão
    double desvioPadrao = sqrt(soma / (n - 1));

    printf("A média é: %lf\n", media);
    printf("O desvio padrão é: %lf\n", desvioPadrao);

    return 0;
}iros números naturais que não são múltiplos de 7 ou não terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n"); // Quebra de linha a cada 10 números
        }
    }

    return 0;
}