#include <stdio.h>
#include <time.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DataNascimento;

typedef struct {
    int anos;
    int meses;
    int dias;
} Idade;

Idade calcularIdade(DataNascimento dataNascimento) {
    time_t agora;
    struct tm dataNasc;
    time(&agora);
    dataNasc = *localtime(&agora);

    Idade idade;
    
    idade.anos = dataNasc.tm_year + 1900 - dataNascimento.ano;
    idade.meses = dataNasc.tm_mon + 1 - dataNascimento.mes;
    idade.dias = dataNasc.tm_mday - dataNascimento.dia;

    if (idade.dias < 0) {
        idade.dias += 30;
        idade.meses--;
    }
    if (idade.meses < 0) {
        idade.meses += 12;
        idade.anos--;
    }

    return idade;
}

int main() {
    DataNascimento dataNascimento;
    Idade idade;

    printf("Digite a data de nascimento (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dataNascimento.dia, &dataNascimento.mes, &dataNascimento.ano);

    idade = calcularIdade(dataNascimento);

    printf("Idade: %d anos, %d meses, %d dias\n", idade.anos, idade.meses, idade.dias);

    return 0;
}