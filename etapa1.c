#include <stdio.h>

int main(){
   
    char nome[40]; //guarda o nome do produto
    int codigo; // guarda o codigo do produto
    int quantidade; //guarda a quantidade

    printf ("cadastro do produto\n\n");

    //Entrada de dados
    printf ("Digite o nome do produto: ");
    scanf ("%s", nome);

    printf ("Digite o Codigo do produto: ");
    scanf ("%d", &codigo);

    printf ("Digite a quantidade: ");
    scanf ("%d", &quantidade);

    //saída de dados
    printf ("\nDados do Produto:\n");
    printf ("Nome %s\n", nome);
    printf ("Codigo: %d\n", codigo);
    printf ("Quantidade: %d\n", quantidade);

    return 0;
}
