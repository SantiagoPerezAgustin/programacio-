#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int suma(int n, int n2);

int main()
{
    int resultado, numero1, numero2;

    printf("ingrese el numero 1\n");
    scanf("%d", &numero1);
    printf("ingrese numero 2\n");
    scanf("%d", &numero2);

    resultado = suma(numero1, numero2);

    printf("el resultado de esa operacion es de %d\n", resultado);
}

int suma(int n, int n2){
    int suma;

    suma = n + n2;
    return suma;
}