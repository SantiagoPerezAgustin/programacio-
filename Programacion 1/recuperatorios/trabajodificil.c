#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STRINGS 50
#define MAX_CAMPOS 5

void cargarDatos(char personas[8][MAX_CAMPOS][MAX_STRINGS]),
    busquedaDni(char personas[8][MAX_CAMPOS][MAX_STRINGS]),
    ordenamiento(char personas[8][MAX_CAMPOS][MAX_STRINGS]),
    ordenamientoNombreApellido(char personas[8][MAX_CAMPOS][MAX_STRINGS]),
    busquedaDicotomica(char personas[8][MAX_CAMPOS][MAX_STRINGS]),
    ordenarporedad(char personas[8][MAX_CAMPOS][MAX_STRINGS]);

int main()
{
    char clientes[8][MAX_CAMPOS][MAX_STRINGS];
    int opcion, opcion2;
    bool valido = false;

    // cargamos datos
    cargarDatos(clientes);
    do
    {
        printf("ingrese las siguientes opciones\n");
        printf("1: Buscar por dni\n");
        printf("2: Ordenar por apellido\n");
        printf("3: Ordenar por apellido y Nombre\n");
        printf("4: Busqueda por apellido y Nombre\n");
        printf("5: Para otro menu de opciones\n");
        printf("6: Salir\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            busquedaDni(clientes);
            break;
        case 2:
            ordenamiento(clientes);
            break;
        case 3:
            ordenamientoNombreApellido(clientes);
            break;
        case 4:
            busquedaDicotomica(clientes);
            break;
        case 5:
            printf("ingrese\n1: si quiere ordenarlo a los pacientes por edad\n2: si quiere ordenarlo por apellido+nombre\n");
            scanf("%d", &opcion2);
            switch(opcion2)
            {
            case 1:
                ordenarporedad(clientes);
                break;
            case 2:
                ordenamientoNombreApellido(clientes);
                break;
            default:
                printf("no tenemos es opcion\n");
                break;
            }
        case 6:
            valido = true;
            break;
        default:
            break;
        }
    } while (!valido);
}

void cargarDatos(char personas[8][MAX_CAMPOS][MAX_STRINGS])
{
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
    strcpy(personas[2][1], "ramirez");
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
    strcpy(personas[5][1], "noe");
    strcpy(personas[5][2], "15212223");
    strcpy(personas[5][3], "543423444567");
    strcpy(personas[5][4], "60");

    strcpy(personas[6][0], "jasmin");
    strcpy(personas[6][1], "tolosa");
    strcpy(personas[6][2], "40242526");
    strcpy(personas[6][3], "543402512345");
    strcpy(personas[6][4], "25");

    strcpy(personas[7][0], "leonardo");
    strcpy(personas[7][1], "sosa");
    strcpy(personas[7][2], "11272829");
    strcpy(personas[7][3], "541151234567");
    strcpy(personas[7][4], "70");
}

void busquedaDni(char personas[8][MAX_CAMPOS][MAX_STRINGS])
{
    int dni_buscado;
    printf("ingrese el dni para buscar sus datos\n");
    scanf("%d", &dni_buscado);
    for (int i = 0; i < 8; i++)
    {
        if (dni_buscado == atoi(personas[i][2]))
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
    printf("tu dni no esta en la base de dato\n");
}

void ordenamiento(char personas[8][MAX_CAMPOS][MAX_STRINGS])
{
    char aux[MAX_STRINGS];
    int pos_menor;
    for (int i = 0; i < 8 - 1; i++)
    {
        pos_menor = i;
        for (int j = i + 1; j < 8; j++)
        {
            if (strcmp(personas[j][1], personas[pos_menor][j]) < 0)
            {
                pos_menor = j;
            }
        }

        for (int j = 0; j < 8; j++)
        {
            strcpy(aux, personas[pos_menor][j]);
            strcpy(personas[pos_menor][j], personas[i][j]);
            strcpy(personas[i][j], aux);
        }
    }

    for (int i = 0; i < 8; i++)
    {
        printf("\n");
        printf("%s\n", personas[i][0]);
        printf("%s\n", personas[i][1]);
        printf("%s\n", personas[i][2]);
        printf("%s\n", personas[i][3]);
        printf("%s\n", personas[i][4]);
        printf("\n");
    }
}

void ordenamientoNombreApellido(char personas[8][MAX_CAMPOS][MAX_STRINGS])
{
    char aux[MAX_STRINGS];
    int pos_menor;
    for (int i = 0; i < 8 - 1; i++)
    {
        pos_menor = i;
        for (int j = i + 1; j < 8; j++)
        {
            if (strcmp(personas[j][1], personas[pos_menor][1]) < 0 ||
                (strcmp(personas[j][1], personas[pos_menor][1]) == 0 && strcmp(personas[j][0], personas[pos_menor][0]) < 0))
            {
                pos_menor = j;
            }
        }

        for (int j = 0; j < MAX_CAMPOS; j++)
        {
            strcpy(aux, personas[pos_menor][j]);
            strcpy(personas[pos_menor][j], personas[i][j]);
            strcpy(personas[i][j], aux);
        }
    }

    for (int i = 0; i < 8; i++)
    {
        printf("\n");
        printf("%s\n", personas[i][0]);
        printf("%s\n", personas[i][1]);
        printf("%s\n", personas[i][2]);
        printf("%s\n", personas[i][3]);
        printf("%s\n", personas[i][4]);
        printf("\n");
    }
}

void busquedaDicotomica(char personas[8][MAX_CAMPOS][MAX_STRINGS])
{
    char nombre[MAX_STRINGS], apellido[MAX_STRINGS], objetivo[100], comparar[100];
    int inferior = 0, superior = 8 - 1, encontrado = 0, centro = 0;

    printf("ingrese el nombre\n");
    scanf("%s", nombre);

    printf("ingrese el apellido\n");
    scanf("%s", apellido);

    sprintf(objetivo, "%s%s", apellido, nombre);
    

    while (!encontrado && inferior <= superior)
    {
        centro = (inferior + superior) / 2;
        sprintf(comparar, "%s%s", personas[centro][1], personas[centro][0]);

        if (strcmp(objetivo, comparar) == 0)
        {
            printf("Persona encontrada en la posición %d\n", centro + 1);
            printf("Nombre: %s\n", personas[centro][0]);
            printf("Apellido: %s\n", personas[centro][1]);
            printf("DNI: %s\n", personas[centro][2]);
            printf("Teléfono: %s\n", personas[centro][3]);
            printf("Edad: %s\n", personas[centro][4]);
            encontrado = 1;
        }
        else if (strcmp(comparar, objetivo) < 0)
        {
            inferior = centro + 1;
        }
        else
        {
            superior = centro - 1;
        }
    }

    if (!encontrado)
    {
        printf("persona no encontrada\n");
    }
}


void ordenarporedad(char personas[8][MAX_CAMPOS][MAX_STRINGS])
{
    int pos_menor;
    char aux[MAX_STRINGS];
    for(int i = 0; i < 8 - 1;i++)
    {
        pos_menor = i;
        for(int j = i + 1;j < 8; j++)
        {
            if (atoi(personas[j][4]) < atoi(personas[pos_menor][4]))
            {
                pos_menor = j;
            }
            
        }

        for(int j = 0; j < 8; j++)
        {
            strcpy(aux, personas[i][j]);
            strcpy(personas[i][j], personas[pos_menor][j]);
            strcpy(personas[pos_menor][j], aux);
        }
    }

    for(int i = 0; i < 8; i++)
    {
        printf("\n");
        printf("%s\n", personas[i][0]);
        printf("%s\n", personas[i][1]);
        printf("%s\n", personas[i][2]);
        printf("%s\n", personas[i][3]);
        printf("%s\n", personas[i][4]);
        printf("\n");
    }
    return;
}