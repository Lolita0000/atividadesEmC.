#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Estrutura para armazenar informações de um veículo
typedef struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo* proximo;
} Veiculo;

// Função para inicializar uma lista vazia
Veiculo* inicializaLista() {
    return NULL;
}

// Função para adicionar um novo veículo à lista
Veiculo* adicionaVeiculo(Veiculo* lista, char proprietario[], char combustivel[],
                         char modelo[], char cor[], char chassi[], int ano, char placa[]) {
    // Alocar memória para um novo veículo
    Veiculo* novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));

    // Preencher os campos do novo veículo
    strcpy(novoVeiculo->proprietario, proprietario);
    strcpy(novoVeiculo->combustivel, combustivel);
    strcpy(novoVeiculo->modelo, modelo);
    strcpy(novoVeiculo->cor, cor);
    strcpy(novoVeiculo->chassi, chassi);
    novoVeiculo->ano = ano;
    strcpy(novoVeiculo->placa, placa);

    // Adicionar o novo veículo no início da lista
    novoVeiculo->proximo = lista;
    return novoVeiculo;
}

// a. Lista proprietários de carros do ano de 2010 ou posterior e movidos a diesel
void listaProprietariosDiesel2010(Veiculo* lista) {
    Veiculo* atual = lista;

    printf("\nProprietários de carros do ano de 2010 ou posterior e movidos a diesel:\n");

    while (atual != NULL) {
        if (atual->ano >= 2010 && strcmp(atual->combustivel, "diesel") == 0) {
            printf("%s\n", atual->proprietario);
        }

        atual = atual->proximo;
    }
}

// b. Lista placas que começam com J e terminam com 0, 2, 4 ou 7 com seus respectivos proprietários
void listaPlacasJ0_2_4_7(Veiculo* lista) {
    Veiculo* atual = lista;

    printf("\nPlacas que começam com J e terminam com 0, 2, 4 ou 7 com seus respectivos proprietários:\n");

    while (atual != NULL) {
        if (atual->placa[0] == 'J' &&
            (atual->placa[7] == '0' || atual->placa[7] == '2' || atual->placa[7] == '4' || atual->placa[7] == '7')) {
            printf("Placa: %s, Proprietário: %s\n", atual->placa, atual->proprietario);
        }

        atual = atual->proximo;
    }
}

// c. Lista modelo e cor dos veículos com placas de segunda letra vogal e soma dos dígitos numéricos par
void listaModeloCorPlacasVogalSomaPar(Veiculo* lista) {
    Veiculo* atual = lista;

    printf("\nModelo e cor dos veículos com placas de segunda letra vogal e soma dos dígitos numéricos par:\n");

    while (atual != NULL) {
        if (strchr("aeiouAEIOU", atual->placa[1]) != NULL) {
            int somaDigitos = 0;
            for (int i = 0; i < 7; i++) {
                if (isdigit(atual->placa[i])) {
                    somaDigitos += atual->placa[i] - '0';
                }
            }
            if (somaDigitos % 2 == 0) {
                printf("Modelo: %s, Cor: %s\n", atual->modelo, atual->cor);
            }
        }

        atual = atual->proximo;
    }
}

// d. Troca de proprietário pelo número do chassi apenas para carros com placas sem dígito zero
void trocaProprietario(Veiculo** lista, char chassi[], char novoProprietario[]) {
    Veiculo* atual = *lista;
    Veiculo* anterior = NULL;

    while (atual != NULL) {
        // Verifica se não há dígito zero na placa e se o chassi coincide
        if (strchr(atual->placa, '0') == NULL && strcmp(atual->chassi, chassi) == 0) {
            // Atualiza o proprietário
            strcpy(atual->proprietario, novoProprietario);
            printf("Proprietário do veículo com chassi %s atualizado para %s.\n", chassi, novoProprietario);
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }
   printf("Nenhum veículo encontrado com chassi %s ou veículo possui dígito zero na placa.\n", chassi);
  }

  // Função principal
  int main() {
      // Inicializa uma lista vazia de veículos
      Veiculo* lista = inicializaLista();

      // Adiciona alguns veículos para teste
      lista = adicionaVeiculo(lista, "Proprietario1", "diesel", "Modelo1", "Cor1", "Chassi1", 2015, "JAB1234");
      lista = adicionaVeiculo(lista, "Proprietario2", "gasolina", "Modelo2", "Cor2", "Chassi2", 2012, "JBC5678");
      lista = adicionaVeiculo(lista, "Proprietario3", "diesel", "Modelo3", "Cor3", "Chassi3", 2018, "JCD9012");

      // Testa as funções
      listaProprietariosDiesel2010(lista);
      listaPlacasJ0_2_4_7(lista);
      listaModeloCorPlacasVogalSomaPar(lista);

      // Simula a troca de proprietário
      trocaProprietario(&lista, "Chassi1", "NovoProprietario");

      // Libera a memória alocada para a lista de veículos
      while (lista != NULL) {
          Veiculo* temp = lista;
          lista = lista->proximo;
          free(temp);
      }

      return 0;
  }