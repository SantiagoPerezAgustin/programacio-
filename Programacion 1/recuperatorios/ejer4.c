#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroEmpleados, cantHorasTrabajadas, horasManana = 0, horasTarde = 0, horasdepartamento, turno;
    for(int i = 0; i < 5; i++)
    {
        horasdepartamento = 0;
        printf("ingrese la cantidad de empleados\n");
        scanf("%d", &numeroEmpleados);
        for(int j = 0; j < numeroEmpleados; j++)
        {
            printf("ingrese 1: si trabajas a la manana\ningrese 2: si trabajas a la tarde\n");
            scanf("%d", &turno);
            if (turno == 1)
            {
                printf("ingrese las horas trabajadas\n");
                scanf("%d", &cantHorasTrabajadas);


                horasManana += cantHorasTrabajadas;
                horasdepartamento += cantHorasTrabajadas;
            }else{
                printf("ingrese las horas trabajadas\n");
                scanf("%d", &cantHorasTrabajadas);


                horasTarde += cantHorasTrabajadas;
                horasdepartamento += cantHorasTrabajadas;
            }
            
        }
        printf("la cantadad de horas del departamento %d son de %d\n", i + 1, horasdepartamento);
    }
    printf("la cantidad de horas trabajadas en el turno manana son de %d\nla cantidad de horas trabajadas en el turno tarde son de %d\n", horasManana, horasTarde);
}