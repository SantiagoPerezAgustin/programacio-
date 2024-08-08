#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array.*/

void main()
{
    int arreglo1[5], arreglo2[5];

    for(int i = 0; i < 5;i++)
    {
        printf("el valor del numero %d\n", i+1);
        scanf("%d", &arreglo1[i]);
    }

    for (int i = 0; i < 5; i++) {
        arreglo2[i] = arreglo1[i] * 2;
    }

    printf("Los resultados en el segundo array son:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arreglo2[i]);
    }


}