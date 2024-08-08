#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void LitasCorredores(char nombre[][20], char apellido[][20]);
void listaMejores(char nombre[][20], char apellido[][20], int posicion[]);
void ListaPosiciones(char nombre[][20], char apellido[][20], int posicion[]);

int main()
{
    char nombre[10][20] = {"Pedro", "Martin", "Ernestina", "Gaston", "Dalma", "Patricio", "Faustina", "Andrea", "Hilda", "Leon"};
    char apellido[10][20] = {"Gomez", "Ceres", "Diaz", "Bautista", "Alvarez", "Fernandez", "Martinez", "Perez", "Lopez", "Garcia"};
    int posicion[10] = {7, 6, 1, 2, 8, 3, 10, 9, 4, 5};
    int opcion;
    bool reiterar = false;
    while(reiterar == false){
    printf("\ningrese 1: si quire ver la lista de los corredores\n2: mostrar los tres mejores\n3: mostrar lista completa de los resultados\n4: salir\n");
    scanf("%d", &opcion);
    switch(opcion)
    {
        case 1:
        LitasCorredores(nombre, apellido);
        break;
        case 2:
        listaMejores(nombre, apellido, posicion);
        break;
        case 3:
        ListaPosiciones(nombre, apellido, posicion);
        break;
        case 4:
        printf("gracias por visitar\n");
        reiterar = true;
        default:
        printf("no elegiste ninguna de las opciones\n");
        break;
    }
}
}


void LitasCorredores(char nombre[][20], char apellido[][20]){
    for(int i = 0; i<10;i++)
    {
        printf("nombre %s, apellido %s, corredor %d\n", nombre[i], apellido[i], i + 1);
    }
}


void listaMejores(char nombre[][20], char apellido[][20], int posicion[]){
    printf("los tres mejores son\n");
    int tres;
    
    for(int i = 0;i<10;i++)
    {
        if(posicion[i] > 7){
        printf("nombre: %s, apellido: %s, posicion: %d\n",nombre[i], apellido[i], posicion[i]);
        }
    }
}


void ListaPosiciones(char nombre[][20], char apellido[][20], int posicion[]){
    for(int i = 0; i<10; i++)
    {
        printf("nombre: %s, apelido: %s, posicion: %d\n", nombre[i], apellido[i], posicion[i]);
    }
}