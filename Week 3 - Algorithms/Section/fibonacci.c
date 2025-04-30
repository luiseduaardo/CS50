#include <cs50.h>
#include <stdio.h>

int fibonacci(int n)

int main(void)
{
    int num = get_int("How many numbers do you want in the sequence? ");
    fibonacci(num);
}

int fibonacci(int n)
{
    int array[n];
    // Base case
    if (n == 1)
    {
        array[n] = 1;
    }
    if (n == 0)
    {
        array[n] = 0;
    }

    // Recursive case
    if (n > 2)
    {
        fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
    }

    
}
