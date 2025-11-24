#include <stdio.h>

int main(){

    char nome[40];
    int codigo;
    int quantidade;
    int opcao;

    printf("\nCadastro inicial do produto\n");

    printf("Digite o nome do produto: ");
    scanf("%s", nome);

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Loop de entrada e saída
    do {
        printf("\n--- Menu ---\n");
        printf("1 - Entrada de estoque\n");
        printf("2 - Saida de estoque\n");
        printf("3 - Mostrar produto\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            int add;
            printf("Quantidade a adicionar: ");
            scanf("%d", &add);
            quantidade += add;
        }
        else if(opcao == 2){
            int rem;
            printf("Quantidade a remover: ");
            scanf("%d", &rem);
            if(rem > quantidade){
                printf("Estoque insuficiente!\n");
            } else {
                quantidade -= rem;
            }
        }
        else if(opcao == 3){
            printf("\nProduto:\n");
            printf("Nome: %s\n", nome);
            printf("Codigo: %d\n", codigo);
            printf("Quantidade: %d\n", quantidade);
        }
        else if(opcao != 0){
            printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
