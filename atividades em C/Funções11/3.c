#include <stdio.h>

double fahrenheitParaCelsius(double fahrenheit) {
    double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celsius;
}

int main() {
    double temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &temperaturaFahrenheit);

    temperaturaCelsius = fahrenheitParaCelsius(temperaturaFahrenheit);

    printf("%.2lf graus Fahrenheit equivalem a %.2lf graus Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);

    return 0;
}