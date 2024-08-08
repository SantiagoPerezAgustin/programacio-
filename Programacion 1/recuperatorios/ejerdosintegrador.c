#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STRINGS 50
#define MAX_CAMPOS 3

void cargardatos(char pagos[3][MAX_CAMPOS][MAX_STRINGS]);

void ingresarMonto(char pagos[3][MAX_CAMPOS][MAX_STRINGS]);

void calculamos(char pagos[3][MAX_CAMPOS][MAX_STRINGS]);

void ordenar(char pagos[3][MAX_CAMPOS][MAX_STRINGS]);

int main()
{
    int opcion;
    char pagos[3][MAX_CAMPOS][MAX_STRINGS];

    // cargamos los datos
    cargardatos(pagos);

    // ingresamos los montos
    ingresarMonto(pagos);
    printf("ingrese\n1 si quiere calcular\n2 si quiere ordenar de mayor a menor\n");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        // calculamos
        calculamos(pagos);
        break;
    case 2:
        ordenar(pagos);
        break;
    default:
        printf("no elegiste ninguna de la opciones\n");
    }
}

void cargardatos(char pagos[3][MAX_CAMPOS][MAX_STRINGS])
{
    strcpy(pagos[0][0], "Efectivo");
    strcpy(pagos[0][1], "0.15");

    strcpy(pagos[1][0], "Debito ");
    strcpy(pagos[1][1], "0.10");

    strcpy(pagos[2][0], "Credito");
    strcpy(pagos[2][1], "0");
}

void ingresarMonto(char pagos[3][MAX_CAMPOS][MAX_STRINGS])
{
    printf("ingresamos montos\n");
    for (int i = 0; i < 3; i++)
    {
        printf("ingresamos el monto %d\n", i + 1);
        scanf(" %s", &pagos[i][2]);
    }
}

void calculamos(char pagos[3][MAX_CAMPOS][MAX_STRINGS])
{
    float montos;

    for (int i = 0; i < 3; i++)
    {
        montos += atof(pagos[i][1]) * atof(pagos[i][2]);
    }

    printf("el montal de descuento es de %0.2f$\n", montos);
}

void ordenar(char pagos[3][MAX_CAMPOS][MAX_STRINGS])
{
    int pos_mayor;
    char aux[MAX_STRINGS];
    for (int i = 0; i < 3 - 1; i++)
    {
        pos_mayor = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (atoi(pagos[pos_mayor][2]) < atoi(pagos[j][2]))
            {
                pos_mayor = j;
            }
        }

        for (int j = 0; j < 3; j++)
        {
            strcpy(aux, pagos[i][j]);
            strcpy(pagos[i][j], pagos[pos_mayor][j]);
            strcpy(pagos[pos_mayor][j], aux);
        }
    }
    printf("ordenamos los pagos\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%.f\n", atof(pagos[i][2]));
    }
}