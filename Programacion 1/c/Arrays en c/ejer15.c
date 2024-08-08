#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Escribe un programa que solicite al usuario una cadena de caracteres y luego imprima la
cadena invertida.*/


int main()
{
    char cadena[100], cadenaInvertida[100];
    int j = 0;

    printf("ingrese una frase\n");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    for(int i = strlen(cadena)-1; i>=0; i--){
        cadenaInvertida[j]=cadena[i];
        j++;
    }
    cadenaInvertida[j] = '\n';

    printf("la cadena es %s\n", cadenaInvertida);
}



