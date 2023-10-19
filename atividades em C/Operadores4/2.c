#include <stdio.h>

int main() {
    int A, B, C, D;
    
    printf("Digite quatro valores: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    int maior = A;
    int menor = A;
    
    if (B > maior) {
        maior = B;
    }
    if (C > maior) {
        maior = C;
    }
    if (D > maior) {
        maior = D;
    }
    
    if (B < menor) {
        menor = B;
    }
    if (C < menor) {
        menor = C;
    }
    if (D < menor) {
        menor = D;
    }
    
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    
}
