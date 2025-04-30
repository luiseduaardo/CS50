#include <cs50.h>
#include <stdio.h>

void print_row(int row, int bricks);

int main(void)
{
    // Prompt user for input
    int height; /*defined*/
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print a pyramid
    for (int i = 1; i <= height; i++)
    {
        print_row(i, height);
    }
}

void print_row(int row, int bricks)
{
    // Print spaces
    for (int j = 0; j < (bricks - row); j++)
    {
        printf(" ");
    }

    // Print bricks
    for (int k = 0; k < row; k++)
    {
        printf("#");
    }
    printf("\n");
}
