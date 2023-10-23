#include <stdio.h>

void imprimirMesEQuantidadeDias(int numeroMes) {
    char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (numeroMes >= 1 && numeroMes <= 12) {
        printf("Mês: %s\n", meses[numeroMes - 1]);
        printf("Quantidade de dias: %d\n", diasNoMes[numeroMes - 1]);
    } else {
        printf("Número de mês inválido. Deve ser entre 1 e 12.\n");
    }
}

int main() {
    int numeroMes;
    
    printf("Digite um número de mês (entre 1 e 12): ");
    scanf("%d", &numeroMes);
    
    imprimirMesEQuantidadeDias(numeroMes);
    
    return 0;
}