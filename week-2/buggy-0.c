#include <stdio.h>
#include <cs50.h>

/*
* print 5 positive numbers after each others!

*/

//TODO: Add comments to each step before and after solving any buggy line!
int main(void)
{
    printf("Enter 5 positive numbers");
    
    int positiveNumbers[5];
    
    for(int i = 0; i < 5; i++ )
    {
        
        int number = get_int();
        
        
        if(number < 1)
        {
            continue;
        }
        positiveNumbers[i] = number;
    }
    
    for(int i = 0; i <= 5; i++)
    {
        printf("%c\n", positiveNumbers[i]);   
    }
}