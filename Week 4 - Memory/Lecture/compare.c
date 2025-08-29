#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }

    else
    {
        printf("Different\n");
    }

    printf("the address of s is %p\n", s);
    printf("the address of t is %p\n", t);

    /* CONSIDERS IF THE ADDRESS IS THE SAME (DOESN'T WORK)
    compare strings like this = compare char * = compare the address of the first letter of the string
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    } */

}
