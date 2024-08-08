#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float cateto1 = 0;
    float cateto2 = 0;
    float hipotenusa = 0;
    float perimetro = 0;
    float superficie = 0;

    printf("ingresar el valor del primer lado %f\n");
    scanf("%f", &cateto1);
    printf("ingresar el valor del segundo lado %f\n");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));


    printf("la hipotenusa del tiangulo rectangulo es de %f\n",hipotenusa);

    perimetro = hipotenusa + cateto1 + cateto2;

    printf("el valor del perimetro del triangilo es de %f\n", perimetro);

    superficie = 0.5 * cateto1 * cateto2;

    printf("el valor de la superfice es %f\n", superficie); 

    system("pause");

    return 0;

}