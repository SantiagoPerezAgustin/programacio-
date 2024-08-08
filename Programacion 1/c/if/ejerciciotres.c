#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;

    printf("ingrsar el numero\n");
    scanf("%d", &numero);
    if(numero>0)
    {
        printf("el numero es positivo\n");
    }else if (numero<0)
    {
        printf("el numero es negativo\n");
    }else{
        printf("el numero es nulo\n");
    } 
    system("pause");
    
}