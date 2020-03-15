#include <stdio.h>
#include "logica.h"



int jogar(ESTADO *e, COORDENADA c) {
    printf("jogar %d %d\n", c.coluna+1, c.linha+1);
    e-> tab [c.coluna+1][c.linha+1]= 1;

    return 1;
}
