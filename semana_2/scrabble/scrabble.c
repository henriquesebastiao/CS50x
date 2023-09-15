#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    printf("score1: %d\n", score1);
    printf("score2: %d\n", score2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;
    for (int i = 0; i <= strlen(word); i++)
    {
        if (isalpha(word[i]))
        {
            int ascii = (int) word[i];

            if (isupper(word[i]))
            {
                int one_point[10] = {65, 69, 73, 76, 78, 79, 82, 83, 84, 85};
                for (int j = 0; j < 10; j++)
                {
                    if (ascii == one_point[j])
                    {
                        score++;
                    }
                }

                int two_point[2] = {68, 71};
                for (int j = 0; j < 2; j++)
                {
                    if (ascii == two_point[j])
                    {
                        score += 2;
                    }
                }

                int three_point[4] = {66, 67, 77, 80};
                for (int j = 0; j < 4; j++)
                {
                    if (ascii == three_point[j])
                    {
                        score += 3;
                    }
                }

                int four_point[5] = {70, 72, 86, 87, 89};
                for (int j = 0; j < 5; j++)
                {
                    if (ascii == four_point[j])
                    {
                        score += 4;
                    }
                }

                // Six point
                if (ascii == 75)
                {
                    score += 5;
                }

                int eight_point[2] = {74, 88};
                for (int j = 0; j < 2; j++)
                {
                    if (ascii == eight_point[j])
                    {
                        score += 8;
                    }
                }

                int ten_point[2] = {81, 90};
                for (int j = 0; j < 2; j++)
                {
                    if (ascii == ten_point[j])
                    {
                        score += 10;
                    }
                }
            }
            else
            {
                int one_point[10] = {97, 101, 105, 108, 110, 111, 114, 115, 116, 117};
                for (int j = 0; j < 10; j++)
                {
                    if (ascii == one_point[j])
                    {
                        score++;
                    }
                }

                int two_point[2] = {100, 103};
                for (int j = 0; j < 2; j++)
                {
                    if (ascii == two_point[j])
                    {
                        score += 2;
                    }
                }

                int three_point[4] = {98, 99, 109, 112};
                for (int j = 0; j < 4; j++)
                {
                    if (ascii == three_point[j])
                    {
                        score += 3;
                    }
                }

                int four_point[5] = {102, 104, 118, 119, 121};
                for (int j = 0; j < 5; j++)
                {
                    if (ascii == four_point[j])
                    {
                        score += 4;
                    }
                }

                // Six point
                if (ascii == 107)
                {
                    score += 5;
                }

                int eight_point[2] = {106, 120};
                for (int j = 0; j < 2; j++)
                {
                    if (ascii == eight_point[j])
                    {
                        score += 8;
                    }
                }

                int ten_point[2] = {113, 122};
                for (int j = 0; j < 2; j++)
                {
                    if (ascii == ten_point[j])
                    {
                        score += 10;
                    }
                }
            }
        }
        else
        {
            continue;
        }
    }
    return score;
}
