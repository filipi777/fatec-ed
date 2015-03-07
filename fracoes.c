#include <stdio.h>

typedef struct fracao {
    int num, den;
} t_fracao;

void le_fracao(t_fracao *, char *);
void mostra_fracao(t_fracao, char *);

int main()
{
    t_fracao f1;
    le_fracao(&f1, "Fracao 1: ");
    mostra_fracao(f1, "Fracao 1: ");
    return 0;
}

le_fracao(t_fracao *f, char * msg)
{
    printf("%s", msg);
    printf("Digite o numerador: ");
    scanf("%d", &f->num);
    printf("Digite o denominador: ");
    scanf("%d", &f->den);
}

mostra_fracao(t_fracao f, char * msg)
{
    printf("%s", msg);
    printf("%d/%d", f.num, f.den);
}