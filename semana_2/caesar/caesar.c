#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contains_only_digits(const char *str);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    // Verifica se há argumento
    if (argc < 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Verifica se não tem mais de um argumento
    if (argc > 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Verifica se há apenas string no argumento
    if (!contains_only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Verifica se o argumento é inteiro
    if (argv[1] < 0)
    {
        printf("O argumento deve ser um inteiro.");
        return 1;
    }

    // Convertendo o argumento em int
    int key = atoi(argv[1]);

    // Solicitando plaintext para o usuário
    string plaintext = get_string("plaintext:  ");

    // Output
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");
}

int contains_only_digits(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

// Para cada caractere no plaintext, converta o caractere
char rotate(char c, int key)
{
    while (key > 26)
    {
        key -= 26;
    }

    int ascii = (int) c;

    if (ascii >= 65 && ascii <= 90)
    {
        ascii += key;
        if (ascii > 90)
        {
            ascii -= 26;
        }
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        ascii += key;
        if (ascii > 122)
        {
            ascii -= 26;
        }
    }

    c = (char) ascii;

    return c;
}