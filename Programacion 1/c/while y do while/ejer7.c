#include <stdio.h>

void main()
{
    int contador;
    float num;
    contador = 0;

    do
    {
        printf("ingrese numero distintos a 0(ingrese 0 si quiere terminar de ingrsar numeros)\n");
        printf("ingrese el numero\n");
        scanf("%f", &num);
        contador = contador + 1;
    } while (num != 0);
    printf("ingrese la cantidad de numero q lo conforma es: %d", contador);
    
}