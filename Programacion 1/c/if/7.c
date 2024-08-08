#include <stdio.h>

void main()
{
    int valorVenta;
    float descuento;

    printf("ingrese el valor de la cuenta\n");
    scanf("%d", &valorVenta);

    if (valorVenta > 0)
    {
        if (valorVenta > 100000)
        {
            descuento = valorVenta * 0.15;
            printf("el valor de la venta es %f\n", descuento);
        }
        else
        {
            descuento = valorVenta * 0.10;
            printf("el valor de la cuenta es %f\n", descuento);
        }
    }
    else
    {
        printf("no hay nada con ese precio");
    }
}