#include <stdio.h>

void main()
{
    int alumno, nota1, i, x, promedio, promedioGeneral, final;
    promedio = 0;
    promedioGeneral = 0;
    final = 0;
    alumno = 0;

    for ( i = 1; i <= 5; i ++)
    { 
        for (x = 1; x <= 3; x++)
        {
            printf("ingrese las nota del alumno %d del parcial %d\n", i, x);
            scanf("%d", &nota1);
            promedio += nota1;
        }
        alumno = promedio/3;
        printf("el promedio del alumno numero %d, es de %d.\n", i, alumno);
        promedioGeneral = alumno + promedioGeneral;
        promedio = 0;
    } 
    final = promedioGeneral/5;

    printf("el promedio general de las notas es %d\n", final);

}
