/**
 * Output initials given a string.
 *
 * Mahesh
 * 
 */


#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = GetString();
    int n = strlen(s);
    printf("%c",toupper(s[0]));
    for (int i=0;i<n;i++)
    {
        if (s[i]==' ')
        
            printf("%c",toupper(s[i+1]));
    }
    printf("\n");
}