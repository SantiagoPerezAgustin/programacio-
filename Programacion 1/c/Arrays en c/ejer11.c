#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadenas[3][50];

    for(int i = 0; i < 3; i++)
    {
        printf("ingrese una cadena\n");
        fgets(cadenas[i], sizeof(cadenas[i]), stdin);
    }

    for(int i = 0; i < 3; i++){
        printf("\n%s", cadenas[i]);
        printf("longitud de la cadena %d: %d\n", i+1, strlen(cadenas[i])-1);
    }

    system("pause");
    return 0;
}