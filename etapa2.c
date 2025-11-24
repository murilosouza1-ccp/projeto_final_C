#include <stdio.h>

int main(){

    char nome[40];
    int codigo;
    int quantidade;
    int minimo = 5;
    int opcao;

    printf("Cadastro do produto\n\n");

    printf("Digite o nome do produto: ");
    scanf("%s", nome);

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("\nDados do Produto:\n");
    printf("Nome: %s\n", nome);
    printf("Codigo: %d\n", codigo);
    printf("Quantidade: %d\n", quantidade);

    // Aqui começa a etapa 2
    printf("\n1 - Verificar estoque\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            if(quantidade < minimo){
                printf("Estoque baixo! Necessario repor.\n");
            } else {
                printf("Estoque suficiente.\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
