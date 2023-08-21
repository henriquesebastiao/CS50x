#include <cs50.h> // Preprocessing
#include <stdio.h> // Preprocessing

int main(void)
{
    string name = get_string("What's your name? \n");

    printf("Hello, %s!\n", name);
}
