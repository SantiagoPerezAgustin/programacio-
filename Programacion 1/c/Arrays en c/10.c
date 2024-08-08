#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal.*/

void main()
{
    int n;

    printf("ingrese la cantidad de la matiz\n");
    scanf("%d", &n);

    int matriz[n][n];
    int suma = 0;

    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("La matriz ingresada es:\n");
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
             if (i != j) {
                suma += matriz[i][j];
            }
        }
    printf("\n");
    }
    printf("La suma de los elementos que no están en la diagonal principal es: %d\n", suma);
}