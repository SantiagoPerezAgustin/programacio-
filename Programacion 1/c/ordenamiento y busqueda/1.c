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

typedef struct {
    char nombre[30];
    char apellido[30];
    char DNI[10];
    char telefono[15];
    int edad;
} Paciente;

void buscarPacientePorDNI(Paciente pacientes[], int num_pacientes, char dni_busqueda[]);

int main(){
    Paciente pacientes[] = {
        {"Ana", "Martinez", "17.123456", "+541141200011", 56},
        {"Camila", "Noe", "25.789101", "+543419485831", 45},
        {"Bruno", "Noe", "39.121314", "+541145565789", 26},
        {"Dardo", "Pistilli", "21.151617", "+541158637543", 48},
        {"Ernestina", "Quesada", "33.181920", "+541161294758", 35},
        {"Fausto", "Ramirez", "15.212223", "+543423444567", 60},
        {"Jasmín", "Sosa", "40.242526", "+543402512345", 25},
        {"Leonardo", "Tolosa", "11.272829", "+541151234567", 70}
    };
    int num_pacientes = sizeof(pacientes) / sizeof(pacientes[0]);

    char dni_busqueda[10];
    printf("ingrese el dni del paciente a buscar:\n");
    scanf("%s", dni_busqueda);

    buscarPacientePorDNI(pacientes, num_pacientes, dni_busqueda);

    return 0;
}

void buscarPacientePorDNI(Paciente pacientes[], int num_pacientes, char dni_busqueda[]) {
    int encontrado;
    for(int i = 0; i < num_pacientes; i++){
        if (strcmp(pacientes[i].DNI, dni_busqueda) == 0)
        {
            printf("Paciente encontrado:\n");
            printf("Nombre: %s\n", pacientes[i].nombre);
            printf("Apellido: %s\n", pacientes[i].apellido);
            printf("DNI: %s\n", pacientes[i].DNI);
            printf("Telefono: %s\n", pacientes[i].telefono);
            printf("Edad: %d\n", pacientes[i].edad);
            encontrado = 1;
            break;
        }
        
    }
     if (!encontrado) {
        printf("Paciente con DNI %s no encontrado.\n", dni_busqueda);
    }
}
