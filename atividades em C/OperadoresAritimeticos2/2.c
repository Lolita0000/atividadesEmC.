#include <stdio.h>

int main() {
    // Declarar variável para armazenar o número
    int numero;

    // Solicitar ao usuário para inserir o número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Calcular e mostrar o dobro
    int dobro = numero * 2;
    printf("O dobro de %d é: %d\n", numero, dobro);

    return 0;
}
