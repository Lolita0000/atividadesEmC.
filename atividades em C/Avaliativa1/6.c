#include <stdio.h>

int main() {
    float x, y;

    // Coordenadas do ponto
    printf("Digite as coordenadas do ponto x e y: ");
    scanf("%f %f", &x, &y);

    // Procura se o ponto está na origem
    if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    // Procura se o ponto está em um dos eixos
    else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    }
    // Procura em qual quadrante o ponto está
    else if (x > 0 && y > 0) {
        printf("Quadrante 1\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrante 2\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrante 3\n");
    } else {
        printf("Quadrante 4\n");
    }

    return 0;
}
