#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define max 50
int main()
{
    int cant_alumnos_comision, accion, cant_alumnos_clasificacion, opcion;
    float prom, suma = 0, notas1[max], notas2[max], notas3[max];
    bool reiterar = true;

    printf("ingrse la cantidad de personas por comision\n");
    scanf("%d", &cant_alumnos_comision);
    while (reiterar)
    {
        printf("Seleccione una de las siguientes opciones:\n1. Cargar notas alumnos por comisión\n2. Promedio por Comisión\n3. Promedio de la materia\n4. Cantidad de aplazos en la materia\n5. Cantidad de regularizados en la materia\n6. Cantidad de aprobados en la materia\n7. Salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("ingrese los valores de la primera comision\n");
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                printf("alumno %d\n", i + 1);
                scanf("%f", &notas1[i]);
                while (notas1[i] < 0 || notas1[i] > 10)
                {
                    printf("has ingresado mal la nota vuelva a ingresarla\n");
                    scanf("%f", &notas1);
                }
            }
            printf("ingrese los valores de la segunda comision\n");
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                printf("alumno %d\n", i + 1);
                scanf("%f", &notas2[i]);
                while (notas2[i] < 0 || notas2[i] > 10)
                {
                    printf("has ingresado mal la nota vuelva a ingresarla\n");
                    scanf("%f", &notas2);
                }
            }
            printf("ingrese los valores de la tercera comision\n");
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                printf("alumno %d\n", i + 1);
                scanf("%f", &notas3[i]);
                while (notas3[i] < 0 || notas3[i] > 10)
                {
                    printf("has ingresado mal la nota vuelva a ingresarla\n");
                    scanf("%f", &notas3);
                }
            }
            break;
        case 2:
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                suma = suma + notas1[i];
            }
            prom = suma / cant_alumnos_comision;
            printf("el promedio de la comision 1 es %0.2f\n", prom);
            suma = 0;
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                suma = suma + notas2[i];
            }
            prom = suma / cant_alumnos_comision;
            printf("el promedio de la comision 2 es %0.2f\n", prom);
            suma = 0;
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                suma = suma + notas3[i];
            }
            prom = suma / cant_alumnos_comision;
            printf("el promedio de la comision 3 es %0.2f\n", prom);
            suma = 0;
            break;
        case 3:
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                suma = notas1[i] + notas2[i] + notas3[i];
            }
            prom = suma / (cant_alumnos_comision * 3);
            printf("el promedio de la materia es de %0.2f\n", prom);
            suma = 0;
            break;
        case 4:
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                if (notas1[i] < 4)
                {
                    cant_alumnos_clasificacion++;
                }
                if (notas2[i] < 4)
                {
                    cant_alumnos_clasificacion++;
                }
                if (notas3[i] < 4)
                {
                    cant_alumnos_clasificacion++;
                }
            }
            printf("la cantiadd de persona que aplazaron fueron de %d\n", cant_alumnos_clasificacion);
            cant_alumnos_clasificacion = 0;
            break;
        case 5:
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                if (notas1[i] >= 4 && notas1[i] < 6)
                {
                    cant_alumnos_clasificacion++;
                }
                if (notas2[i] >= 4 && notas2[i] < 6)
                {
                    cant_alumnos_clasificacion++;
                }
                if (notas3[i] >= 4 && notas3[i] < 6)
                {
                    cant_alumnos_clasificacion++;
                }
            }
            printf("los alumnos que regularizaron son %d\n", cant_alumnos_clasificacion);
            cant_alumnos_clasificacion = 0;
            break;
        case 6:
            for (int i = 0; i < cant_alumnos_comision; i++)
            {
                if (notas1[i] >= 6)
                {
                    cant_alumnos_clasificacion++;
                }
                if (notas2[i] >= 6)
                {
                    cant_alumnos_clasificacion++;
                }
                if (notas3[i] >= 6)
                {
                    cant_alumnos_clasificacion++;
                }
            }
            printf("las persona q aprobaron son %d\n", cant_alumnos_clasificacion);
            cant_alumnos_clasificacion = 0;
            break;
        case 7:
            reiterar = false;
        default:
            printf("no seleccionaste ninguna de las opciones\n");
            break;
        }
    }
}
