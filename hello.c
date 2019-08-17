#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string userInput = get_string("Enter a message : ");
    printf("MESSAGE IS : %s\n",userInput);
}
