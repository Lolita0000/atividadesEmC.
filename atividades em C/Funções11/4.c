#include <stdio.h>
#include <math.h>

double calcularVolumeCilindro(double altura, double raio) {
    const double pi = 3.141592;
    double volume = pi * pow(raio, 2) * altura;
    return volume;
}

int main() {
    double altura, raio, volume;

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    volume = calcularVolumeCilindro(altura, raio);

    printf("O volume do cilindro é: %.2lf\n", volume);

    return 0;
}