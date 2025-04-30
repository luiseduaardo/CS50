#include <cs50.h>
#include <stdio.h>

// Define a type
typedef struct
{
    string name;
    int votes;
} election;

int main(void)
{
    // Create an array
    const int num = 3;
    election candidate[num];

    // Populate the array
    for (int i = 0; i < num; i++)
    {
        candidate[i].name = get_string("Name: ");
        candidate[i].votes = get_int("Votes: ");
    }

    // Search the array to find the most voted
    string mostVotedN;
    int mostVotedV = 0;
    for (int j = 0; j < num; j++)
    {
        if (candidate[j].votes > mostVotedV)
        {
            mostVotedN = candidate[j].name;
            mostVotedV = candidate[j].votes;
        }
    }

    // Print the most voted
    printf("The most voted candidate was %s, with %i votes.\n", mostVotedN, mostVotedV);
}
