#include <stdio.h>
#include <string.h>

void main ()
{
    int i;
    char arroba[20] = "";

    for ( i = 0; i < 10; i++)
    {
        strcat(arroba,"@");
        printf("%s\n", &arroba);
    }
    
}