#include "cs50.h"
#include "stdio.h"

int main(void) {
    string name = get_string("Qual é seu nome? ");

    int index = 0;

    while (name[index] != '\0') {
        index += 1;
    }

    printf("O tamanho do nome %s é: %i", name, index);
}