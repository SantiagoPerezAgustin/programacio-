#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define cant_campos 4
#define MAX_STRIGS 50

void cargaDatos(char prod[4][cant_campos][MAX_STRIGS]);

void ingresarCantVnedida(char prod[4][cant_campos][MAX_STRIGS]);

void calcularMonto(char prod[4][cant_campos][MAX_STRIGS]);

void ordenamiento(char prod[4][cant_campos][MAX_STRIGS]);

void ordenamientoprecio(char prod[4][cant_campos][MAX_STRIGS]);

int main()
{
    char productos[4][cant_campos][MAX_STRIGS];

    //cargamos los datos
    cargaDatos(productos);

    //ingresamos la cantidad vendida
    ingresarCantVnedida(productos);

    //hacemos calculos y mostramos
    calcularMonto(productos);

    //ordenamiento
    ordenamiento(productos);

    //ordenamiento de los precios
    ordenamientoprecio(productos);

    return 0;
}


void cargaDatos(char prod[4][cant_campos][MAX_STRIGS])
{
    strcpy(prod[0][0], "01");
    strcpy(prod[0][1], "3500.00");
    strcpy(prod[0][2], "Mantel 2x2");

    strcpy(prod[1][0], "02");
    strcpy(prod[1][1], "800.99 ");
    strcpy(prod[1][2], "Plato playo 24cm");
    
    strcpy(prod[2][0], "03");
    strcpy(prod[2][1], "1450.50");
    strcpy(prod[2][2], "Copa vino");

    strcpy(prod[3][0], "04");
    strcpy(prod[3][1], "650.50");
    strcpy(prod[3][2], "Plato hondo 22cm");
}


void ingresarCantVnedida(char prod[4][cant_campos][MAX_STRIGS])
{
    for(int i = 0; i < 4; i++)
    {
        printf("ingrese la cantidad vendida del producto %d\n", i + 1);
        fgets(prod[i][3], sizeof(prod[i][3]), stdin);
        prod[i][3][strcspn(prod[i][3], "\n")] = '\0';
    }
}

void calcularMonto(char prod[4][cant_campos][MAX_STRIGS])
{
    float montoNeto = 0, monto_Con_IVA = 0;
    const float IVA = 1.21;

    printf("calculamos montos\n");
    for(int i = 0; i < 4; i++)
    {
        montoNeto += atof(prod[i][1]) * atof(prod[i][3]);
    }

    printf("el monto total vendido sin IVA es de %0.1f\n", montoNeto);

    monto_Con_IVA = montoNeto * IVA;

    printf("el monto final con IVA incluido es de %0.1f\n", monto_Con_IVA);
}

void ordenamiento(char prod[4][cant_campos][MAX_STRIGS])
{
    int pos_mayor;
    char aux[MAX_STRIGS];
    for(int i = 0; i < 4 - 1;i++)
    {
        pos_mayor = i;
        for(int j = i + 1;j < 4; j++)
        {
            if(atoi(prod[pos_mayor][3]) < atoi(prod[j][3]))
            {
                pos_mayor = j;
            }
        }
        for(int j = 0; j < cant_campos; j++)
        {
            strcpy(aux, prod[pos_mayor][j]);
            strcpy(prod[pos_mayor][j], prod[i][j]);
            strcpy(prod[i][j], aux);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        printf("%s\n", prod[i][3]);
    }
}

void ordenamientoprecio(char prod[4][cant_campos][MAX_STRIGS])
{
    int pos_menor;
    char aux[MAX_STRIGS];
    for(int i = 0; i < 4 - 1;i++)
    {
        pos_menor = i;
        for(int j = i + 1; j < 4; j++)
        {
            if(atoi(prod[j][1]) < atoi(prod[pos_menor][1]))
            {
                pos_menor = j;
            }
        }
        for(int j = 0; j < cant_campos; j++)
        {
            strcpy(aux, prod[pos_menor][j]);
            strcpy(prod[pos_menor][j], prod[i][j]);
            strcpy(prod[i][j], aux);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        printf("\ncodigo: %s\nproducto: %s\nprecio: %s\n",prod[i][0], prod[i][2], prod[i][1]);
    }
}