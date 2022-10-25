#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Solicitando ao usuário quantos pontos ele perdeu
    int pontos_perdidos = get_int("Quantos pontos você perdeu? ");
    printf("\n");

    if (pontos_perdidos > 2)
    {
        printf("Você perdeu mais pontos do que eu.\n");
    }
    else if (pontos_perdidos < 2)
    {
        printf("Você perdeu menos pontos do que eu.\n");
    }
    else
    {
        printf("Você perdeu a mesma quantidade de pontos que eu.\n");
    }

    return 0;
}