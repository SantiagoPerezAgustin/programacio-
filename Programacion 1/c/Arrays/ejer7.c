#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char paises[3][100];
    char ciudadUno[3][50];
    char ciudadDos[3][50];
    char ciudadTres[3][50];

    strcpy(paises[0], "Argentina");
    strcpy(paises[1], "Colombia");
    strcpy(paises[2], "Brasil");

    strcpy(ciudadUno[0], "Buenos Aires");
    strcpy(ciudadUno[1], "Cali");
    strcpy(ciudadUno[2], "Brasilia");

    strcpy(ciudadDos[0], "Rosario");
    strcpy(ciudadDos[1], "Bogota");
    strcpy(ciudadDos[2], "Rio de Janeiro");

    strcpy(ciudadTres[0], "Cordoba");
    strcpy(ciudadTres[1], "Santa Marta");
    strcpy(ciudadTres[2], "San Pablo");

    
    for (int i = 0; i < 3; i++) {
        printf("Pais: %s\n", paises[i]);
        printf("Ciudad 1: %s\n", ciudadUno[i]);
        printf("Ciudad 2: %s\n", ciudadDos[i]);
        printf("Ciudad 3: %s\n", ciudadTres[i]);
        printf("\n");
    }

    return 0;
}
