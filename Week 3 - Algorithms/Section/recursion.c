#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void)
{
    int num;
    do
    {
        num = get_int("Number: ");
    }
    while (num < 0);

    int result = factorial(num);
    printf("The result of %i! is %i\n", num, result);
}

int factorial(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    else
    {
        // Recursive case
        return n * factorial(n - 1);
    }
}
