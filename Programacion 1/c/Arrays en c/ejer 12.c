#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena1[20];
    char cadena2[20];

    printf("ingrese de el arreglo 1\n");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';
    printf("ingrese la cadena de arreglo 2\n");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\n';

    if (strcmp(cadena1, cadena2) > 0)
    {
        printf("cadena 1 es mas grande\n");
    }
    else if (strcmp(cadena1, cadena2) < 0)
    {
        printf("cadena dos es mas grande\n");
    }
    else
    {
        printf("las cadenas son iguales\n");
    }
}