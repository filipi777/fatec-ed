/*
 * Aula 03 variáveis compostas 
 */

#include <stdio.h>

struct conta {
    int numero;
    float saldo;
};

void exibeConta (struct conta, char *);

int main()
{
    struct conta conta1, conta2;
    conta1.numero = 10;
    conta1.saldo =100;
    printf("digite o numero da conta: ");
    scanf("%d", &conta2.numero);
    printf("digite o saldo da conta: ");
    scanf("%f", &conta2.saldo);
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
