#include <stdio.h>
#include <math.h>

/*Crear una función que calcule el cubo de un número real (float). El resultado deberá
ser otro número real.*/

float cubo (float a);

int main(){
    float a;
    printf("el numero que quieras elevar\n");
    scanf("%f", &a);
    printf("el cubo del numero %f es: %f\n", a, cubo(a));
    return 0;
}

float cubo(float a){
    return pow(a, 3);
}


