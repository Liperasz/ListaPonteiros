//
// Created by Felipe on 28/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int n, *v;
    printf("Insira um tamanho para o vetor(numero natural): ");
    scanf("%d", &n);

    v = (int *)malloc(n * sizeof(int));

    return 0;
}