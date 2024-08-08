#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CANTIDAD 8
#define MAX_STRINGS 50
#define MAX_CAMPOS 5
void cargarDatos(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS]),
    busquedaPorDni(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS]),
    ordenamientoPorapellido(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS]),
    ordenamientNombre(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS]);

int main()
{
    char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS];
    int opcion;
    bool valido = false;
    do
    {
    cargarDatos(personas);
    printf("ingrese las siguientes opciones\n");
    printf("1: Buscar por dni\n");
    printf("2: Ordenar por apellido\n");
    printf("3: Ordenar por apellido y Nombre\n");
    printf("4: Busqueda por apellido y Nombre\n");
    printf("5: hola\n");
    printf("6: Salir\n");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
        busquedaPorDni(personas);
        break;
    case 2:
        ordenamientoPorapellido(personas);
        break;
    case 3:
        ordenamientNombre(personas);
        break;
    case 6:
        printf("nos vemos pronto\n");
        valido = true;
        break;
    default:
        printf("no elegiste ninguna de las opciones. vuelva a ingresarla\n");
        break;
    }
    }while(!valido);
}

void cargarDatos(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS]){
    strcpy(personas[0][0], "ana");
    strcpy(personas[0][1], "martinez");
    strcpy(personas[0][2], "17123456");
    strcpy(personas[0][3], "541141200011");
    strcpy(personas[0][4], "56");

    strcpy(personas[1][0], "camila");
    strcpy(personas[1][1], "noe");
    strcpy(personas[1][2], "25789101");
    strcpy(personas[1][3], "543419485831");
    strcpy(personas[1][4], "45");

    strcpy(personas[2][0], "bruno");
    strcpy(personas[2][1], "noe");
    strcpy(personas[2][2], "39121314");
    strcpy(personas[2][3], "541145565789");
    strcpy(personas[2][4], "26");

    strcpy(personas[3][0], "dardo");
    strcpy(personas[3][1], "pistilli");
    strcpy(personas[3][2], "21151617");
    strcpy(personas[3][3], "541158637543");
    strcpy(personas[3][4], "48");

    strcpy(personas[4][0], "ernestina");
    strcpy(personas[4][1], "quesada");
    strcpy(personas[4][2], "33181920");
    strcpy(personas[4][3], "541161294758");
    strcpy(personas[4][4], "35");

    strcpy(personas[5][0], "fausto");
    strcpy(personas[5][1], "ramirez");
    strcpy(personas[5][2], "15212223");
    strcpy(personas[5][3], "543423444567");
    strcpy(personas[5][4], "60");

    strcpy(personas[6][0], "jasmin");
    strcpy(personas[6][1], "sosa");
    strcpy(personas[6][2], "40242526");
    strcpy(personas[6][3], "543402512345");
    strcpy(personas[6][4], "25");

    strcpy(personas[7][0], "leonardo");
    strcpy(personas[7][1], "tolosa");
    strcpy(personas[7][2], "11272829");
    strcpy(personas[7][3], "541151234567");
    strcpy(personas[7][4], "70");
}

void busquedaPorDni(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS])
{
    int dni_buscado;
    int dni_encontrado;

    printf("ingrese su dni para q lo podamos buscar\n");
    scanf("%d", &dni_buscado);
    printf("\n");

    for(int i = 0; i<MAX_CANTIDAD;i++)
    {
        if(dni_buscado == atoi(personas[i][2]))
        {
            printf("se encotro el dni sus datos son\n");
            printf("%s\n", personas[i][0]);
            printf("%s\n", personas[i][1]);
            printf("%s\n", personas[i][2]);
            printf("%s\n", personas[i][3]);
            printf("%s\n", personas[i][4]);
            return;
        }
    }
    printf("su dni no fue encontrado\n");
    printf("\n");
}

void ordenamientoPorapellido(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS])
{
    int pos_menor;
    char aux[MAX_STRINGS];
    for(int i = 0; i < MAX_CANTIDAD - 1;i++)
    {
        pos_menor = i;
        for(int j = i + 1; j < MAX_CANTIDAD; j++)
        {
            if (strcmp(personas[pos_menor][1], personas[j][1]) > 0)
            {
                pos_menor = j;
            }
        }

        for(int j = 0; j < MAX_CANTIDAD; j++)
        {
            strcpy(aux, personas[i][j]);
            strcpy(personas[i][j], personas[pos_menor][j]);
            strcpy(personas[pos_menor][j], aux);
        }
    }

    for(int i = 0; i < MAX_CANTIDAD; i++)
    {
        printf("%s\n", personas[i][0]);
        printf("%s\n", personas[i][1]);
        printf("%s\n", personas[i][2]);
        printf("%s\n", personas[i][3]);
        printf("%s\n", personas[i][4]);
        printf("\n");
    }
}

void ordenamientNombre(char personas[MAX_CANTIDAD][MAX_CAMPOS][MAX_STRINGS])
{
    int pos_menor;
    char aux[MAX_STRINGS];

    for(int i = 0; i < MAX_CANTIDAD - 1; i++)
    {
        pos_menor = i;
        for(int j = i + 1; j < MAX_CANTIDAD; j++)
        {
            if(strcmp(personas[j][0], personas[pos_menor][0]) > 0)
            {
                pos_menor = 0;
            }
        }
        for(int j = 0; j < MAX_CANTIDAD; j++)
        {
            strcpy(aux, personas[i][j]);
            strcpy(personas[i][j], personas[pos_menor][j]);
            strcpy(personas[pos_menor][j], aux);
        }
    }

    for(int i = 0; i < MAX_CANTIDAD; i++)
    {
        printf("%s\n", personas[i][0]);
        printf("%s\n", personas[i][1]);
        printf("%s\n", personas[i][2]);
        printf("%s\n", personas[i][3]);
        printf("%s\n", personas[i][4]);
        printf("\n");
    }
}