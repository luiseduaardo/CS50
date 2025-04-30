#include <cs50.h>
#include <stdio.h>

void meow(int n); /*prototype of this function*/
int get_positive_int(void);

int main(void)
{
    int times = get_positive_int();
    meow(times);
}

int get_positive_int(void)
{
    int n; /*declaring a variable*/
    do     /*while (n<1) do this*/
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    return n;
}

void meow(int n) /*meow function*/
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
