//
// Created by Felipe on 28/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int y, *p, x;
    y = 0; //varival Y recebe o valor 0
    p = &y; //ponteiro p recebe o endereço da variavel Y
    x = *p; //X recebe o valor do endereço onde p está apontando, ou seja, x = y
    x = 4; //X recebe o valor 4
    (*p)++; //O valor do endereço em que P está apontando acrescenta em 1, ou seja, Y = 1
    x--; //X diminui 1, agora x = 3
    (*p) += x; //X é acrescentado ao valor do endereço onde P aponta, ou seja, Y += X, logo Y = 4
    printf ("y = %d\n", y);

    return 0;
}