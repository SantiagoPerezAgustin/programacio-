#include <stdio.h>
#include <stdlib.h>

/*Crear una función que reciba un caracter y un número, y escriba un “triángulo”
formado por ese caracter, que tenga como anchura inicial la que se ha indicado.
Por ejemplo, si la caracter es * y la anchura es 4, debería escribir:
****
***
**
*
*/

void imprimirTriangulo(char caracter, int anchura);

int main()
{
    char caracter;
    int anchura;

    printf("introduce el caracter \n");
    scanf(" %c", &caracter);
    printf("introduce la anchura inicial \n");
    scanf("%d", &anchura);

    imprimirTriangulo(caracter, anchura);

    return 0;
}

void imprimirTriangulo(char caracter,int anchura){
     for (int i = anchura; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", caracter);
        }
        printf("\n");
    }
}