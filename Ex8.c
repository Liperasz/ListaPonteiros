#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preencher_vetor(int **vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Insira um inteiro para colocar no vetor: ");
        scanf("%d", &(*vetor)[i]);
    }
}
//Função que permite o usuario preencher o vetor com numeros


int main() {

    printf("Digite o tamanho de um vetor: ");
    int tam;
    scanf("%d", &tam);

    int *vetor = (int *) malloc (tam * sizeof(int)); //Aloca o vetor

    preencher_vetor(&vetor, tam);

    for (int i = 0; i < tam; i++) {
        printf("O valor %d e: %d\n\n", i+1, vetor[i]);
    }

    free(vetor); //Libera o vetor

    return 0;
}
