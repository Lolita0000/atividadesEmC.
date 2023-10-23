#include <stdio.h>

int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;
    
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    
    int resultado = max(a, b);
    
    printf("O maior número é: %d\n", resultado);
    
    return 0;
}