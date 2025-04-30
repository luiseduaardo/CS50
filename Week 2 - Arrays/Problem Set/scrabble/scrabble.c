#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int check_score(string name);
void compare_scores(int score1, int score2);

const int points[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // Input the names
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Check the score
    int score1 = check_score(word1);
    int score2 = check_score(word2);

    // Compare the score and show the winner
    compare_scores(score1, score2);
}

int check_score(string name)
{
    int sum = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        // If the letter is in uppercase
        if (isupper(name[i]))
        {
            sum += points[name[i] - 'A'];
        }
        // If the letter is in lowercase
        else if (islower(name[i]))
        {
            sum += points[name[i] - 'a'];
        }
    }

    return sum;
}

void compare_scores(int score1, int score2)
{
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }

    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }

    else
    {
        printf("Tie!\n");
    }
}
