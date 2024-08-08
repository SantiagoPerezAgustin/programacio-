#include <stdio.h>

void main()
{
    int nota, dni, intentos, dniIngresado, ingresaCorrectamente;
    dni = 38632584;
    nota = 7;

    dniIngresado = 0;
    intentos = 1;
    ingresaCorrectamente = 0;

    do
    {
        printf("ingrese tu dni, este es el intento numero %d\n", intentos);
        scanf("%d", &dniIngresado);
        if (dniIngresado == dni)
        {
            printf("el dni esta bien ingresado\n");
        }
        else
        {
            printf("el dni esta mal ingresado\n");
            intentos += 1;
        }

        if (intentos == 4)
        {
            printf("te quedaste sin intentos\n");
        }
    } while (dniIngresado != dni && intentos < 4);

    if (dniIngresado == dni)
    {
        printf("tu nota es: %d", nota);
    }
}