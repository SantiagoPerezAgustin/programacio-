#include <stdio.h>
#include <stdlib.h>

/*Crear una función que reciba un número cualquiera y que devuelva como resultado la
suma de sus dígitos. */

int sumaDigitos(int numero);

int main(){
    int numero, suma = 0;
    printf("ingrese un numero\n");
    scanf("%d", &numero);

    suma = sumaDigitos(numero);
    printf("la suma de los digitos es de %d", suma);
}

int sumaDigitos(int numero){
    int suma = 0;

     while (numero > 0) {
        suma += numero % 10; 
        numero /= 10; 
    }

    return suma;
}