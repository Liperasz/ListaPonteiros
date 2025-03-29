//
// Created by Felipe on 28/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    double preco;
} Produto;

double buscar_preco_produto (int n, Produto **produto, int quant ) {

    for (int i = 0; i < quant; i++) {
        if (produto[i]->id == n) {
            return produto[i]->preco;
        }
    }
    return -1;
}
//Função que busca o preço do produto conforme o ID, retorna -1 caso não exista produto com o ID

int main () {


    Produto *produto;

    printf("Insira a quantidade de produtos: ");
    int n;
    scanf("%d", &n);

    produto = (Produto *)malloc(n * sizeof(Produto));

    for (int i = 0; i < n; i++) {
        int id = i + 1;
        char name[50];
        double preco;

        printf("Insira o nome do produto: ");
        getchar();
        gets(name);

        printf("Insira o preco do produto: ");
        scanf("%lf", &preco);

        produto[i].id = id;
        produto[i].preco = preco;
        *produto[i].name = name;

        //Cria todos os produtos conforme pedido
    }

    printf("Digite o id de um produto: ");
    int idbusca;
    scanf("%d", &idbusca);

    double precobusca = buscar_preco_produto(idbusca, &produto, n);

    if (precobusca == -1) {
        printf("Produto nao encontrado");
    }
    else {
        printf("Proco: %.2f", precobusca);
    }

    //Realiza a busca do produto

    return 0;
}