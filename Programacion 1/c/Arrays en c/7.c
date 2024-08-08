#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio. */


void main()
{
    int cantidad;
    float suma = 0.0, promedio;

    printf("Ingrese la cantidad de notas a cargar:\n");
    scanf("%d", &cantidad);

    float *notas = (float *)malloc(cantidad * sizeof(float));

    for(int i = 0;i < cantidad; i++)
    {
        printf("ingrese la nota: %d\n", i + 1);
        scanf("%f", &notas[i]);
        suma += notas[i];
    }
    promedio = suma/cantidad;

    printf("la suma de las notas es de: %.2f\n", suma);
    printf("el promedio de las notas es: %.2f\n", promedio);
}