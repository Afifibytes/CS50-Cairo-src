#include <stdio.h>
#include <cs50.h>


void bubbleSort(int values[], int n)
{
    
    for(int i = 0; i < n; i++)
    {
        bool flag = false;
        for(int j = 0; j < n - (i + 1); j++)
        {
            if(values[j] > values[j + 1])
            {
                flag = true;
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
        if(!flag)
        {
            break;
        }
    }
}