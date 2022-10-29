#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Request a value from the user
    int h = get_int("Enter the height of the pyramid between 1 and 8: ");
    int x, y, cont;

    // Checks if the user has entered a valid value
    while (h < 1 || h > 8)
    {
        printf("Invalid value, try again.\n");
        h = get_int("Enter the height of the pyramid between 1 and 8: ");
    }

    int starting_h = h;

    // Print the pyramid
    while (h > 0)
    {
        for (x = 0; x < h; x++)
        {
            printf(" ");
        }
        for (cont = 0; cont < (starting_h - h + 1); cont++)
        {
            printf("#");
        }
        printf("\n");
        h--;
    }
}
