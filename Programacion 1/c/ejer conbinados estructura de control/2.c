#include <stdio.h>

void main()
{
    int cantAlumnos;
    float notaParcial, PromedioParcial, sumaNotas, i;

    cantAlumnos = 20;
    sumaNotas = 0;

    for(i = 1; i <= cantAlumnos; i++)
    {
        printf("igrese la nota del parcial %d : \n", i);
        scanf("%d", &notaParcial);
        sumaNotas += notaParcial;
    }
    PromedioParcial = sumaNotas/cantAlumnos;
    printf("el promedio de lo %d alumnos es: %0.0f\n", cantAlumnos, PromedioParcial);
}