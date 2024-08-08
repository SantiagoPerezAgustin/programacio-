#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    float matriz[4][3];
    float suma = 0.0;

    printf("ingrese los valores de 4x3: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("elemento [%d][%d]: \n", i+1, j+1);
            scanf("%f", &matriz[i][j]);
            suma += matriz[i][j];
        }
    }
    printf("la suma de todos los numeros de la matriz es: %0.2f\n", suma);
}