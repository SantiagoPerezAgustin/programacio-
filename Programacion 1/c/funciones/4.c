#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Crear una función que calcule el cubo de un número real (float). El resultado deberá
ser otro número real. */

float cubo(float numero);

int main()
{
    float numero, resultado;
    printf("ingrese un numero\n");
    scanf("%f", &numero);

    resultado = cubo(numero);
    printf("el cubo del numero %0.2f es de: %0.2f\n", numero, resultado);
}

float cubo(float numero){
    return pow(numero, 3);
}