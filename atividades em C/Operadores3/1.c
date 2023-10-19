#include <stdio.h>

int main() {
    int idade;
    char nome[40];

    printf("Digite seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite a idade:");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("\nA pessoa é maior de idade.\n");
    } else {
        printf("\nA pessoa não é maior de idade.\n");
    }

    return 0;
}
