#include <stdio.h>
#include <stdlib.h>

char mensajeBienvenida(char inicial);

int main()
{
    char inicial;
    printf("ingrese tu inicial\n");
    scanf(" %c", &inicial);
    mensajeBienvenida(inicial);
    return 0;

}

char mensajeBienvenida(char inicial){
    printf("bienvenido, cliente con la inicial %c", inicial);
}