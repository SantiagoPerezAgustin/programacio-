#include <stdio.h>

void main()
{
    int sueldo = 10000;
    int retiro;
    int actual;

    printf("ingrese la cantidad de dinero que quiere retirar\n");
    scanf("%d", &retiro);

    if (sueldo >= retiro)
    {
        actual = sueldo - retiro;
        printf("lo que queda es %d\n", actual);
    }
    else
    {
        printf("no contamos con ese dinero");
    }
}