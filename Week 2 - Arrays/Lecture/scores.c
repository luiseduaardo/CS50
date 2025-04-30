#include <cs50.h>
#include <stdio.h>

// Declaring a constant
const int N = 3;

// Prototype
float average(int length, int array[]);

int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int j = 0; j < length; j++)
    {
        sum += array[j];
    }
    return sum / (float) length;
}
