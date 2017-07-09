#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = 0, defaultNumber;
    do
    {
        printf("Give me a number between 1 and 100: ");
        defaultNumber = get_int();
    } 
    while(defaultNumber > 100 || defaultNumber < 0);
    
    for(int i = 0; number + defaultNumber < 100 ; i++)
    {
        number += defaultNumber;
        printf("%i ", number);
    }
    printf("\n");
}