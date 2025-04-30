#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Command line arguments
int main(int argc, string argv[])
{
    string text = argv[1];
    int len = strlen(text);

    // Get user's input
    if (argc != 2)
    {
        printf("Please provide a single word.\n");
        return 1;
    }

    for (int i = 0; i < len; i++)
    {
        if(!isalpha(text[i]))
        {
            printf("This is not a valid letter.\n");
            return 2;
        }
    }

    // Iterate through each element in the string
    for (int i = 1; i < len; i++)
    {
        // Check if it is alphabetical
        if (text[i] < text[i - 1])
        {
            printf("No\n");
            return 0;
        }
    }
    // Print out yes or no
    printf("Yes\n");
}
