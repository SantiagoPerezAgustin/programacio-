#include <stdio.h>

void main()
{
    int nota, suma, contador;
    float promedio;
    char continuar;
    suma = 0;
    contador = 0;
    continuar = 's';

    do
    {
        printf("ingresar las notas\n");
        scanf("%d", &nota);
        suma += nota;
        contador += contador;
        printf("ingrese n si quire continuar con las nota o coloque s si quiere terminar\n");
        scanf(" %c", &continuar);
    } while (continuar != 's');
    printf("la suma de las notas es %d\n", suma);
    promedio = (float)suma / contador;
    printf("El promedio de las notas es: %.2f\n", promedio);
}