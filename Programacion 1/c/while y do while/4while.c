#include <stdio.h>

void main()
{
    int cantAlumnos, cantParciales, alumno, paracial;
    float nota, promedioCurso, promedioAlumno;

    promedioCurso = 0;

    printf("ingrese la cantidad de alumnos\n");
    scanf("%d", &cantAlumnos);

    printf("ingrese la cantidad de parciales\n");
    scanf("%d", &cantParciales);

    for (alumno = 1; alumno <= cantAlumnos; alumno++)
    {
        promedioAlumno = promedioAlumno + 1;
        for (paracial = 1; paracial <= cantParciales; paracial++)
        {
            do
            {
                printf("la nota de alumno %d del parcial %d es:\n", alumno, paracial);
                scanf("%d", &nota);
                if (0 <= nota && nota >= 10)
                {
                    printf("la nota es valida\n");
                }
                else
                {
                    printf("la nota es invalida\n");
                }
            } while (0 > nota || nota < 10);
        }
        promedioAlumno = promedioAlumno / cantParciales;
        printf("el promedio del %d es %.2f\n", alumno, promedioAlumno);
    }
    promedioCurso /= cantAlumnos;
    printf("el promedio general es: %.2f\n", promedioCurso);
}