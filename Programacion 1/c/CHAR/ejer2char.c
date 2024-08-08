#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraA = 'A';
    char letraB = 'B';
    int suma;

    printf("el codigo ASCII de %c: %d\n", letraA, letraA);
    printf("el codigo ASCII de %c: %d\n", letraB, letraB);
    
    suma = letraA + letraB;

    printf("la suma de los numeros ASCII es: %d\n ", suma);

    system("pause");

    return 0;
    
}