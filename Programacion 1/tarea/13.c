#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char arroba [] = "@@@@@@@@@@";

    for ( i = 10; i >= 1; i--)
    {
        arroba[i] = '\0';
        printf("%s\n", arroba);
    }
    
}