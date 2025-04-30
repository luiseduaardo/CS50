#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotate(char character, int key);

int main(int argc, string argv[])
{
    // Ensure only one CLA
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Ensure every character is a digit
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Key must be a non negative number.\n");
            return 1;
        }
    }

    // Convert from string to int
    int key = atoi(argv[1]);

    // Input the plaintext
    string plaintext = get_string("plaintext:  ");

    // Output the ciphertext
    printf("ciphertext: ");
    for (int j = 0, len = strlen(plaintext); j < len; j++)
    {
        printf("%c", rotate(plaintext[j], key));
    }
    printf("\n");
}

char rotate(char character, int key)
{
    if (isupper(character))
    {
        return ((character - 'A' + key) % 26) + 'A';
    }

    if (islower(character))
    {
        return ((character - 'a' + key) % 26) + 'a';
    }
    else
    {
        return character;
    }
}
