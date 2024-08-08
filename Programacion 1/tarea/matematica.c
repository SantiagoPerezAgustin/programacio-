#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int AND(int a, int b);

int OR(int a, int b);

int NOTa(int a);

int NOTb(int b);

int NOTaAND(int a, int b);

int NOTbAND(int a, int b);

int NOTaybAND(int a, int b);

int NOTaOR(int a, int b);

int NOTbOR(int a, int b);

int NOTaybOR(int a, int b);

int main()
{
    int a, b;
    int operacion;
    int resultado;
    bool salida = false;

    printf("ingrese el primer valor boleano(0 o 1): \n");
    scanf("%d", &a);
    while (a != 0 && a != 1)
    {
        printf("has ingreasado mal el numero, ingrese de vuelta\n");
        scanf("%d", &a);
    }

    printf("ingrese el segundo valor boleano(0 o 1): \n");
    scanf("%d", &b);
    while (b != 0 && b != 1)
    {
        printf("has ingresado mal el numero, ingrese nuevamente\n");
        scanf("%d", &b);
    }

    while (salida != true)
    {
        printf("ingrese unas de la pociones.\n1: la opracion AND.\n2: la opracion en OR.\n3: la operacion NOT en el primer valor.\n4: la operacion NOT en el segundo valor\n5: El opuesto de A y operacoin and\n6: el opuesto de b y la operacion de and\n7: la operacion de AND el opuesto de a y b\n8: el opuesto de a y OR\n9: el opuesto de b y OR\n10: el opuestode de a y b OR\n11: salir\n");
        scanf("%d", &operacion);
        switch (operacion)
        {
        case 1:
            resultado = AND(a, b);
            printf("Resultado de %d AND %d = %d\n", a, b, resultado);
            break;
        case 2:
            resultado = OR(a, b);
            printf("resultado de %d OR %d = %d\n", a, b, resultado);
            break;
        case 3:
            resultado = NOTa(a);
            printf("el resultado de NOT %d = %d\n", a, resultado);
            break;
        case 4:
            resultado = NOTb(b);
            printf("el resultado de NOT %d = %d\n", b, resultado);
            break;
        case 5:
            resultado = NOTaAND(a, b);
            printf("el resultado de NOT %d AND %d = %d\n", a, b, resultado);
            break;
        case 6:
            resultado = NOTbAND(a, b);
            printf("el resultado de %d AND NOT %d = %d\n", a, b, resultado);
            break;
        case 7:
            resultado = NOTaybAND(a, b);
            printf("el resultado de NOT %d AND NOT %d = %d\n", a, b, resultado);
            break;
        case 8:
            resultado = NOTaOR(a, b);
            printf("el resultado de NOT %d OR %d = %d\n", a, b, resultado);
            break;
        case 9:
            resultado = NOTbOR(a, b);
            printf("el resultado de %d OR NOT %d = %d\n");
            break;
        case 10:
            resultado = NOTaybOR(a, b);
            printf("le resultado de NOT %d OR NOT %d = %d\n", a, b, resultado);
        case 11:
            printf("Adios\n");
            salida = true;
            break;
        default:
            printf("eleccion equivocada\n");
            break;
        }
    }
}

int AND(int a, int b)
{
    return a && b;
}

int OR(int a, int b)
{
    return a || b;
}

int NOTa(int a)
{
    return !a;
}

int NOTb(int b)
{
    return !b;
}

int NOTaAND(int a, int b)
{
    return !a && b;
}

int NOTbAND(int a, int b){
    return a && !b;
}

int NOTaybAND(int a, int b){
    return !a && !b;
}

int NOTaOR(int a, int b){
    return !a || b;
}

int NOTbOR(int a, int b){
    return a || !b;
}

int NOTaybOR(int a, int b){
    return !a || !b;
}