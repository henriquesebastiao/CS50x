#include <stdio.h>

int main(void)
{
    int pontos_perdidos;

    // Solicitando ao usuário quantos pontos ele perdeu
    printf("Quantos pontos você perdeu? \n");
    scanf("%i", &pontos_perdidos);
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