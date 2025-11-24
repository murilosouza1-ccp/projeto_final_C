#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 50

// Guardar os produtos
struct Produto {
    char nome[40];
    int codigo;
    int quantidade;
};

// Guardar varios produtos
struct Produto lista[MAX_PRODUTOS];
int totalProdutos = 0;


// Função para cadastrar um produto novo
void cadastrarProduto() {
    printf("\n--- Cadastro de Produto ---\n");

    if (totalProdutos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    printf("Digite o nome do produto: ");
    scanf("%s", lista[totalProdutos].nome);

    printf("Digite o codigo do produto: ");
    scanf("%d", &lista[totalProdutos].codigo);

    printf("Digite a quantidade inicial: ");
    scanf("%d", &lista[totalProdutos].quantidade);

    printf("Produto cadastrado com sucesso!\n");
    totalProdutos++;
}


// Função para entrada de estoque
void entradaEstoque() {
    int codigo, qtd, i;

    printf("\n--- Entrada de Estoque ---\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (i = 0; i < totalProdutos; i++) {
        if (lista[i].codigo == codigo) {
            printf("Digite a quantidade a adicionar: ");
            scanf("%d", &qtd);

            lista[i].quantidade += qtd;

            printf("Estoque atualizado com sucesso!\n");
            return;
        }
    }

    printf("Produto nao encontrado!\n");
}


// Função para saída de estoque
void saidaEstoque() {
    int codigo, qtd, i;

    printf("\n--- Saida de Estoque ---\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (i = 0; i < totalProdutos; i++) {
        if (lista[i].codigo == codigo) {
            printf("Digite a quantidade a remover: ");
            scanf("%d", &qtd);

            if (qtd > lista[i].quantidade) {
                printf("Quantidade insuficiente em estoque!\n");
            } else {
                lista[i].quantidade -= qtd;
                printf("Saida realizada com sucesso!\n");
            }
            return;
        }
    }

    printf("Produto nao encontrado!\n");
}


// Função para consultar um produto pelo código
void consultarProduto() {
    int codigo, i;

    printf("\n--- Consulta de Produto ---\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (i = 0; i < totalProdutos; i++) {
        if (lista[i].codigo == codigo) {
            printf("\nProduto encontrado:\n");
            printf("Nome: %s\n", lista[i].nome);
            printf("Codigo: %d\n", lista[i].codigo);
            printf("Quantidade: %d\n", lista[i].quantidade);

            // Aqui entra a etapa 2 (alerta de estoque baixo)
            if (lista[i].quantidade < 5) {
                printf("ALERTA: Estoque baixo! Necessario repor.\n");
            }

            return;
        }
    }

    printf("Produto nao encontrado!\n");
}


// Função para listar todos os produtos
void listarProdutos() {
    int i;

    printf("\n--- Lista de Produtos ---\n");

    if (totalProdutos == 0) {
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    for (i = 0; i < totalProdutos; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Codigo: %d\n", lista[i].codigo);
        printf("Quantidade: %d\n", lista[i].quantidade);
    }
}


// MENU PRINCIPAL
int main() {
    int opcao;

    do {
        printf("\n--- Sistema de Controle de Estoque ---\n");
        printf("1 - Cadastrar Produto\n");
        printf("2 - Entrada de Estoque\n");
        printf("3 - Saida de Estoque\n");
        printf("4 - Consultar Produto\n");
        printf("5 - Listar Produtos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                entradaEstoque();
                break;
            case 3:
                saidaEstoque();
                break;
            case 4:
                consultarProduto();
                break;
            case 5:
                listarProdutos();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
