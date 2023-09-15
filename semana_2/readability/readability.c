#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

double count_letters(const char *text, int length_string);
double count_words(const char *text, int length_string);
double count_sentences(const char *text, int length_string);

int main(void)
{
    string text = get_string("Text: ");

    int length_string = (int) strlen(text);
    double letters = count_letters(text, length_string);
    double words = count_words(text, length_string);
    double sentences = count_sentences(text, length_string);

    double l = ((double) letters / words) * 100;
    double s = ((double) sentences / words) * 100;

    int index = (int) round(0.0588 * l - 0.296 * s - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}

double count_letters(const char *text, int length_string)
{
    int letters = 0;
    for (int i = 0; i < length_string; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

double count_words(const char *text, int length_string)
{
    int words = 0;
    for (int i = 0; i <= length_string; ++i)
    {
        char current_letter = text[i];
        if (current_letter == ' ' || current_letter == '\0')
        {
            words++;
        }
    }
    return words;
}

double count_sentences(const char *text, int length_string)
{
    int phrases = 0;
    for (int i = 0; i <= length_string; ++i)
    {
        char current_letter = text[i];
        if (current_letter == '!' || current_letter == '.' || current_letter == '?')
        {
            phrases++;
        }
    }
    return phrases;
}