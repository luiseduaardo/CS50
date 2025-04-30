#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float a, float b, float c);

int main(void)
{
    // Input the triangle sides
    float s1 = get_int("Side 1: ");
    float s2 = get_int("Side 2: ");
    float s3 = get_int("Side 3: ");

    // Output if it is valid or not
    printf("%s\n", valid_triangle(s1, s2, s3) ? "true" : "false");
}

bool valid_triangle(float a, float b, float c)
{
    // check if the values are positive
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }

    // check the condition of existence
    if (a + b > c && a + c > b && b + c > a)
    {
        return true;
    }

    else
    {
        return false;
    }
}
