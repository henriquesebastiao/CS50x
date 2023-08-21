#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int decimal_to_binary(int decimal);

int main(void)
{
    string message = get_string("Message: ");

    int binary[BITS_IN_BYTE];

    for (int i = 0, n = strlen(message); i < n; i++)
    {
        int decimal = (int) message[i];

        int x = 0;
        int count_bytes = BITS_IN_BYTE;

        while (decimal > 0)
        {
            binary[x] = decimal % 2;
            decimal /= 2;
            x++;
            count_bytes--;
        }

        while (count_bytes >= 0)
        {
            binary[x] = 0;
            count_bytes--;
        }

        for (int j = BITS_IN_BYTE; j >= 0; j--)
        {
            print_bulb(binary[j - 1]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}