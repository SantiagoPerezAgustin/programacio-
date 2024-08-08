#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int arreglo[5];
    int suma = 0, contador = 0;
    float promedio = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("ingrese el valor del numero %d\n", i+1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
        contador += 1;
    }
    promedio = suma/contador;
    
    printf("el valor de la suma es %d\n", suma);
    printf("el promediop es %0.1f\n", promedio);
}