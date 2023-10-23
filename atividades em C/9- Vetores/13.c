#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int posicaoMaior, posicaoMenor;

    // Lendo 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);

        // Inicializando 'maior' e 'menor' com o primeiro valor lido
        if (i == 0) {
            maior = menor = valores[i];
            posicaoMaior = posicaoMenor = i;
        }

        // Atualizando 'maior' e 'menor' se necessário
        if (valores[i] > maior) {
            maior = valores[i];
            posicaoMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posicaoMenor = i;
        }
    }

    // Exibindo a posição do maior e do menor valor
    printf("Posição do maior valor: %d\n", posicaoMaior);
    printf("Posição do menor valor: %d\n", posicaoMenor);

    return 0;
}