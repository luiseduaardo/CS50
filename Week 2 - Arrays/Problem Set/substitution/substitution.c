#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void convert_cipher(string character, string key);

int main(int argc, string argv[])
{
    // Accept just one CLA
    if (argc != 2)
    {
        printf("Usage: ./substituition key\n");
        return 1;
    }

    string key = argv[1];

    // Invalid key
    int len = strlen(argv[1]);
    if (len != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Check if it is alphabetic
    for (int i = 0; i < len; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must contain only letters.\n");
            return 1;
        }
    }

    // Avoid repeated letters
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (tolower(key[i]) == tolower(key[j]))
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
    }

    // Input the plaintext
    string plaintext = get_string("plaintext:  ");

    // Output the ciphertext
    printf("ciphertext: ");
    convert_cipher(plaintext, key);
    printf("\n");
}

void convert_cipher(string text, string key)
{
    for (int j = 0, len = strlen(text); j < len; j++)
    {
        if (isupper(text[j]))
        {
            int index = text[j] - 'A';
            printf("%c", toupper(key[index]));
        }

        else if (islower(text[j]))
        {
            int index = text[j] - 'a';
            printf("%c", tolower(key[index]));
        }

        else
        {
            printf("%c", text[j]);
        }
    }
}
