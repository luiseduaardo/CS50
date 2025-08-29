#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // THIRD PART - POINTER ARITHMETIC
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));

    /*
    // SECOND PART - STRINGS
    char *s = "HI!";
    printf("%p\n", s);      // tells the address in the memory of the first letter of the "string"

    // the printf for strings is implemented just like a while loop
        // while the address is not corresponding to a null (\0) character, it prints each letter
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    */


    /*
    // FIRST PART - INTEGERS
    int n = 50; // integers are equivalent to 32 bits = 4 bytes

    int *p = &n; // i want a variable called p that is a pointer (*) and i want it to be the address of the variable n (&n)

    printf("%i\n", *p); // i am getting to the address and printing the integer that is there

    string

    // printf("%p\n", &n);
        // alt way of doing it.
        // obs: the address changed because it reorganize the addresses when i compile again

    // & (ampersand) - address of operador (tells the address of the operator);
    // * (star) - dereference operator (tells how to get to somewhere in the memory);
    // %p - print the pointers (addresses of memory);
    */
}
