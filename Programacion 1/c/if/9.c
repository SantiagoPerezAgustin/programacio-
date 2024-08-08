#include <stdio.h>

void main()
{
    int altura;
    printf("ingrese la altura\n");
    scanf("%d", &altura);

    if (altura < 150)
    {
        printf("Persona de altura por debajo de la media");
    }
    else if (151 < altura && altura < 170)
    {
        printf("Persona de altura media");
    }
    else
    {
        printf("Persona de altura por arriba de la media");
    }
}