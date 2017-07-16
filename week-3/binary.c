#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

bool binarySearch(int value, int values[], int n);

int main (int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./binary value\n");
        return 1;
    }
    
    int value = atoi(argv[1]);
    
    #define ARRAYSIZE 10
    int array[ARRAYSIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    if (binarySearch(value, array, ARRAYSIZE))
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

bool binarySearch(int value, int values[], int n)
{
    int begin = 0;
    int end = n - 1;
    
    while(begin <= end)
    {
        int midpoint = (end + begin) / 2;
        
        if(value == values[midpoint])
        {
            return true;
        }
        
        if(value < values[midpoint])
        {
            end = midpoint - 1;
        }
        if(value > values[midpoint])
        {
            begin = midpoint + 1;
        }
    }
    return false;
}