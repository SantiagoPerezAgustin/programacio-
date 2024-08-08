#include <stdio.h>

void main()
{
    int i, n1;

    printf("ingresar un numero para ver su multiplicacion\n");
    scanf("%d", &n1);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n1, i, n1 * i);
    }
}