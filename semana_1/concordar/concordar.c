#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Pergunte se o usuário concorda:
    char concorda = get_char("Você concorda? ");

    if (concorda == 'y' || concorda == 'Y')
    {
        printf("Você concorda.\n");
    }
    else if (concorda == 'n' || concorda == 'N')
    {
        printf("Você não concorda.\n");
    }

}