#include <stdio.h>

int quantidade = 0;

// adiciona no estoque
void entradaEstoque() {
    int add;
    printf("Quantidade a adicionar: ");
    scanf("%d", &add);
    quantidade += add;
}

// remove do estoque
void saidaEstoque() {
    int rem;
    printf("Quantidade a remover: ");
    scanf("%d", &rem);

    if(rem > quantidade){
        printf("Estoque insuficiente!\n");
    } else {
        quantidade -= rem;
    }
}

// mostra o estoque
void mostrar() {
    printf("Quantidade atual: %d\n", quantidade);
}

int main() {
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1 - Entrada\n");
        printf("2 - Saida\n");
        printf("3 - Mostrar\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: entradaEstoque(); break;
            case 2: saidaEstoque();   break;
            case 3: mostrar();        break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
