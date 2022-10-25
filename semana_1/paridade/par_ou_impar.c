#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int NUMERO = get_int("Informe um número: ");

    if (NUMERO % 2 != 0)
    {
        printf("O número é ímpar.\n");
    }
    else
    {
        printf("O número é par.\n");
    }
}