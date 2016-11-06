/**
 * helpers.c
 *
 * Mahesh
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
 
 // Binary search
 
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    int low = 0; int high = n-1; 
    
    while ( high >= low)
    {
        int ans = (high+low)/2;
        if (values[ans]==value)
            return true;
        else if (values[ans] < value)
            low = ans+1;
        else
            high = ans-1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (values[i] > values[j])
            {
                int temp = values[i];
                values[j] = values[i];
                values[i] = temp;
            }
        }
    }
    
}


//Linear search

//bool search(int value, int values[], int n)
//{
//    
//    
//    if (n < 0)
//        return false;
//    
//    for (int i = 0; i < n; i++)
//    {
//        if (values[i] == value)
//            return true;
//    }
//    
//    return false;
//}