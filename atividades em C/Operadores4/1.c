#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    
    printf("Digite um número: ");
    scanf("%lf", &numero);
    
    if (numero >= 0) {
        double raiz_quadrada = sqrt(numero);
        printf("A raiz quadrada do número é: %lf\n", raiz_quadrada);
    } else {
        double quadrado = numero * numero;
        printf("O quadrado do número é: %lf\n", quadrado);
    }
    
}
