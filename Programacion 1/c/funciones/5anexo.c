#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int validarDni(int Dni, bool validacion);

int main()
{
    char nombre[50], apellido[50];
    int dni;
    bool validacion = false;

    printf("ingrese su nombre\n");
    scanf("%s", &nombre);
    printf("ingrese su apellido\n");
    scanf("%s", &apellido);

    dni = validarDni(dni, validacion);

    printf("su nombre es: %s\nsu apellido: %s\nsu dni: %d\n", nombre, apellido, dni);
}

int validarDni(int Dni, bool validacion){
    while(validacion == false){
    printf("ingresa su dni\n");
    scanf("%d", &Dni);

    if(999999 < Dni && Dni < 10000000)
    {
        printf("el dni esta correcto\n");
        validacion = true;
    }else{
        printf("dni ingresado incorrecatmente, vuelva a ingresarlo\n");
        validacion = false;
    }
    }
    return Dni;
}

