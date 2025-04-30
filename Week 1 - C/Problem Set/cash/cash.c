#include <cs50.h>
#include <stdio.h>

int count_coins(int charge);

int main(void)
{
    // Input the charge
    int charge;
    do
    {
        charge = get_int("Charge owed: ");
    }
    while (charge < 1);

    // Count the coins
    printf("%i\n", count_coins(charge));
}

int count_coins(int charge)
{
    int quarter, dime, nickel, penny, rest, total;

    // Count the amount of quarters
    quarter = charge / 25;
    rest = charge % 25;

    // Count the amount of dimes
    dime = rest / 10;
    rest = rest % 10;

    // Count the amount of nickels
    nickel = rest / 5;
    rest = rest % 5;

    // Count the amount of pennies
    penny = rest;

    // Total
    total = quarter + dime + nickel + penny;

    return total;
}
