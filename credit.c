#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // AMERICAN EXPRESS - 15 DIGIT - Starts with 34 and 37
    // MASTERCARD       - 16 DIGIT - Starts with 51, 52, 53, 54 or 55
    // VISA             - 13 & 16  - Starts with 4

    //long userInput = get_long("ENTER YOUR CREDIT CARD NUMBER : ");
    //printf("USER INPUT : %ld\n",userInput);


    long userInput = 378282246310005;//27 + 33
    int count = 0;

    long calculation = userInput;

    while( calculation > 0 )
    {
        calculation = calculation / 10;
        count ++;

    }

    printf("TOTAL DIGITS : %i\n",count);

    if( count == 15 || count == 16 || count == 13 || count == 16) // If amount of digits in the CC are valid.
    {

        long remainder  = userInput;
        int leftNumber  = 0;
        int rightNumber = 0;

        int leftSum   = 0;
        int rightSum  = 0;
        int totalSum  = 0;



        while(userInput > 0)
        {
            int extractedValues = 0;// Holds two digits that we seperate and later add

            extractedValues   = userInput % 100;
            leftNumber        = extractedValues / 10;
            rightNumber       = extractedValues % 10;

            int leftMult = leftNumber * 2;

            if(leftMult > 9)
            {
                leftMult = (leftMult / 10) + (leftMult % 10);
            }

            leftSum  = leftMult + leftSum;
            rightSum = rightNumber + rightSum;

            userInput = userInput / 100;

            printf("REMAINING NUMBERS : %ld\n",userInput);

        }

        totalSum = leftSum + rightSum;
        printf("TOTAL SUM : %i\n",totalSum);

        if(totalSum % 10 == 0)
        {
            printf("THE CREDIT CARD IS VALID\n");
        }


    }

    else
    {
        printf("THE CREDIT CARD NUMBER IS INVALID");
    }











}
