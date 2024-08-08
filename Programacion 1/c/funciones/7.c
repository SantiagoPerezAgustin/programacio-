#include <stdio.h>
#include <stdlib.h>

/*Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
número primo o 0 en caso contrario.*/

int esPrimo(int numero);

int main()
{
    int numero;

    printf("ingrese un numero\n");
    scanf("%d", &numero);

    if(esPrimo(numero)){
        printf("el numero %d es primo\n", numero);
    }else{
        printf("el numero %d no es primo\n", numero);
    }


}

int esPrimo(int numero)
{
    if (numero <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return 0; // Si es divisible por algún número diferente de 1 y de sí mismo, no es primo
        }
    }

    return 1; // Si no es divisible por ningún número, es primo
}