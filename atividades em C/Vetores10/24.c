#include <stdio.h>

int main() {
    int numeroAluno, numeroAlunoAlto, numeroAlunoBaixo;
    double alturaAluno, alturaAlunoAlto, alturaAlunoBaixo;

    // Inicialize as alturas com valores extremos
    alturaAlunoAlto = -1.0; // Um valor menor que qualquer altura possível
    alturaAlunoBaixo = 100.0; // Um valor maior que qualquer altura possível

    for (int i = 0; i < 10; i++) {
        // Ler o número do aluno e sua altura
        printf("Digite o número do aluno e sua altura (em metros) separados por um espaço: ");
        scanf("%d %lf", &numeroAluno, &alturaAluno);

        // Verificar se é o aluno mais alto
        if (alturaAluno > alturaAlunoAlto) {
            alturaAlunoAlto = alturaAluno;
            numeroAlunoAlto = numeroAluno;
        }

        // Verificar se é o aluno mais baixo
        if (alturaAluno < alturaAlunoBaixo) {
            alturaAlunoBaixo = alturaAluno;
            numeroAlunoBaixo = numeroAluno;
        }
    }

    // Imprimir o aluno mais alto e o mais baixo
    printf("Aluno mais alto:\nNúmero: %d\nAltura: %.2lf metros\n", numeroAlunoAlto, alturaAlunoAlto);
    printf("Aluno mais baixo:\nNúmero: %d\nAltura: %.2lf metros\n", numeroAlunoBaixo, alturaAlunoBaixo);

    return 0;
}