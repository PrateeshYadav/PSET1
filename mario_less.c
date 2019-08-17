#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int userInput = get_int("ENTER a number : ");

    for(int i = 0; i < userInput; i++)
    {
        for(int j = userInput; j > i; j--)
        {
            printf(" ");
        }

        for(int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        printf("\n");
        //



    }
}
