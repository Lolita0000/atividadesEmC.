#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for (int i = 1; n > 0; i += 2, n--) {
        printf("%d\n", i);
    }

    return 0;
}
