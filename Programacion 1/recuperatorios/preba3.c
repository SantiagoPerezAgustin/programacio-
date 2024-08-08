#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int calcularSueldo(int horasTrabadas, int valorPorHora);

int main()
{
    int horas_trabajo, sueldoTotal = 0, valorHora;

    printf("ingrese las horas trabajadas\n");
    scanf("%d", &horas_trabajo);

    printf("ingrese el valor de la hora\n");
    scanf("%d", &valorHora);

    sueldoTotal = calcularSueldo(horas_trabajo, valorHora);

    printf("el sueldo del empleado es de %d\n", sueldoTotal);
}

int calcularSueldo(int horasTrabadas, int valorPorHora)
{
    int sueldo = 0;

    if(horasTrabadas > 50)
    {
        printf("por trabajar mas de 50 horas su sueldo sera el doble\n");
        sueldo = horasTrabadas * valorPorHora;
        sueldo *= 2;
    }else{
        sueldo = horasTrabadas * valorPorHora;
    }
    return sueldo;
}