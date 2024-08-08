#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;

    printf("ingrese un numero entero: ");
    scanf("%d", &n);

    for(int i = n; i >= 0; i -= 2)
    {
        printf("%d\n", i * 2);
    }
}