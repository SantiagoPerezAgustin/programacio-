#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargaDatos(char nombre[], char apellido[], int *edad);
void subProceso(char nombre[], char apellido[], int edad);

int main()
{
    char nombre[50];
    char apellido[50];
    int edad;

    cargaDatos(nombre, apellido, &edad);
    subProceso(nombre, apellido, edad);
}

void cargaDatos(char nombre[], char apellido[], int *edad){
    printf("ingrese el nombre\n");
    scanf(" %s", nombre);
    printf("ingrese el apellido\n");
    scanf(" %s", apellido);
    printf("ingrese la edad\n");
    scanf("%d", edad);
}

void subProceso(char nombre[], char apellido[], int edad){
    printf("nombre: %s\napellido: %s\nedad: %d\n", nombre, apellido, edad);
}