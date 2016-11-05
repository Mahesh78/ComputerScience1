/**
 * Greedy Algorithm
 *
 * Mahesh
 * 
 * Demonstrates a Greedy Algorithm.
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    do{
        printf("O hai! How much change is owed?\n");
        change = GetFloat();
    } while(change <= 0);
    
    int cents = (int)round(change*100);
    
    int quarter = cents/25;
    cents = cents%25;
    
    int dime = cents/10;
    cents = cents%10;
    
    int nickel = cents/5;
    cents = cents%5;
    
    int number_coins = cents + quarter + nickel + dime;
    
        
    printf("%d\n",number_coins);
    
}