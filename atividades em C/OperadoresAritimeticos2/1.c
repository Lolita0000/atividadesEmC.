#include <stdio.h>

int main() {
    float num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Soma: %.2f\n", num1 + num2);
    printf("Subtracao: %.2f\n", num1 - num2);
    printf("Multiplicacao: %.2f\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisao: %.2f\n", num1 / num2);
    } else {
        printf("Divisao por zero nao e possivel.\n");
    }
    
    return 0;
}
