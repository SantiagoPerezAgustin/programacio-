#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array.*/

void main()
{
    int arreglo1[5];
    int arreglo2[5];
    int conbinacionArreglo[10];

    printf("Ingrese 5 numeros para el primer array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("numero %d\n", i + 1);
        scanf("%d", &arreglo1[i]);
    }
    printf("ingrese 5 numeros para el primer array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("numero %d\n", i + 1);
        scanf("%d", &arreglo2[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        conbinacionArreglo[i] = arreglo1[i]; 
    }

    for(int i = 0; i < 5; i++)
    {
        conbinacionArreglo[i + 5] = arreglo2[i];
    }

    printf("Los 10 numeros combinados son:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", conbinacionArreglo[i]);
    }

}