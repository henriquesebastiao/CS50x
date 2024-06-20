#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;

    while (true)
    {
        h = get_int("height: ");
        if (h >= 1 && h <= 8)
        {
            break;
        }
    }

    int columns = 1;
    int blank;

    for (int x = h; x >= 1; x--)
    {
        printf("\n");
        blank = h - columns;
        for (int i = blank; i > 0; i--)
        {
            printf(" ");
        }
        for (int i = columns; i > 0; i--)
        {
            printf("#");
        }
        printf("  ");
        for (int i = columns; i > 0; i--)
        {
            printf("#");
        }
        columns++;
    }
    printf("\n");
}
