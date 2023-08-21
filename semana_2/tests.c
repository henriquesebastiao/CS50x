#include "stdio.h"
#include "cs50.h"
#include "string.h"

int main(void) {
    string nome = "henrique";
    int comprimento = strlen(nome);

    for (int i = 0; i < comprimento; ++i) {
        printf("%c", nome[i] - 32);
    }
}