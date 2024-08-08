#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 50

int main()
{
    int total_alumnos_comision, accion, cant_nota_alumnos = 0, i = 0;
    float notas1[MAX], notas2[MAX], notas3[MAX], suma = 0, prom;
    bool reiterar = true;

    printf("INGRESE LA CANTIDAD DE ALUMNOS POR COMISION\n");
    scanf("%d", &total_alumnos_comision);

    while (reiterar)
    {
        printf("\nSeleccione una de las siguientes opciones:\n\t1. Cargar notas alumnos por comisión\n\t2. Promedio por Comisión\n\t3. Promedio de la materia\n\t4. Cantidad de aplazos en la materia\n\t5. Cantidad de regularizados en la materia\n\t6. Cantidad de aprobados en la materia\n\t7. Salir\n");
        scanf("%d", &accion);

        switch (accion)
        {
        case 1:

            printf("notas de la comision 1\n");
            for (i = 0; i < total_alumnos_comision; i++);
            {
                printf("ingrese las nota %d\n", (i++));
                scanf("%f", &notas1[i]);
                while (notas1[i] < 0 || notas1[i] > 10)
                {
                    printf("Ha ingresado una nota errónea. Ingrese la nota del alumno %d nuevamente: ", (i++));
                    scanf("%f", &notas1[i]);
                }
            }

            printf("notas de la comision 2\n");
            for (i = 0; i < total_alumnos_comision; i++)
            {
                printf("ingrese las notas %d\n", (i++));
                scanf("%f", &notas2);
                while (notas2[i] < 0 || notas2[i] > 10)
                {
                    printf("ha ingresado mal la nota del alumno %d, vuelva a ingresarlo\n", i++);
                    scanf("%f", &notas2);
                }
            }
            printf("ingrese las notas de la comision 3\n");
            for (i = 0; i < total_alumnos_comision; i++)
            {
                printf("ingrese las notas %d\n", i++);
                scanf("%f", &notas3);
                while (notas3[i] < 0 || notas3[i] > 10)
                {
                    printf("ha ingresado mal la nota del alumno %d, vuelva a ingresarla\n", i++);
                    scanf("%f", &notas3);
                }
            }
            break;

        case 2:
            for (i = 0; i < total_alumnos_comision; i++)
            {
                suma = suma + notas1[i];
            }
            prom = suma / total_alumnos_comision;
            printf("\nEl promedio de la comisión 1 es: %0.2f\n", prom);
            suma = 0;
            for (i = 0; i < total_alumnos_comision; i++)
            {
                suma = suma + notas2[i];
            }
            prom = suma / total_alumnos_comision;
            printf("\nEl promedio de la comisión 2 es: %0.2f\n", prom);
            suma = 0;
            for (i = 0; i < total_alumnos_comision; i++)
            {
                suma = suma + notas3[i];
            }
            prom = suma / total_alumnos_comision;
            printf("\nEl promedio de la comisión 3 es: %0.2f\n", prom);
            suma = 0;

            break;

        case 3:
            suma = notas1[i] + notas2[i] + notas3[i];
            prom = suma / (total_alumnos_comision * 3);
            printf("el promedio de la materia es %0.2f\n", prom);
            suma = 0;

            break;

        case 4:
            for (i = 0; i < total_alumnos_comision; i++)
            {
                if (notas1[i] < 4)
                {
                    cant_nota_alumnos++;
                }
                if (notas2[i] < 4)
                {
                    cant_nota_alumnos++;
                }
                if (notas3[i] < 4)
                {
                    cant_nota_alumnos++;
                }
                printf("la cantidad de personas q aplazaron la materia fueron de %d\n", cant_nota_alumnos);
                cant_nota_alumnos = 0;
                
            }
            break;
        case 5:
            for (i = 0; i < total_alumnos_comision; i++)
            {
                if (notas1[i] >= 4 && notas1[i] < 6)
                {
                    cant_nota_alumnos++;
                }
                if (notas2[i] >= 4 && notas2[i] < 6)
                {
                    cant_nota_alumnos++;
                }
                if (notas3[i] >= 4 && notas3[i] < 6)
                {
                    cant_nota_alumnos++;
                }
                printf("la cantidad de personas q regularizaron son %d\n", cant_nota_alumnos);
                cant_nota_alumnos = 0;
                
            }
            break;
        case 6:
            for (i = 0; i < total_alumnos_comision; i++)
            {
                if (notas1[i] >= 6)
                {
                    cant_nota_alumnos++;
                }
                if (notas2[i] >= 6)
                {
                    cant_nota_alumnos++;
                }
                if (notas3[i] >= 6)
                {
                    cant_nota_alumnos++;
                }
                printf("los aprobados son %d", cant_nota_alumnos);
                cant_nota_alumnos = 0;
            }
            break;
        case 7:
            reiterar = false;
            break;

        default:
            printf("no seleccionaste ningina de las opciones, vuelva a seleccionar\n");
            break;
        }
    }
}