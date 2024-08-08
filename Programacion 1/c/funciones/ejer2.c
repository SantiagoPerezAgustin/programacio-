#include <stdio.h>
#include <stdlib.h>

/*Crea una función llamada calcularAreaCuadrado que reciba el lado de un cuadrado
como parámetro y devuelva el área de ese cuadrado. Luego, desarrolla un programa
que invoque a esta función y muestre el resultado.*/
float calcularAreaCuadrado(float lado);

int main()
{
    float lado, area;
    printf("ingrese el lado de un cuadradon\n");
    scanf("%f", &lado);

    area = calcularAreaCuadrado(lado);

    printf("el area del lado %0.2f, es: %0.2f", lado, area);
}

float calcularAreaCuadrado(float lado){
    return lado * lado;
}