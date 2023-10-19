#include <stdio.h>

int main() {
    int N;
    
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);
    
    if (N < 0) {
        printf("O número deve ser positivo.\n");
        return 1;
    }
    
    printf("Números naturais de 0 até %d:\n", N);
    
    for (int i = 0; i <= N; i++) {
        printf("%d\n", i);
    }
    
    return 0; 
}
