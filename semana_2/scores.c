#include <cs50.h>
#include <stdio.h>

const int N = 3;

float average(int length, int array[]); // Devo declarar a função antes de usá-la, pois o clang lê o código de cima para baixo

int main(void) {
    int scores[N]; // Definindo um array de tamanho N
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[]) {
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return sum / (float) length; // Casting (convertendo) para float
}