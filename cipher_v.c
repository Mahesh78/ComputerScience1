/**
 * vigenère cipher with command-line arguments
 *
 * Mahesh
 *
 * Demonstrates a vigenere cipher.
 *
 * Takes command-line argument as key.
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
    
    //Check for incorrect key
    string k = argv[1];
    int m = strlen(k);
    for (int p = 0; p < m; p++)
    {
        if (! isalpha(k[p]))
        {
            printf("Incorrect Key\n");
            return 1;
        }
    }
        
    string s = GetString();
    int l = strlen(s);
    for (int i =0,j=0; i < l; i++)
    {
        if(isalpha(s[i]))
        {
            
                if(isupper(s[i]))
                {
                    if(islower(k[j%m]))
                    {
                        s[i] = ((s[i] - 65 + (k[j%m])-97)%26) + 65;
                    }
                    else
                    {
                        s[i] = ((s[i] - 65 + (k[j%m])-65)%26) + 65;
                    }
                    j++;
                    
                }
        
                else if(islower(s[i]))
                {
                    if(islower(k[j%m]))
                    {
                        s[i] = ((s[i] - 97 + (k[j%m])-97)%26) + 97;
                    }
                    else
                    {
                        s[i] = ((s[i] - 97 + (k[j%m])-65)%26) + 97;
                    }
                    j++;
                }
        }
        s[i] = s[i];
    }
    printf("%s\n",s);
}