#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraMayus, letraMinus;
    printf("ingrese el valos de la letra mayuscula\n ");
    scanf("%c", &letraMayus);

    letraMinus = letraMayus + 32;

    printf("el valor de la letra minuscula es de %d\n", letraMinus);

    system("pause");

    return 0;

}