#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int index_clau(float letters, float sentences);

int main(void)
{
    // Input the sentence
    string text = get_string("Text: ");

    // Check the sentence letters, sentences and words
    float letters = count_letters(text);
    float words = count_words(text);
    float sentences = count_sentences(text);

    float letters_index = (100 * letters) / words;
    float sentences_index = (100 * sentences) / words;

    // Use the Coleman-Lau index
    int index = index_clau(letters_index, sentences_index);

    // Output the result
    if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    printf("Grade %i\n", index);
}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 1;
    for (int j = 0, len = strlen(text); j < len; j++)
    {
        if (text[j] == ' ')
        {
            words++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int k = 0, len = strlen(text); k < len; k++)
    {
        if (text[k] == '.' || text[k] == '?' || text[k] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}

int index_clau(float letters, float sentences)
{
    float index = (0.0588 * letters) - (0.296 * sentences) - 15.8;
    return round(index);
}
