#include <stdio.h>
#include <string.h>
#define BUF_SIZE 1024
#include "interface.h"

void mostrar_tabuleiro(ESTADO *e) {
    for (int i = 1; i < 9; i++) {
        for (int k = 1; k < 9; k++) {
            if (i == 1 && k == 8)
                printf("2");
            else if (i == 8 && k == 1)
                printf("1");
            else
                printf( (e->tab[i][k] == BRANCA) ? "*" : "." );
        }
        putchar('\n');
    }
}
int interpretador(ESTADO *e) {
    mostrar_tabuleiro(e);
    char linha[BUF_SIZE];
    char col[2], lin[2];

    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;

    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
        putchar('\n');
        interpretador(e);
    }
    return 1;


}