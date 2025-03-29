//
// Created by Felipe on 28/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char s[10] = "abcde";
    char* cptr;

    cptr = &s[0];
    cptr += strlen(s);
    for (int i = 0; i < strlen(s) + 1; i++) {
        printf("%c", *cptr);
        cptr--;
    }

    return 0;
}

//Verifica o tamanho da string com strleng, e apartir daí vai utilizando os prints em forma reversa até chegar no
//Endereço 0