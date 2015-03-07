#include <stdio.h>

typedef struct fracao {
    int num, den;
} t_fracao;

void le_fracao(t_fracao *, char *);
void mostra_fracao(t_fracao, char *);
void inversa1(t_fracao *);
t_fracao inversa2(t_fracao);
void multiplica_fracao(t_fracao *, t_fracao *, t_fracao *);
void divide_fracao(t_fracao *, t_fracao *, t_fracao *);

int main()
{
    t_fracao f1, f2, f3, f4;
    le_fracao(&f1, "Fracao 1: ");
    mostra_fracao(f1, "Fracao 1: ");
    le_fracao(&f2, "Fracao 2: ");
    mostra_fracao(f2, "Fracao 2: ");
    multiplica_fracao(&f1, &f2, &f3);
    mostra_fracao(f3, "Multiplicacao: ");
    divide_fracao(&f1, &f2, &f3);
    mostra_fracao(f3, "Divisao: ");
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

void multiplica_fracao(t_fracao *f, t_fracao *g, t_fracao *r)
{
    
    r->num = f->num * g->den;
    r->den = f->den * g->num;
}

void divide_fracao(t_fracao *f, t_fracao *g, t_fracao *r)
{
    
    r->num = f->num / g->den;
    r->den = f->den / g->num;
}