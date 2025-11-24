#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[40];
    int codigo;
    int quantidade;
};

int main(){

    struct Produto lista[50];
    int total = 0;
    int opcao, i;

    do {
        printf("\n--- Menu ---\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Nome: ");
            scanf("%s", lista[total].nome);

            printf("Codigo: ");
            scanf("%d", &lista[total].codigo);

            printf("Quantidade: ");
            scanf("%d", &lista[total].quantidade);

            total++;
        }
        else if(opcao == 2){
            for(i = 0; i < total; i++){
                printf("\nProduto %d\n", i+1);
                printf("Nome: %s\n", lista[i].nome);
                printf("Codigo: %d\n", lista[i].codigo);
                printf("Quantidade: %d\n", lista[i].quantidade);
            }
        }

    } while(opcao != 0);

    return 0;
}
