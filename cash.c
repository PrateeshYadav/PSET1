#include <stdio.h>
#include <cs50.h>

int main (void)
{
    /* Changes Reference
    QUARTERS - 25 C
    DIMES    - 10 C
    NICKELS  - 05 C
    PENNIES  - 01 C
    */

    float userInput = 0;

    do
    {
        userInput = get_float("ENTER THE SUM OF MONEY RECEIVED : ");

    } while (userInput < 0);

    printf("USERINPUT : %f\n",userInput);

    //EXTRACTION

    int cents = (int)(userInput * 100) % 100;
    printf("CENTS : %i\n",cents);

    int coinAmount = 0;

    while (cents > 0)
    {

        while (cents >= 25)
        {
            cents = cents - 25;
            coinAmount++;
        }

        while (cents >= 10)
        {
            cents = cents - 10;
            coinAmount++;
        }

        while (cents >= 5)
        {
            cents = cents - 5;
            coinAmount++;
        }

        while (cents >= 1)
        {
            cents = cents - 1;
            coinAmount++;
        }


    }

    printf("CENTS REMAINING TO CALCULATE : %i\n",cents);
    printf("AMOUNT OF COINS TO GIVE      : %i\n",coinAmount);





}
