//
// Created by Felipe on 28/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverte_vetor(int *v1, int *v2, int n) {
    int maior_valor;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            maior_valor = v1[i];
        } else if (v1[i] > maior_valor) {
            maior_valor = v1[i];
        }
        *v2 = *(v1 + n - i - 1);
        v2++;
    }
    return maior_valor;
}
//Função que passa o ultimo valor do primeiro vetor para o primeiro endereço do segundo vetor, e vai seguindo dessa forma.
//O maior valor é definido como o primeiro valor pego do primeiro vetor, e depois vai vericando com os posteriores e
//substituindo caso seja menor.


int main () {

    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10];
    int tamanho = 10;

    inverte_vetor(vetor1, vetor2, tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor2[i]);
    }

    return 0;
}