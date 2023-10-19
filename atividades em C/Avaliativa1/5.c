#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    // Coordenadas dos pontos
    printf("Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Distância com 4 casas decimais após a vírgula
    printf("A distância entre os pontos é de: %.4lf\n", distancia);

    return 0;
}
