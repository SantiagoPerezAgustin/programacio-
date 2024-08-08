#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaración de funciones
int buscarNombre(char nombres[5][20], char nombre_a_buscar[20]);
void cargarDatos(char nombres[5][20]);

int main()
{
    char nombres[5][20];
    char nombre_a_buscar[20];
    int posicionNombre;

    // Cargar los nombres en el arreglo
    cargarDatos(nombres);

    // Pedir al usuario que ingrese el nombre a buscar
    printf("Ingrese el nombre a buscar\n");
    scanf("%s", nombre_a_buscar);

    // Buscar el nombre en el arreglo
    posicionNombre = buscarNombre(nombres, nombre_a_buscar);

    // Verificar si el nombre fue encontrado y mostrar el resultado
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

// Función para cargar los datos en el arreglo
void cargarDatos(char nombres[5][20])
{
    strcpy(nombres[0], "Carlos");
    strcpy(nombres[1], "Ana");
    strcpy(nombres[2], "Pedro");
    strcpy(nombres[3], "Luis");
    strcpy(nombres[4], "Maria");
}

// Función para buscar un nombre en el arreglo
int buscarNombre(char nombres[5][20], char nombre_a_buscar[20])
{
    int encontrado = 0;
    int i = 0;
    int posicionNombreEncontrado = -1;

    // Búsqueda del nombre en el arreglo
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