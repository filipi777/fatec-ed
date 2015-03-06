#include <stdio.h>

typedef struct fracao {
    int num, den;
} t_fracao;

void le_fracao(t_fracao *, char *);
void mostra_fracao(t_fracao, char *);