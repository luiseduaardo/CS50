// AmEx starts with 34 or 37 and has 15-digit numbers
// MasterCard starts with 51, 52, 53, 54 or 55 and has 16-digit numbers
// Visa starts with 4 and user 13- or 16-digit numbers

#include <cs50.h>
#include <stdio.h>

int check_luhn(long number);
string validate_card(long number);

int main(void)
{
    // Input the card number
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);

    // Validate the data
    if (check_luhn(number) == 0)
    {
        printf("%s\n", validate_card(number));
    }
    else
    {
        printf("INVALID\n");
    }
}

int check_luhn(long number)
{
    int sum = 0;
    int count = 1;

    while (number > 0)
    {
        // Picking the last digit
        int digit = number % 10;

        // If it is even, double the digit
        if (count % 2 == 0)
        {
            digit *= 2;
            sum += (digit / 10) + (digit % 10); // Sum the digits of the result (if it has 2 digits)
        }

        // If it is odd, just sum the digit
        else
        {
            sum += digit;
        }

        count++;
        number /= 10;
    }
    return (sum % 10);
}

string validate_card(long number)
{
    int length = 0;
    long begin = number;
    int first_digit = 0;
    int first_two_digits = 0;

    // Count the number of digits
    while (begin > 0)
    {
        // Keeps only the first digit
        if (begin < 10)
        {
            first_digit = begin;
        }
        if (begin >= 10 && begin < 100)
        {
            first_two_digits = begin;
        }
        begin /= 10;
        length++;
    }

    // Analyses the card type
    if ((first_two_digits == 34 || first_two_digits == 37) && length == 15)
    {
        return "AMEX";
    }
    else if ((first_two_digits >= 51 && first_two_digits <= 55) && length == 16)
    {
        return "MASTERCARD";
    }
    else if ((length == 13 || length == 16) && first_digit == 4)
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}
