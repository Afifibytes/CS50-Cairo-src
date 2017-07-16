#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

bool linearSearch(int value, int values[], int n);

int main (int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./linear value\n");
        return 1;
    }
    
    int value = atoi(argv[1]);
    
    #define ARRAYSIZE 10
    int array[ARRAYSIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    if (linearSearch(value, array, ARRAYSIZE))
    {
        printf("Found!\n");
        return 0;
    }
    else
    {
        printf("Not found!\n");
        return 2;
    }
    
    return 0;
}

bool linearSearch(int value, int values[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(values[i] == value)
        return true;
    }
    return false;
}