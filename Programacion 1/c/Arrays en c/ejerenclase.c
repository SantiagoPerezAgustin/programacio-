#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void main()
{
    int arreglo[MAX];
    int contador5 = 0;
    int i;

    for (i = 0; i < MAX; i++)
    {
        printf("ingrese el numero\n");
        scanf("%d", &arreglo[i]);
        if (arreglo[i] == 5)
        {
            contador5++;
        }
    }
    printf("el 5 aparece %d veces\n", contador5);
    system("pause");
}