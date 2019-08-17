#include <stdio.h>
#include <cs50.h>

int main(void)
{


    int userInput = get_int("ENTER THE SIZE OF PYRAMID : ");


    // Left Pyramid
    for(int i = 0; i < userInput; i++ )
    {
        for(int j = userInput; j > i; j--)
        {
            printf(" ");
        }

        for(int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        printf(" ");

        for(int a = 0; a < i + 1; a++)
        {
            printf("#");
        }

        printf("\n");

    }

}
