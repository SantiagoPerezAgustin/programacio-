#include <stdio.h>

void main()
{
    int numero1, numero2, opciones;
    float resultado;

    printf("ingrese dos numero(el numero mas grande adelante)\n");
    scanf("%d %d", &numero1, &numero2);

    printf("1: suma, 2: resta, 3: multiplicacion, 4: division, 5: salir\n");
    scanf("%d", &opciones);

    switch (opciones)
    {
    case 1:
        resultado = numero1 + numero2;
        printf("el resultado es %f\n", resultado);
        break;
    case 2:
        resultado = numero1 - numero2;
        printf("el resultado es %f\n", resultado);
        break;
    case 3:
        resultado = numero1 * numero2;
        printf("el resultado es %f\n", resultado);
        break;
    case 4:
        resultado = numero1 / numero2;
        printf("el resultado es %f\n", resultado);
        break;
    default:
        break;
    }
}