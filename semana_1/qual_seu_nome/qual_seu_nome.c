#include <stdio.h>

int main(void)
{
    char nome[20];

    printf("Qual é o seu nome? ");
    scanf("%c", &nome);
    printf("\n");

    printf("Olá, %c\n", nome);
}