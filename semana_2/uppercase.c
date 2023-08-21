#include "stdio.h"
#include "cs50.h"
#include "string.h"

int main(void) {
    string s = get_string("Before: ");
    printf("After:\n");

    for (int i = 0, len = strlen(s); i < len; ++i) {
        printf("%c", s[i] - 32);
    }
}