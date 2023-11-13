#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar informações de um produto
typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

// Estrutura para armazenar um nó da lista
typedef struct Nodo {
    Produto produto;
    struct Nodo* proximo;
} Nodo;

// Estrutura para representar a lista de estoque
typedef struct {
    Nodo* inicio;
} ListaEstoque;

// Função para inicializar uma lista vazia
ListaEstoque inicializaLista() {
    ListaEstoque lista;
    lista.inicio = NULL;
    return lista;
}

// Função para adicionar um novo produto à lista de estoque
void adicionaProduto(ListaEstoque* lista) {
    Produto novoProduto;

    printf("Digite o código do produto: ");
    scanf("%d", &novoProduto.codigo);
    printf("Digite a descrição do produto: ");
    scanf(" %[^\n]s", novoProduto.descricao);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoProduto.quantidade);
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &novoProduto.valor);

    Nodo* novoNodo = (Nodo*)malloc(sizeof(Nodo));
    novoNodo->produto = novoProduto;
    novoNodo->proximo = lista->inicio;

    lista->inicio = novoNodo;

    printf("Produto adicionado com sucesso!\n");
}

// Função para imprimir um relatório com as informações de cada produto
void imprimeRelatorio(ListaEstoque lista) {
    Nodo* atual = lista.inicio;

    while (atual != NULL) {
        printf("Código: %d\n", atual->produto.codigo);
        printf("Descrição: %s\n", atual->produto.descricao);
        printf("Quantidade: %d\n", atual->produto.quantidade);
        printf("Valor: R$ %.2f\n", atual->produto.valor);
        printf("--------------------\n");

        atual = atual->proximo;
    }
}

// Função para pesquisar um produto pelo código
void pesquisaProduto(ListaEstoque lista) {
    int codigoPesquisa;
    printf("Digite o código do produto que deseja pesquisar: ");
    scanf("%d", &codigoPesquisa);

    Nodo* atual = lista.inicio;
    while (atual != NULL) {
        if (atual->produto.codigo == codigoPesquisa) {
            printf("Código: %d\n", atual->produto.codigo);
            printf("Descrição: %s\n", atual->produto.descricao);
            printf("Quantidade: %d\n", atual->produto.quantidade);
            printf("Valor: R$ %.2f\n", atual->produto.valor);
            return;
        }
        atual = atual->proximo;
    }

    printf("Produto não encontrado.\n");
}

// Função para remover um produto do estoque
void removeProduto(ListaEstoque* lista) {
    int codigoRemocao;
    printf("Digite o código do produto que deseja remover: ");
    scanf("%d", &codigoRemocao);

    Nodo* atual = lista->inicio;
    Nodo* anterior = NULL;

    while (atual != NULL) {
        if (atual->produto.codigo == codigoRemocao) {
            if (anterior == NULL) {
                // Remover o primeiro elemento da lista
                lista->inicio = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            free(atual);
            printf("Produto removido com sucesso!\n");
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }

    printf("Produto não encontrado.\n");
}

// Função principal
int main() {
    ListaEstoque lista = inicializaLista();
    int opcao;

    do {
        printf("\n=== Sistema de Controle de Estoque ===\n");
        printf("1. Adicionar Produto\n");
        printf("2. Imprimir Relatório\n");
        printf("3. Pesquisar Produto\n");
        printf("4. Remover Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionaProduto(&lista);
                break;
            case 2:
                imprimeRelatorio(lista);
                break;
            case 3:
                pesquisaProduto(lista);
                break;
            case 4:
                removeProduto(&lista);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}