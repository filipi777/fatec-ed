/*
 * Aula 03 variáveis compostas 
 */

#include <stdio.h>

struct conta {
    int numero;
    float saldo;
};

void exibeConta (struct conta, char *);
void leConta (struct conta *, char *);
int main()
{
    struct conta conta1, conta2;
    printf("\nEndereco de conta 1: %p", &conta1);
    printf("\nEndereco de conta 2: %p", &conta2);
    printf("\nEndereco do numero da conta 1: %p", &conta1.numero);
    printf("\nEndereco do saldo da conta 1: %p", &conta1.saldo);
    printf("\nEndereco do numero da conta 2: %p", &conta2.numero);
    printf("\nEndereco do saldo da conta 2: %p", &conta2.saldo);
    conta1.numero = 10;
    conta1.saldo =100;
    leConta(&conta2, "Digite os dados para a conta2: ");
    exibeConta(conta1, "Conta 1");
    exibeConta(conta2, "Conta 2");
    return 0;
}

void exibeConta (struct conta c, char * msg)
{
    printf("\n%s", msg);
    printf("Numero: %d\n", c.numero);
    printf("Saldo: %.2f\n", c.saldo);
}

void leConta(struct conta *c, char * msg)
{
    printf("\n%s", msg);
    printf("Digite o numero da conta: ");
    scanf("%d", &c->numero);
    printf("Digite o saldo da conta: ");
    scanf("%.2f", &c->saldo);
}