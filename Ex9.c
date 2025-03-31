//
// Created by Felipe on 31/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **criar_matriz(int linha, int coluna) {

    int **matriz;
    matriz = (int **)malloc(linha * sizeof(int *));
    for (int i = 0; i < linha; i++) {
      matriz[i] = (int *)malloc(coluna * sizeof(int));
    }
    return matriz;
}

void free_matriz(int **matriz) {

  for (int i = 0; i < linha; i++) {
    free(matriz[i]);
  }
  free(matriz);
}

int main() {

    **matriz = criar_matriz(5, 10);
    free_matriz(matriz);
}