#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int promedioNotas(int notas[],int cantAlumnos);
int mayor(int notas[],int cantAlumnos);
int menor(int notas[],int cantAlumnos);

void main()
{
    int cant_Alumnos = 10, notas[cant_Alumnos], max = 0, min = 0; 
    float promedio_resultado;


    printf("ingrese las notas de los alumnos\n");
    for(int i = 0; i<cant_Alumnos;i++)
    {
        printf("alumno %d\n", i+1);
        scanf("%d", &notas[i]);
    } 
    promedio_resultado = promedioNotas(notas, cant_Alumnos);
    max = mayor(notas, cant_Alumnos);
    min = menor(notas, cant_Alumnos);

    printf("el promedio de las notas es %0.2f\nel numero mayor es %d\nel numero minimo %d\n", promedio_resultado, max, min);
}

int promedioNotas(int notas[],int cantAlumnos){
    float promedio, suma = 0;
    for(int i = 0;i<cantAlumnos;i++){
        suma = suma + notas[i];
    }
    promedio = suma / cantAlumnos;
    return promedio;
}

int mayor(int notas[], int cantAlumnos){
    int max;
    max = notas[0];

    for(int i = 0; i<cantAlumnos;i++)
    {
        if(notas[i]>max)
        {
            max = notas[i];
        }
    }
    return max;
}

int menor(int notas[],int cantAlumnos){
    int min;
    min = notas[0];

    for(int i = 0; i<cantAlumnos; i++)
    {
        if(notas[i]<min)
        {
            min = notas[i];
        }
    }
    return min;
}