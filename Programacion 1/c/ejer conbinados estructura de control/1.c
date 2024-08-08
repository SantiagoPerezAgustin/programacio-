#include <stdio.h>

void main()
{
    int edadAlumno, i;
    int cantitad_alumnos_mayores;
    cantitad_alumnos_mayores = 0;
    for(i = 0; i <= 29; i++)
    {
        printf("ingrse la edad del alumno\n");
        scanf("%d", &edadAlumno);
        if(edadAlumno > 21)
        {
            cantitad_alumnos_mayores++;
        }
    }
    printf("la cantidad de alumnos mayores a 21 es de %d\n", cantitad_alumnos_mayores);
}