#include <stdio.h>
#include <math.h>

double calcularVolumeEsfera(double raio) {
    const double pi = 3.141592;
    double volume = (4.0 / 3.0) * pi * pow(raio, 3);
    return volume;
}

int main() {
    double raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = calcularVolumeEsfera(raio);

    printf("O volume da esfera é: %.2lf\n", volume);

    return 0;
}