#include <stdio.h>

int main() {
    float peso;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    if (peso < 60) {
        printf("O peso é menor que 60 kg.\n");
    } else {
        printf("O peso não é menor que 60 kg.\n");
    }
}
