#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    float lado1 = 0.0; 
    float lado2 = 0.0;
    float lado3 = 0.0;
    float perimetroTrianglo = 0.0;

    printf("ingresar el valor del primer lado\n");
    scanf("%f", &lado1);

    printf("ingresar el valor del segundo lado\n");
    scanf("%f", lado2);

    printf("ingrsar el valor del tercer lado\n");
    scanf("%f", &lado3);

    perimetroTrianglo = lado1 + lado2 + lado3;

    printf("la medida del primer lado es %f\n", lado1);

    printf("la medida del segundo lado es %f\n"), lado2;

    printf("medida del tercer lado es %f\n"), lado3;

    printf("el perimetro del triangulo es de %f\n", perimetroTrianglo);

    system("pause");

    return 0;

 }