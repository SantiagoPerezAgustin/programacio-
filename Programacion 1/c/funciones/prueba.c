#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int areaCuadrado(int lado);

int main()
{
    int resultado_area, lado;

    printf("ingrese un lado\n");
    scanf("%d", &lado);

    resultado_area = areaCuadrado(lado);

    printf("el area es de %d\n", resultado_area);
}

int areaCuadrado(int lado){
    int resultado;

    resultado = lado + lado + lado + lado;
    
    return resultado;
}
