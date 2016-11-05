/**
 * caesar cipher with command-line arguments.
 *
 * Mahesh
 *
 * Demonstrates a caesar cipher algorithm.
 */


#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{   
    
    if(argc != 2)
    {
        printf("Enter a single command-line argument\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    string s = GetString();

    int l = strlen(s);
    
    for (int i =0; i < l; i++)
    {
        if(isupper(s[i]))
        {
            s[i] = ((s[i] - 65 + k)%26) + 65;
        }
        
        else if(islower(s[i]))
        {
            s[i] = ((s[i] - 97 + k)%26) + 97;
        }
        
    }
    printf("%s\n",s);
}