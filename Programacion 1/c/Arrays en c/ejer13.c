#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombres[10][30], apellidos[10][20], nombreComplet[5][50];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el nombre %d\n", i + 1);
        scanf(" %s", &nombres[i]);
        printf("Ingrese el apellido %d\n", i + 1);
        scanf(" %s", &apellidos[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        strcpy(nombreComplet[i], nombres[i]);
        strcat(nombreComplet[i], " ");
        strcat(nombreComplet[i], apellidos[i]);
        printf("%s\n", nombreComplet[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}