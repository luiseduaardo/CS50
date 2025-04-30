#include <cs50.h>
#include <stdio.h>

void array_numbers(int elements);

int main(void)
{
    int n = get_int("Number of elements: ");
    array_numbers(n);
}

void array_numbers(int elements)
{
    int array[elements];
    for (int i = 0; i < elements; i++)
    {
        if (i == 0)
        {
            array[i] = 1;
        }
        else
        {
            array[i] = array[i-1]*2;
        }
        printf("In position %i we have %i\n", i, array[i]);
    }
}
