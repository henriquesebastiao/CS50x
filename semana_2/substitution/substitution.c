#include <cs50.h>
#include <stdio.h>

const int ERROR = 1;

int get_len(string text)
{
    int len = 0;
    for (int i = 0; text[i] != 0; i++)
    {
        len++;
    }
    return len;
}

int main(int argc, string argv[])
{
    // Verifica se um e apenas um argumento foi passado
    if (argc > 2 || argc < 2)
    {
        printf("Usage: ./substitution key\n");
        return ERROR;
    }

    string key = argv[1];
    const int KEY_LEN = get_len(key);

    // Verifica se o tamanho da chave é de 26 caracteres
    if (KEY_LEN != 26)
    {
        printf("Key must contain 26 caracters.\n");
        return ERROR;
    }

    for (int i = 0, letter = 1; letter != 0; i++)
    {
        letter = (int) key[i];
        if (letter == 0)
        {
            break;
        }

        // Verifica se a chave contém apenas caracteres alfabéticos
        if ((letter < 65 || letter > 90) && (letter < 97 || letter > 122))
        {
            int problem = letter;
            printf("The key must contain only alphabetic characters.\n");
            return ERROR;
        }

        // Convertendo todas as letras para maiúsculo
        if (letter > 90)
        {
            key[i] = (char) letter - 32;
        }
    }

    for (int i = 0; i < KEY_LEN; i++)
    {
        int verify = (int) key[i];
        for (int x = 0; x < KEY_LEN; x++)
        {
            if (verify == key[x] && i != x)
            {
                printf("You cannot repeat characters.\n");
                return ERROR;
            }
        }
    }

    // Obtém o texto plano
    string plain_text = get_string("plaintext: ");

    // Realiza a criptografia
    for (int i = 0; plain_text[i] != 0; i++)
    {
        if (plain_text[i] == 0)
        {
            break;
        }

        if ((plain_text[i] < 65 || plain_text[i] > 90) &&
            (plain_text[i] < 97 || plain_text[i] > 122))
        {
            continue;
        }
        else
        {
            char plain_char = plain_text[i];

            int index = (int) plain_char;

            // Obtem o índice corretor do caractere criptografado
            if (index >= 97)
            {
                index -= 97;
            }
            else
            {
                index -= 65;
            }

            if (plain_char <= 90)
            {
                plain_text[i] = key[index]; // Caracteres maiúsculos
            }
            else
            {
                plain_text[i] = key[index] + 32; // Converte para minúsculo
            }
        }
    }

    printf("ciphertext: %s\n", plain_text);
}
