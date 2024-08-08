#include <stdio.h>
#include <stdlib.h>

/*Crea una función llamada esPar que reciba un número entero como parámetro y
devuelva 1si el número es par o 0 si es impar. Después, crea un programa que utilice
esta función y muestre los mensajes en consola “El número ingresado es par” o “El
número ingresado es impar” dependiendo del valor retornado por la función.*/

int esPar(int numero);

int main()
{
    int numero, resultado;
    printf("ingrese el numero\n");
    scanf("%d", &numero);
    resultado = esPar(numero);
    if (resultado == 1)
    {
        printf("El numero ingresado es par.\n");
    }
    else
    {
        printf("El numero ingresado es impar.\n");
    }

    return 0;
}

int esPar(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}