//
// Created by Felipe on 28/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int vetor[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int * ptr = &vetor[0];

    printf("%d\n", *ptr);

    ptr++;
    printf("%d\n", *ptr);

    (*ptr)++;
    printf("%d\n", *ptr);

    *(ptr++);
    printf("%d\n", *ptr);

    *(ptr+10);
    printf("%d\n", *ptr);

    return 0;
}

/*

R: p++ você esta acrescentando + 1 no endereço da memória de um ponteiro, exemplo: caso o ponteiro esteja apontando para
a posição 0 de um vetor, ao fazer p++ voce estará apontando para a posição 1.
(*p)++ você esta adicionando + 1 no valor para onde o ponteiro está apontando.
*(p++) aqui você também apenas avança um endereço na memória do ponteiro.
*(p + 10) você está acessando o valor armazenado no endereço de p + 10. Ou seja, ao utilizar por exemplo x = *(p + 10),
considerando que p está apontando para um vetor, X seria igual ao valor da posição 10 do vetor

 */