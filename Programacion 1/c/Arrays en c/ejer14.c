#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Escribe un programa que solicite al usuario una cadena de caracteres y luego cuente el número de vocales que contiene
int main()
{
    char vocales[] = {'a','e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}, cadena[100];
    int contador = 0;

    printf("Ingrese una frase\n");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; i<10; i++) {
        for (int j = 0; j<strlen(cadena); j++) {
            if (cadena[j] == vocales[i]) {
                contador++;
            }
        }
    }

    printf("Cantidad de vocales: %d\n", contador);

    system("pause");
    return 0;
}