#include <stdio.h>
#include <string.h>

/*
Dado el vector {10, 20, 5, 15, 30, 20}
a. Informar el vector de la forma: "Índice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen números impares.
e. Informar el mayor número.
f. Informar cuántas veces aparece el número 20.
*/

void main()
{
    int vector[] = {10, 20, 5, 15, 30, 20}, suma = 0, contador = 0;
    int size = sizeof(vector) / sizeof(vector[0]);
    int max = vector[0];
    int repiteumero = 20;
    for (int i = 0; i < 6; i++)
    {
        printf("a. el vector indice: %d, valor:%d\n", i, vector[i]);
        suma += vector[i];
        if (vector[i] > max)
        {
            max = vector[i];
        }
        if (vector[i] == repiteumero)
        {
            contador++;
        }
    }

    for (int i = 1; i < size; i += 2)
    {
        printf("impares: %d\n", vector[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if(vector[i] % 2 != 0)
        {
            printf("posiciones %d contiene el numero impar %d\n", i, vector[i]);
        }
    }

    printf("El mayor numero es: %d\n", max);
    printf("El numero 20 aparece %d veces\n", contador);
}