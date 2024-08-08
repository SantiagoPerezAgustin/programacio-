#include <stdio.h>

void main()
{
    int numero, i, suma;

    suma = 0;

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("ingrese numeros reales positivos\n");
            scanf("%d", &numero);
            if (numero <= 0)
            {
                printf("el numero esta mal ingresado\n");
            }
            else
            {
                suma = suma + numero;
            }
        } while (numero <= 0);
    }
    printf("la suma de los numero es: %d\n", suma);
}