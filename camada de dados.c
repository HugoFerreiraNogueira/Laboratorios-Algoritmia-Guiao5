#include <stdlib.h>
#include "camada de dados.h"

ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    e-> tab [4][5]= 1;

    return e;
}
int obter_jogador_atual(ESTADO *estado){}
int obter_numero_de_jogadas(ESTADO *estado){}
CASA obter_estado_casa(ESTADO *e, COORDENADA c){}