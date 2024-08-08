#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscarNombre(char nombres[5][20], char nombre_a_buscar[20]);
void cargarDatos(char nombres[5][20]);

int main()
{
    char nombres[5][20];
    char nombre_a_buscar[20];
    int posicionNombre;
    cargarDatos(nombres);

    printf("Ingrese el nombre a buscar\n");
    scanf("%s", nombre_a_buscar);

    posicionNombre = buscarNombre(nombres, nombre_a_buscar);
    if (posicionNombre == -1)
    {
        printf("El nombre no se encuentra en el arreglo\n");
    }
    else
    {
        printf("El nombre que buscaste y encontraste es %s\n", nombres[posicionNombre]);
    }
    return 0;
}

void cargarDatos(char nombres[5][20])
{
    strcpy(nombres[0], "Carlos");
    strcpy(nombres[1], "Ana");
    strcpy(nombres[2], "Pedro");
    strcpy(nombres[3], "Luis");
    strcpy(nombres[4], "Maria");
}

int buscarNombre(char nombres[5][20], char nombre_a_buscar[20])
{
    int encontrado = 0;
    int i = 0;
    int posicionNombreEncontrado = -1;

    while (encontrado == 0 && i < 5)
    {
        if (strcmp(nombres[i], nombre_a_buscar) == 0)
        {
            encontrado = 1;
            posicionNombreEncontrado = i;
        }
        else
        {
            i = i + 1;
        }
    }
    return posicionNombreEncontrado;
}