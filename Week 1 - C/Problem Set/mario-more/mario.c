#include <cs50.h>
#include <stdio.h>

void print_row(int row, int bricks);

int main(void)
{
    // Prompt user for input
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print the double pyramid
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

    // Print left bricks
    for (int k = 0; k < row; k++)
    {
        printf("#");
    }

    // Print the space between the blocks
    printf("  ");

    // Print right bricks
    for (int l = 0; l < row; l++)
    {
        printf("#");
    }

    printf("\n");
}
