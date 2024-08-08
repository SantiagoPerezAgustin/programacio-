#include <stdio.h>
#include <stdlib.h>

int calculaSueldo(int cantHoras, int valorHora);

int main()
{
    int cantidadHoras, valorHora, sueldo = 0;

    printf("ingrese las horas trabajadas\n");
    scanf("%d", &cantidadHoras);

    printf("ingrese lo que vale la hora\n");
    scanf("%d", &valorHora);

    sueldo = calculaSueldo(cantidadHoras, valorHora);

    printf("el sueldo es de %d\n", sueldo);
}

int calculaSueldo(int cantHoras, int valorHora)
{
    int sueldo = 0;
    if(cantHoras > 50)
    {
        sueldo = cantHoras * valorHora;
        sueldo *= 2;
    }else{
        sueldo = cantHoras * valorHora;
    }
    return sueldo;
}