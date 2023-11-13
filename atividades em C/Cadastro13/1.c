#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USUARIOS 1000

// Definição da estrutura do usuário
typedef struct {
    int id;
    char nome[100];
    char email[100];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
} Usuario;

// Função para gerar um ID único para o usuário
int gerarId() {
    return rand();
}

// Função para incluir um usuário
void incluirUsuario(Usuario usuarios[], int* numUsuarios) {
    if (*numUsuarios < MAX_USUARIOS) {
        Usuario novoUsuario;

        novoUsuario.id = gerarId();

        printf("Digite o nome completo: ");
        scanf(" %[^\n]s", novoUsuario.nome);

        printf("Digite o e-mail: ");
        scanf("%s", novoUsuario.email);

        printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
        scanf("%s", novoUsuario.sexo);

        printf("Digite o endereço: ");
        scanf(" %[^\n]s", novoUsuario.endereco);

        printf("Digite a altura (entre 1 e 2 metros): ");
        scanf("%lf", &novoUsuario.altura);

        // Validação da altura
        while (novoUsuario.altura < 1 || novoUsuario.altura > 2) {
            printf("Altura inválida. Digite a altura novamente (entre 1 e 2 metros): ");
            scanf("%lf", &novoUsuario.altura);
        }

        printf("A pessoa foi vacinada? (1 para sim, 0 para não): ");
        scanf("%d", &novoUsuario.vacina);

        usuarios[*numUsuarios] = novoUsuario;
        (*numUsuarios)++;

        printf("Usuário incluído com sucesso!\n");
    } else {
        printf("Limite máximo de usuários atingido!\n");
    }
}

// Função para editar um usuário
void editarUsuario(Usuario usuarios[], int numUsuarios) {
    int idBusca;
    printf("Digite o ID do usuário que deseja editar: ");
    scanf("%d", &idBusca);

    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == idBusca) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]s", usuarios[i].nome);

            printf("Digite o novo e-mail: ");
            scanf("%s", usuarios[i].email);

            printf("Digite o novo sexo (Feminino, Masculino ou Indiferente): ");
            scanf("%s", usuarios[i].sexo);

            printf("Digite o novo endereço: ");
            scanf(" %[^\n]s", usuarios[i].endereco);

            printf("Digite a nova altura (entre 1 e 2 metros): ");
            scanf("%lf", &usuarios[i].altura);

            // Validação da altura
            while (usuarios[i].altura < 1 || usuarios[i].altura > 2) {
                printf("Altura inválida. Digite a altura novamente (entre 1 e 2 metros): ");
                scanf("%lf", &usuarios[i].altura);
            }

            printf("A pessoa foi vacinada? (1 para sim, 0 para não): ");
            scanf("%d", &usuarios[i].vacina);

            printf("Usuário editado com sucesso!\n");
            return;
        }
    }

    printf("Usuário com ID %d não encontrado.\n", idBusca);
}

// Função para excluir um usuário
void excluirUsuario(Usuario usuarios[], int* numUsuarios) {
    int idBusca;
    printf("Digite o ID do usuário que deseja excluir: ");
    scanf("%d", &idBusca);

    for (int i = 0; i < *numUsuarios; i++) {
        if (usuarios[i].id == idBusca) {
            // Move os usuários seguintes para frente para preencher o espaço do usuário excluído
            for (int j = i; j < *numUsuarios - 1; j++) {
                usuarios[j] = usuarios[j + 1];
            }

            (*numUsuarios)--;
            printf("Usuário excluído com sucesso!\n");
            return;
        }
    }

    printf("Usuário com ID %d não encontrado.\n", idBusca);
}

// Função para buscar um usuário pelo e-mail
void buscarPorEmail(Usuario usuarios[], int numUsuarios) {
    char emailBusca[100];
    printf("Digite o e-mail do usuário que deseja buscar: ");
    scanf("%s", emailBusca);

    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailBusca) == 0) {
            printf("\nUsuário encontrado:\n");
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("E-mail: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereço: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %s\n", usuarios[i].vacina ? "Sim" : "Não");
            return;
        }
    }

    printf("Usuário com e-mail %s não encontrado.\n", emailBusca);
}

// Função para imprimir todos os usuários cadastrados
void imprimirUsuarios(Usuario usuarios[], int numUsuarios) {
    printf("\nLista de todos os usuários cadastrados:\n");

    for (int i = 0; i < numUsuarios; i++) {
        printf("\nID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("E-mail: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereço: %s\n", usuarios[i].endereco);
        printf("Altura: %.2lf\n", usuarios[i].altura);
        printf("Vacina: %s\n", usuarios[i].vacina ? "Sim" : "Não");
    }
}

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    Usuario usuarios[MAX_USUARIOS];
    int numUsuarios = 0;
    char opcao;

    do {
        // Menu de opções
        printf("\nEscolha uma opção:\n");
        printf("1. Incluir usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Buscar usuário pelo e-mail\n");
        printf("5. Imprimir todos os usuários cadastrados\n");
        printf("6. Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario(usuarios, &numUsuarios);
                break;
            case '2':
                editarUsuario(usuarios, numUsuarios);
                break;
            case '3':
                excluirUsuario(usuarios, &numUsuarios);
                break;
            case '4':
                buscarPorEmail(usuarios, numUsuarios);
                break;
            case '5':
                imprimirUsuarios(usuarios, numUsuarios);
                break;
            case '6':
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != '6');

    return 0;
}