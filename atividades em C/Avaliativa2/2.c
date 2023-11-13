#include <stdio.h>

// Função para validar o sexo
int validaSexo(char sexo) {
    return sexo == 'M' || sexo == 'F';
}

// Função para validar o salário
int validaSalario(float salario) {
    return salario > 1.00;
}

// Função para classificar o salário em relação ao salário mínimo
char* classificaSalario(float salario) {
    const float SALARIO_MINIMO = 1400.00;

    if (salario > SALARIO_MINIMO) {
        return "Acima do salário mínimo";
    } else if (salario < SALARIO_MINIMO) {
        return "Abaixo do salário mínimo";
    } else {
        return "Igual ao salário mínimo";
    }
}

// Procedimento para mostrar os resultados
void mostraClassifica(char sexo, float salario, char* classificacao) {
    printf("Sexo: %s\n", (sexo == 'M') ? "Masculino" : "Feminino");
    printf("Salário: R$ %.2f\n", salario);
    printf("Classificação em relação ao salário mínimo: %s\n\n", classificacao);
}

int main() {
    int abaixoSalario = 0;
    int acimaSalario = 0;

    char sexo;
    float salario;

    while (1) {
        printf("Digite o sexo, sendo F para feminino e M para masculino: ");
        scanf(" %c", &sexo);

        if (!validaSexo(sexo)) {
            printf("Sexo inválido. Por favor, digite novamente.\n");
            continue;
        }

        printf("Digite o salário: R$ ");
        scanf("%f", &salario);

        if (!validaSalario(salario)) {
            printf("Salário inválido. Por favor, digite novamente.\n");
            continue;
        }

        char* classificacao = classificaSalario(salario);
        mostraClassifica(sexo, salario, classificacao);

        if (salario < 1400.00) {
            abaixoSalario++;
        } else if (salario > 1400.00) {
            acimaSalario++;
        }
    }

    printf("Quantidade de assalariados abaixo do salário mínimo: %d\n", abaixoSalario);
    printf("Quantidade de assalariados acima do salário mínimo: %d\n", acimaSalario);

    return 0;
}