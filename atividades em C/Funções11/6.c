#include <stdio.h>

double calcularIMC(double peso, double altura) {
    double imc = peso / (altura * altura);
    return imc;
}

int main() {
    double peso, altura, imc;

    printf("Digite o peso (em quilos): ");
    scanf("%lf", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    imc = calcularIMC(peso, altura);

    printf("O IMC é: %.2lf\n", imc);

    return 0;
}