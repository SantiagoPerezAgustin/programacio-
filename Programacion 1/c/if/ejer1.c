#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero1, numero2;
    printf("ingrese los valores de los numeros\n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1>numero2)
    {
        printf("el numero 1 es el mayor\n");
    } else {
        printf("el numero mayor es el numero 2\n");
    }
    system("pause");
}