#include <stdio.h>
#include <stdlib.h>

/*Crear una función que devuelva la primera letra de una cadena de texto. */

char primeraLetra(const char* frase);

int main()
{
    const char* frase = "buen dia";
    char letra = primeraLetra(frase);

    printf("la primra ltras es %c\n", letra);
}

char primeraLetra(const char* frase){
    if(frase == NULL || frase[0] == '\0')
    {
        return '\0';
    }
    return frase[0];
}