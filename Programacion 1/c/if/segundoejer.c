#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero1, numero2;

    printf("ingrsar los numeros\n");
    scanf("%d %d", &numero1, &numero2);

    if(numero1>numero2){
        printf("el numero 1 es el mayor\n");
    }else if (numero1 == numero2){
        printf("los numeros son iguales\n");
    }else{
        printf("el numero 2 es el mayor\n");
    }
    system("pause");
}