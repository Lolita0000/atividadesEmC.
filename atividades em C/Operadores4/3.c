#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Digite três valores: ");
    scanf("%d %d %d", &A, &B, &C);
    
    // Ordenando os valores usando a técnica de seleção
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (A > C) {
        int temp = A;
        A = C;
        C = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    
    printf("Valores em ordem ascendente: %d %d %d\n", A, B, C);
    
}
