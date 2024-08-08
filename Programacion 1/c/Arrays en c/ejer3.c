//Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola, mostrar cuántas veces se repite el número 5.

#include <stdio.h>
#include <string.h>

void main()
{
    int elemento[5];

    for(int i = 0; i < 5; i++)
    {
        printf("ingrese el numero %d\n", i+1);
        scanf("%d", &elemento[i]);
    }

    int contador = 0;
    for(int i = 0; i < 5; i++)
    {
        if (elemento[i] == 5)
        {
            contador++;
        }
        
    }

    printf("el numero 5 se repite %d\n", contador);
}
