#include <stdio.h>

int main() {
    int N;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);
    
    if (N < 0) {
        printf("O número digitado não é positivo.\n");
        return 1;
    }
    
    printf("Números naturais de %d até 0 em ordem decrescente:\n", N);
    for (int i = N; i >= 0; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}
