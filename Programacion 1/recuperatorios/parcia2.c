#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    
    int edadPersona, importeTotal = 0, calculo = 0, opcion;
    char A, B, ingresar;
    A = 'A';
    B = 'B';
    do
    {
        printf("ingrese entre las dos plizsa q tenmos diponibles, A es para Cobertura Amplia y B para cobertura de daños a terceros(debe ser en mayuscula)\n");
        scanf(" %c", &ingresar);
        while (ingresar != A && ingresar != B)
        {
            printf("INGRESASTE MAL, asegurese de q sea mayuscula o una de las opciones\n");
            scanf(" %c", &ingresar);
        }
        if (ingresar == A)
        {
            printf("su plan es el A\n");
            importeTotal = 1200;
        }
        else
        {
            printf("su plan es el B\n");
            importeTotal = 950;
        }

        printf("ingrese la edad de la persona, tenga en cunenta que tiene que ser mayor de 19 y menor de 81\n");
        scanf("%d", &edadPersona);
        while (edadPersona < 19 || edadPersona > 81)
        {
            printf("ingresaste mal la edad, tenga en cunenta que tiene que ser mayor de 19 y menor de 81\n");
            scanf("%d", &edadPersona);
        }

        if (edadPersona > 40)
        {
            printf("tenes un 20 porciento de recargo\n");
            calculo = importeTotal * 0.20;
            importeTotal = importeTotal + calculo;
        }
        else
        {
            calculo = importeTotal * 0.10;
            importeTotal = importeTotal + calculo;
        }
        printf("el valor final es de %d\n", importeTotal);
        printf("ingrese 1 si quiere que dejar de cotizar polizas, 2 si quiere seguir\n");
        scanf("%d", &opcion);
    }while(opcion != 1);
    
}