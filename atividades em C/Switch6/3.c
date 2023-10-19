#include <stdio.h>

int main() {
    int prato, sobremesa, bebida;
    int calorias = 0;

    printf("Escolha o prato (1-4): ");
    scanf("%d", &prato);

    printf("Escolha a sobremesa (1-4): ");
    scanf("%d", &sobremesa);

    printf("Escolha a bebida (1-4): ");
    scanf("%d", &bebida);

    switch (prato) {
        case 1:
            calorias += 230; // Vegetariano
            break;
        case 2:
            calorias += 345; // Peixe
            break;
        case 3:
            calorias += 400; // Frango
            break;
        case 4:
            calorias += 500; // Carne
            break;
    }

    switch (sobremesa) {
        case 1:
            calorias += 75; // Abacaxi
            break;
        case 2:
            calorias += 120; // Sorvete diet
            break;
        case 3:
            calorias += 150; // Mousse diet
            break;
        case 4:
            calorias += 200; // Mousse chocolate
            break;
    }

    switch (bebida) {
        case 1:
            calorias += 5; // Chá
            break;
        case 2:
            calorias += 80; // Suco de laranja
            break;
        case 3:
            calorias += 100; // Suco de melão
            break;
        case 4:
            calorias += 65; // Refrigerante diet
            break;
    }

    printf("A quantidade total de calorias da refeição é: %d calorias\n", calorias);

    return 0;
}
