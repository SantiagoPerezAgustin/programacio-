#include <stdio.h>


void main(){
    int i, suma;
    suma = 0;

    for (i = 1; i <= 20; i += 2)
    {
        suma = suma + i;
    }
    printf("%d\n", suma);
}