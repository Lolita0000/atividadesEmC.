#include <stdio.h>

int main() {
    int A, B, C;

    // Solicita ao usuário para inserir os valores A, B e C
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Ordena os valores em ordem descendente usando uma série de condicionais
    if (A >= B && A >= C) {
        printf("%d\n", A);
        if (B >= C) {
            printf("%d\n", B);
            printf("%d\n", C);
        } else {
            printf("%d\n", C);
            printf("%d\n", B);
        }
    } else if (B >= A && B >= C) {
        printf("%d\n", B);
        if (A >= C) {
            printf("%d\n", A);
            printf("%d\n", C);
        } else {
            printf("%d\n", C);
            printf("%d\n", A);
        }
    } else {
        printf("%d\n", C);
        if (A >= B) {
            printf("%d\n", A);
            printf("%d\n", B);
        } else {
            printf("%d\n", B);
            printf("%d\n", A);
        }
    }

    return 0;
}
