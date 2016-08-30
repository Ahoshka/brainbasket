#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)  
{
    float change;
    int coins, cents;

    printf("O hai! ");

    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while (change < 0);

    cents = (int) round(change * 100);

    // Initialize coins
    coins = 0;

    // Quarters
    coins += cents / 25;
    cents %= 25;

    // Dimes
    coins += cents / 10;
    cents %= 10;

    // Nickels
    coins += cents / 5;
    cents %= 5;

    // Pennies
    coins += cents;

    printf("%i\n", coins);

    return 0;
}