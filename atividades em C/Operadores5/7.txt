#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    // Calcula a média ponderada
    media = (nota1 + nota2 + (nota3 * 2)) / 4.0;

    printf("A média do aluno é: %.2f\n", media);

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 7.0) {
        printf("O aluno foi aprovado!\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }

    return 0;
}
 
