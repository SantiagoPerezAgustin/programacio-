#include <stdio.h>
#include <string.h>

void main()
{
    int elementos[5];

    for(int i = 0; i < 5; i++)
    {
        printf("igrese el n\n");
        scanf("%d", &elementos[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("indice:%d, valor:%d\n", i, elementos[i]);
    }
}