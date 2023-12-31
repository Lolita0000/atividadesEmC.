#include <stdio.h>

int main() {
    char nome[100];
    char sexo;
    float altura, peso;
    int num_homens = 0, num_mulheres = 0;
    float soma_altura_homens = 0, soma_altura_mulheres = 0, soma_altura_total = 0;
    float soma_peso_homens = 0, soma_peso_mulheres = 0, soma_peso_total = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Informe os dados da pessoa %d:\n", i);
        
        printf("Nome: ");
        scanf("%s", nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        printf("Peso (em kg): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            num_homens++;
            soma_altura_homens += altura;
            soma_peso_homens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
            soma_altura_mulheres += altura;
            soma_peso_mulheres += peso;
        } else {
            printf("Sexo inválido. Use M ou F.\n");
            i--;  // Decrementa o contador para repetir a entrada para a pessoa atual.
            continue;
        }

        soma_altura_total += altura;
        soma_peso_total += peso;
    }

    // Calcula as médias
    float media_altura_homens = num_homens > 0 ? soma_altura_homens / num_homens : 0;
    float media_altura_mulheres = num_mulheres > 0 ? soma_altura_mulheres / num_mulheres : 0;
    float media_altura_grupo = soma_altura_total / 10;

    float media_peso_homens = num_homens > 0 ? soma_peso_homens / num_homens : 0;
    float media_peso_mulheres = num_mulheres > 0 ? soma_peso_mulheres / num_mulheres : 0;
    float media_peso_grupo = soma_peso_total / 10;

    // Exibe os resultados
    printf("\nResultados:\n");
    printf("Número de homens: %d\n", num_homens);
    printf("Número de mulheres: %d\n", num_mulheres);
    printf("Altura média dos homens: %.2f metros\n", media_altura_homens);
    printf("Altura média das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("Altura média do grupo: %.2f metros\n", media_altura_grupo);
    printf("Peso médio dos homens: %.2f kg\n", media_peso_homens);
    printf("Peso médio das mulheres: %.2f kg\n", media_peso_mulheres);
    printf("Peso médio do grupo: %.2f kg\n", media_peso_grupo);

    return 0;
}
