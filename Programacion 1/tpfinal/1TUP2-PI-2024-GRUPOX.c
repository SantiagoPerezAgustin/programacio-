#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_CAMPOS 7
#define MAX_STRINGS 40

void cargaDatos(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos),
    ordenarPorDescripcion(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos),
    ordenarPorVentas(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos), 
    mostrarStock(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos), 
    mostrarArticuloXCodigo(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], char pedir_codigo[MAX_STRINGS], int cant_articulos), 
    contadorRubros(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos, int *contador100, int *contador300, int *contador450, int *contador680, int *contador720),
    artVendidosXRubro(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos, int *contador100, int *contador300, int *contador450, int *contador680, int *contador720),
    rubroMayorImporte(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos);
bool validarCodigo(char codigo[MAX_STRINGS]);

int main()
{
    int cant_articulos, accion, campos_mostrar[MAX_CAMPOS];
    int contador100 = 0;
    int contador300 = 0;
    int contador450 = 0;
    int contador680 = 0;
    int contador720 = 0;

    printf("Ingrese la cantidad de artiiculos: ");
    scanf("%d", &cant_articulos);
    printf("\n");

    char ferreteria[cant_articulos][MAX_CAMPOS][MAX_STRINGS], pedir_codigo[MAX_STRINGS];

    cargaDatos(ferreteria, cant_articulos);

    do {
        printf("Ingrese una de las siguientes opciones:\n");
        printf("1. Mostrar lista de articulos ordenada por descripcion\n");
        printf("2. Mostrar lista de articulos ordenada por cantidad vendida\n");
        printf("3. Mostrar stock actual de articulos\n");
        printf("4. Buscar articulo por codigo\n");
        printf("5. Mostrar estadisticas\n");
        printf("6. Salir\n\n");
        scanf("%d", &accion);

        switch (accion)
        {
        case 1:
            ordenarPorDescripcion(ferreteria, cant_articulos);
            break;

        case 2:
            ordenarPorVentas(ferreteria, cant_articulos);
            break;

        case 3:
            mostrarStock(ferreteria, cant_articulos);
            break;

        case 4:
            printf("Ingrese el codigo del articulo\n");
            scanf(" %s", &pedir_codigo);
            while (!validarCodigo(pedir_codigo))
            {
                printf("Ha ingresado un codigo invalido. Ingreselo nuevamente:\n");
                scanf(" %s", &pedir_codigo);
            }
            mostrarArticuloXCodigo(ferreteria, pedir_codigo, cant_articulos);
            printf("\n");
            break;

        case 5:
            contadorRubros(ferreteria, cant_articulos, &contador100, &contador300, &contador450, &contador680, &contador720);
            artVendidosXRubro(ferreteria, cant_articulos, &contador100, &contador300, &contador450, &contador680, &contador720);
            rubroMayorImporte(ferreteria, cant_articulos);
            printf("\n");
            break;

        case 6:
            printf("\nEl programa ha finalizado\n");
            break;

        default:
            printf("\nHa ingresado una opcion invalida.\n");
            break;
        }
    } while (accion != 6);

    printf("Gracias por elegirnos.\nAtte. 'EL TORNILLO LOCO'\n");
    printf("\n");
    system("pause");
    return 0;
}

void cargaDatos(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos)
{
    printf("Cargando datos\n");
    for (int i = 0; i < cant_articulos; i++)
    {
        printf("Ingrese el codigo del articulo %d:\n", i + 1);
        scanf(" %s", &ferreteria[i][0]);
        while (!validarCodigo(ferreteria[i][0]))
        {
            printf("Ha ingresado un codigo invalido. Ingreselo nuevamente:\n");
            scanf(" %s", &ferreteria[i][0]);
        }
        getchar();

        printf("Ingrese la descripcion del articulo %d:\n", i + 1);
        fgets(ferreteria[i][1], sizeof(ferreteria[i][1]), stdin);
        ferreteria[i][1][strcspn(ferreteria[i][1], "\n")] = '\0';
        printf("Ingrese el precio de venta del articulo %d:\n", i + 1);
        scanf(" %s", &ferreteria[i][2]);
        printf("Ingrese la cantidad existente del articulo %d:\n", i + 1);
        scanf(" %s", &ferreteria[i][3]);
        printf("Ingrese la cantidad vendidad en la primera quincena del articulo %d:\n", i + 1);
        scanf(" %s", &ferreteria[i][4]);
        printf("Ingrese la cantidad vendidad en la segunda quincena del articulo %d:\n", i + 1);
        scanf(" %s", &ferreteria[i][5]);
        sprintf(ferreteria[i][6], "%d", (atoi(ferreteria[i][4]) + atoi(ferreteria[i][5])));
        // printf("%s", ferreteria[i][6]);
        printf("\n");
    }
    printf("\nSe han cargado todos los articulos\n\n");
}

bool validarCodigo(char codigo[MAX_STRINGS])
{
    // Si el codigo es valido, devuelve true. Si no es valido, false.
    int cant_rubros = 5, rubros[] = {100, 300, 450, 680, 720}, rubro_ingresado; //HACERLO GLOBAL
    for (int i = 0; i < strlen(codigo); i++)
    {
        if (!isdigit(codigo[i]))
        { // Verifica si son todos digitos
            return false;
        }
    }
    rubro_ingresado = atoi(codigo) / 100000;
    for (int i = 0; i < cant_rubros; i++)
    {
        if (rubros[i] == rubro_ingresado)
        {
            return true;
        }
    }
    return false;
}

void contadorRubros(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos, int *contador100, int *contador300, int *contador450, int *contador680, int *contador720){
    int rubro_ingresado, ventas_totales = 0;

    for (int i = 0; i < cant_articulos; i++)
    {
        rubro_ingresado = atoi(ferreteria[i][0]) / 100000;
        switch (rubro_ingresado)
        {
        case 100:
            (*contador100) += atoi(ferreteria[i][6]);
            break;
        case 300:
            (*contador300) += atoi(ferreteria[i][6]);
            break;
        case 450:
            *contador450 += atoi(ferreteria[i][6]);
            break;
        case 680:
            *contador680 += atoi(ferreteria[i][6]);
            break;
        case 720:
            *contador720 += atoi(ferreteria[i][6]);
            break;
        default:
            printf("Error. Rubro inexistente.\n");
            break;
        }
        ventas_totales += atoi(ferreteria[i][6]);
    }

    printf("\n\nA) Porcentajes de ventas por rubro sobre el total de ventas:\n\n");
    printf("Procentaje de ventas rubro 100: %.2f%%\n", ((float)(*contador100) / ventas_totales) * 100);
    printf("Procentaje de ventas rubro 300: %.2f%%\n", ((float)(*contador300) / ventas_totales) * 100);
    printf("Procentaje de ventas rubro 450: %.2f%%\n", ((float)(*contador450) / ventas_totales) * 100);
    printf("Procentaje de ventas rubro 680: %.2f%%\n", ((float)(*contador680) / ventas_totales) * 100);
    printf("Procentaje de ventas rubro 720: %.2f%%\n", ((float)(*contador720) / ventas_totales) * 100);
}

void artVendidosXRubro(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos, int *contador100, int *contador300, int *contador450, int *contador680, int *contador720)
{
    int rubro_ingresado, ventas_totales;
    int contador100_1 = 0;
    int contador300_1 = 0;
    int contador450_1 = 0;
    int contador680_1 = 0;
    int contador720_1 = 0;

    int contador100_2 = 0;
    int contador300_2 = 0;
    int contador450_2 = 0;
    int contador680_2 = 0;
    int contador720_2 = 0;

    for (int i = 0; i < cant_articulos; i++)
    {
        rubro_ingresado = atoi(ferreteria[i][0]) / 100000;
        switch (rubro_ingresado)
        {
        case 100:
            contador100_1 += atoi(ferreteria[i][4]);
            contador100_2 += atoi(ferreteria[i][5]);
            break;
        
        case 300:
            contador300_1 += atoi(ferreteria[i][4]);
            contador300_2 += atoi(ferreteria[i][5]);
            break;

        case 450:
            contador450_1 += atoi(ferreteria[i][4]);
            contador450_2 += atoi(ferreteria[i][5]);            
            break;
            
        case 680:
            contador680_1 += atoi(ferreteria[i][4]);
            contador680_2 += atoi(ferreteria[i][5]);
            break;

        case 720:
            contador720_1 += atoi(ferreteria[i][4]);
            contador720_2 += atoi(ferreteria[i][5]);
            break;
        
        default:
            printf("Error. Rubro inexistente.\n");
            break;
        }
    }
   
    printf("\n\nB) Porcentaje de ventas de cada quincena por Rubro sobre el total del mes: \n\n");

    printf("El porcentaje vendido del rubro 100 en la primera quincena es: %.2f%%\n", (float)contador100_1 / (*contador100) * 100);
    printf("El porcentaje vendido del rubro 300 en la primera quincena es: %.2f%%\n", (float)contador300_1 / (*contador300) * 100);
    printf("El porcentaje vendido del rubro 450 en la primera quincena es: %.2f%%\n", (float)contador450_1 / (*contador450) * 100);
    printf("El porcentaje vendido del rubro 680 en la primera quincena es: %.2f%%\n", (float)contador680_1 / (*contador680) * 100);
    printf("El porcentaje vendido del rubro 720 en la primera quincena es: %.2f%%\n", (float)contador720_1 / (*contador720) * 100);
    printf("--------------------------------------------------------\n");
    printf("El porcentaje vendido del rubro 100 en la segunda quincena es: %.2f%%\n", (float)contador100_2 / (*contador100) * 100);
    printf("El porcentaje vendido del rubro 300 en la segunda quincena es: %.2f%%\n", (float)contador300_2 / (*contador300) * 100);
    printf("El porcentaje vendido del rubro 450 en la segunda quincena es: %.2f%%\n", (float)contador450_2 / (*contador450) * 100);
    printf("El porcentaje vendido del rubro 680 en la segunda quincena es: %.2f%%\n", (float)contador680_2 / (*contador680) * 100);
    printf("El porcentaje vendido del rubro 720 en la segunda quincena es: %.2f%%\n", (float)contador720_2 / (*contador720) * 100);
}

void ordenarPorDescripcion(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos)
{
    int pos_menor;
    char aux[MAX_STRINGS];
    for (int i = 0; i < cant_articulos - 1; i++)
    {
        pos_menor = i;
        for (int j = i + 1; j < cant_articulos; j++)
        {
            if (strcmp(ferreteria[j][1], ferreteria[pos_menor][1]) < 0)
            {
                pos_menor = j;
            }
        }

        for (int j = 0; j < MAX_CAMPOS; j++)
        {
            strcpy(aux, ferreteria[i][j]);
            strcpy(ferreteria[i][j], ferreteria[pos_menor][j]);
            strcpy(ferreteria[pos_menor][j], aux);
        }
    }

    printf("\nMostrando articulos\n\n");
    for (int i = 0; i < cant_articulos; i++)
    {
        printf("Codigo: %s\n", ferreteria[i][0]);
        printf("Descripcion: %s\n", ferreteria[i][1]);
        printf("Precio venta: %s\n", ferreteria[i][2]);
        printf("\n");
    }
}

void ordenarPorVentas(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos)
{
    int pos_mayor;
    char aux[MAX_STRINGS];
    for (int i = 0; i < cant_articulos - 1; i++)
    {
        pos_mayor = i;
        for (int j = i + 1; j < cant_articulos; j++)
        {
            if (atoi(ferreteria[pos_mayor][6]) < atoi(ferreteria[j][6]))
            {
                pos_mayor = j;
            }
        }

        for (int j = 0; j < MAX_CAMPOS; j++)
        {
            strcpy(aux, ferreteria[i][j]);
            strcpy(ferreteria[i][j], ferreteria[pos_mayor][j]);
            strcpy(ferreteria[pos_mayor][j], aux);
        }
    }

    printf("\n\nMostrando artículos\n\n");
    for (int i = 0; i < cant_articulos; i++)
    {
        printf("Codigo: %s\n", ferreteria[i][0]);
        printf("Descripcion: %s\n", ferreteria[i][1]);
        printf("Cantidad vendida en el mes: %s\n", ferreteria[i][6]);
        printf("Monto total de ventas en el mes: %.2f\n", atof(ferreteria[i][6]) * atof(ferreteria[i][2]));
        printf("\n");
    }
}

void mostrarStock(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos)
{
    int stock;

    printf("\n\nMostrando stock actual.\n\n");
    for (int i = 0; i < cant_articulos; i++)
    {
        stock = 0;
        printf("Codigo: %s\n", ferreteria[i][0]);
        printf("Descripcion: %s\n", ferreteria[i][1]);
        stock = atoi(ferreteria[i][3]) - atoi(ferreteria[i][6]);
        printf("Stock actual: %d\n", stock);
        printf("\n");
    }
}

void mostrarArticuloXCodigo(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], char pedir_codigo[MAX_STRINGS], int cant_articulos)
{
    for (int i = 0; i < cant_articulos; i++)
    {
        if(strcmp(ferreteria[i][0], pedir_codigo) == 0){
            printf("\n\nMostrando datos del articulo encontrado.\n\n");
            printf("Cantidad vendidad en la primera quincena del articulo: %s\n", ferreteria[i][4]);
            printf("Cantidad vendidad en la segunda quincena del articulo: %s\n", ferreteria[i][5]);
            printf("Stock actual %d:\n", atoi(ferreteria[i][3]) - atoi(ferreteria[i][6]));
            printf("Monto total de ventas en el mes: %.2f\n", atof(ferreteria[i][6]) * atof(ferreteria[i][2]));
            return;
        } 
    } 
    printf("No se encontro el articulo buscado\n");
}

void rubroMayorImporte(char ferreteria[][MAX_CAMPOS][MAX_STRINGS], int cant_articulos)
{
    float montos_totales[5][2];
    int rubro_mayor_1 = 0, rubro_mayor_2 = 0;
    int rubros[] = {100, 300, 450, 680, 720};

    for (int i = 0; i < cant_articulos; i++)
    {
        switch (atoi(ferreteria[i][0])/100000) {
            case 100:
                montos_totales[0][0] += atof(ferreteria[i][2])*atoi(ferreteria[i][4]);
                montos_totales[0][1] += atof(ferreteria[i][2])*atoi(ferreteria[i][5]);
                break;
            case 300:
                montos_totales[1][0] += atof(ferreteria[i][2])*atoi(ferreteria[i][4]);
                montos_totales[1][1] += atof(ferreteria[i][2])*atoi(ferreteria[i][5]);
                break;
            case 450:
                montos_totales[2][0] += atof(ferreteria[i][2])*atoi(ferreteria[i][4]);
                montos_totales[2][1] += atof(ferreteria[i][2])*atoi(ferreteria[i][5]);
                break;
            case 680:
                montos_totales[3][0] += atof(ferreteria[i][2])*atoi(ferreteria[i][4]);
                montos_totales[3][1] += atof(ferreteria[i][2])*atoi(ferreteria[i][5]);
                break;
            case 720:
                montos_totales[4][0] += atof(ferreteria[i][2])*atoi(ferreteria[i][4]);
                montos_totales[4][1] += atof(ferreteria[i][2])*atoi(ferreteria[i][5]);
                break;
        }
    }
    printf("\n\nC) Rubro con mayor importe total de ventas en cada quincena:\n\n");

    for (int i = 0; i < 5; i++) {
        if (montos_totales[rubro_mayor_1][0]<montos_totales[i][0]) {
            rubro_mayor_1 = i;
        }
        if (montos_totales[rubro_mayor_2][1]<montos_totales[i][1]) {
            rubro_mayor_2 = i;
        }
    }

    printf("El rubro con el importe mayor de la primera quincena es: %d\n", rubros[rubro_mayor_1]);
    printf("El rubro con el importe mayor de la segunda quincena es: %d\n", rubros[rubro_mayor_2]);

}