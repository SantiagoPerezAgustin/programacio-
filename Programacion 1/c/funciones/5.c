#include <stdio.h>
#include <stdlib.h>

/*Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero. */

float signo(float numero);

int main()
{
    float numero;
    int resultado;

    printf("ingrese un numero real\n");
    scanf("%f", &numero);

    resultado = signo(numero);

    printf("el numero %0.2f es: %d", numero, resultado);
}

float signo(float numero)
{
    if (numero >= 1)
    {
        return 1;
    }
    else if (numero <= -1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}