#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int soma = 0;

    // Lendo 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];

        // Inicializando 'maior' e 'menor' com o primeiro valor lido
        if (i == 0) {
            maior = menor = valores[i];
        }

        // Atualizando 'maior' e 'menor' se necessário
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    // Calculando a média
    double media = (double)soma / 5;

    // Exibindo os valores lidos, o maior, o menor e a média
    printf("Valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2lf\n", media);

    return 0;
}