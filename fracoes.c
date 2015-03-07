#include <stdio.h>

typedef struct fracao {
    int num, den;
} t_fracao;

void le_fracao(t_fracao *, char *);
void mostra_fracao(t_fracao, char *);
void inversa1(t_fracao *);
t_fracao inversa2(t_fracao);

int main()
{
    t_fracao f1;
    le_fracao(&f1, "Fracao 1: ");
    mostra_fracao(f1, "Fracao 1: ");
    inversa1(&f1);
    mostra_fracao(f1, "Fracao invertida por referencia: ");
    f1 = inversa2(f1);
    mostra_fracao(f1, "Fracao invertida com return: ");
    return 0;
}

void le_fracao(t_fracao *f, char * msg)
{
    printf("%s", msg);
    printf("Digite o numerador: ");
    scanf("%d", &f->num);
    printf("Digite o denominador: ");
    scanf("%d", &f->den);
}

void mostra_fracao(t_fracao f, char * msg)
{
    printf("%s", msg);
    printf("%d/%d", f.num, f.den);
}

void inversa1(t_fracao *f)
{
    int aux;
    aux = f->num;
    f->num = f->den;
    f->den = aux;
}

t_fracao inversa2(t_fracao f)
{
    t_fracao aux;
    aux.num = f.den;
    aux.den = f.num;
    return aux;
}