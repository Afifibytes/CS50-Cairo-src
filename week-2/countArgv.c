#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    int count = 0;
    
    for(int i = 1; i < argc; i++)
    {
        for(int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            count++;
        }
    }
    
    printf("%i\n", count);
}