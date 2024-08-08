#include <stdio.h>
#include <string.h>

/*Realizar un programa que permita al usuario de un hospital, buscar a un paciente por el
número de DNI e informar al usuario los datos de la persona.
Realizar una búsqueda secuencial
Los datos de los clientes son:
Posición Nombre Apellido DNI Teléfono Edad
0 Ana Martinez 17.123456 +541141200011 56
1 Camila Noe 25.789101 +543419485831 45
2 Bruno Noe 39.121314 +541145565789 26
3 Dardo Pistilli 21.151617 +541158637543 48
4 Ernestina Quesada 33.181920 +541161294758 35
5 Fausto Ramirez 15.212223 +543423444567 60
6 Jasmín Sosa 40.242526 +543402512345 25
7 Leonardo Tolosa 11.272829 +541151234567 70*/

void cargarDatos(char personas[7][4][20]);
void busquedaDni(char personas[7][4][20], int dni);

int main()
{
   char personas[7][4][20];

   cargarDatos(personas);
   int opcion, dni;

   do{
    printf("1: buscar por su dni\n");
    printf("2: Busqueda dicotomica de persona por apellido y nombre\n");
    printf("3- Mostrar pacientes ordenados por apellido y nombre\n");
    printf("4- Mostrar pacientes ordenados por edad\n");
    printf("5- Salir\n");
    printf("ingrese una opcion\n");
    scanf("%d", &opcion);
    switch(opcion)
    {
        case 1: 
        busquedaDni(personas, dni);
        break;
        case 5:
        printf("Adios\n");
        break;
    }
   }while (opcion != 5);
}

void cargarDatos(char personas[7][4][20]){
strcpy(personas[0][0], "Ana");
strcpy(personas[1][0], "Camila");
strcpy(personas[2][0], "Bruno");
strcpy(personas[3][0], "Dardo");
strcpy(personas[4][0], "Ernestina");
strcpy(personas[5][0], "Fausto");
strcpy(personas[6][0], "Jasmin");
strcpy(personas[7][0], "Leonardo");

strcpy(personas[0][1], "Martinez");
strcpy(personas[1][1], "Noe");
strcpy(personas[2][1], "Noe");
strcpy(personas[3][1], "Pistilli");
strcpy(personas[4][1], "Quesada");
strcpy(personas[5][1], "Ramirez");
strcpy(personas[6][1], "Sosa");
strcpy(personas[7][1], "Tolosa");

strcpy(personas[0][2], "17123456");
strcpy(personas[1][2], "25789101");
strcpy(personas[2][2], "39121314");
strcpy(personas[3][2], "21151617");
strcpy(personas[4][2], "33181920");
strcpy(personas[5][2], "15212223");
strcpy(personas[6][2], "40242526");
strcpy(personas[7][2], "11272829");

strcpy(personas[0][3], "+541141200011");
strcpy(personas[1][3], "+543419485831");
strcpy(personas[2][3], "+541145565789");
strcpy(personas[3][3], "+541158637543");
strcpy(personas[4][3], "+541158637543");
strcpy(personas[5][3], "+543423444567");
strcpy(personas[6][3], "+543402512345");
strcpy(personas[7][3], "+541151234567");

strcpy(personas[0][4], "56");
strcpy(personas[1][4], "45");
strcpy(personas[2][4], "26");
strcpy(personas[3][4], "48");
strcpy(personas[4][4], "35");
strcpy(personas[5][4], "60");
strcpy(personas[6][4], "25");
strcpy(personas[7][4], "70");
}

void busquedaDni(char personas[7][4][20], int dni){
    char dnibuscado[50];
    sprintf(dnibuscado, "%d", dni);
    printf("ingrese su dni\n");
    scanf("%s", &dnibuscado);
    for(int i = 0;i<7; i++)
    {
        if(strcmp(personas[i][2], dnibuscado) == 0)
        {
            printf("persona encotrada:\n");
            printf("%s %s %s %s %s\n", personas[i][0], personas[i][1], personas[i][2], personas[i][3], personas[i][4]);
            return;
        }
    }
    printf("persona no encontrada\n");
}