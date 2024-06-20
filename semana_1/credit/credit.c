#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int tamanho_numero;
    string entrada;
    while (true)
    {
        entrada = get_string("Number: ");
        tamanho_numero = strlen(entrada);
        bool pass = true;
        for (int x = tamanho_numero - 1; x >= 0; x--)
        {
            int caractere = (int) entrada[x];
            if (caractere >= 48 && caractere <= 57)
            {
                continue;
            }
            else
            {
                pass = false;
                break;
            }
        }
        if (pass)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    // Obtendo inicio do numero do cartao
    int inicio = (((int) entrada[0] - 48) * 10) + ((int) entrada[1] - 48);

    int numero[16];

    int i = 0;
    bool tem_hifen = false;

    while (tamanho_numero > 0)
    {
        if (entrada[i] == 45) // ASCII code for -
        {
            tem_hifen = true;
        }

        numero[i] = (int) entrada[i] - 48; // Convert ASCII code to number
        i++;
        tamanho_numero--;
    }
    tamanho_numero = i;

    // Passo 1
    int passo1 = 0;
    int produto1 = 0;
    int j = tamanho_numero - 2;

    while (j >= 0)
    {
        produto1 = numero[j] * 2;

        if (produto1 < 10)
        {
            passo1 += produto1;
        }
        else
        {
            int unidade = produto1 % 10;
            passo1 += 1 + unidade;
        }
        j -= 2;
    }

    // Passo 2
    j = tamanho_numero - 1;
    int soma = 0;

    while (j >= 0)
    {
        soma += numero[j];
        j -= 2;
    }
    soma += passo1;
    bool valid = false;
    if (soma % 10 == 0)
    {
        valid = true;
    }

    printf("Inicio: %i\n", inicio);
    printf("Tamanho: %i\n", tamanho_numero);

    // Passo 3
    if ((inicio == 34 || inicio == 37) && tamanho_numero == 15 && valid)
    {
        printf("AMEX\n");
    }
    else if ((inicio >= 51 && inicio <= 55) && tamanho_numero == 16 && valid)
    {
        printf("MASTERCARD\n");
    }
    else if (inicio / 10 == 4 && (tamanho_numero == 13 || tamanho_numero == 16) && valid)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
