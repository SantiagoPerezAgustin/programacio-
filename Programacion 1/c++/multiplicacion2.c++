#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;
    int resultado = 0;

    printf("ingresar el valor del primer numero\n");
    scanf("%d", &numero1);

    printf("ingresar el valor del segundo numero\n");
    scanf("%d", &numero2);

    printf("ingresar el valor del tercer numero\n");
    scanf("%d", &numero3);

    printf("ingresar el valor del cuarto numero\n");
    scanf("%d", &numero4);

    resultado = numero1 * numero2 + numero3 / numero4;

    printf("el valor del primer numeroes %d, el valor del segndo nmero es de %d, el valor del tercer numero es de %d y el valor del cuarto numero es de %d\n", numero1, numero2, numero3, numero4);
    printf("la expresion da como resltado como %d\n", resultado);
    system("pause");
    return 0;
}