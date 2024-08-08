#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void cargarDato(char MP[3][3][20]);
void MontoTotal(char MP[3][3][20]);
void calcularDescuento(char MP[3][3][20], float resultado[3]);

int main()
{
    char medioPago[3][3][20];
    float resultado[3];
    cargarDato(medioPago);

    MontoTotal(medioPago);

    calcularDescuento(medioPago, resultado);
}

void cargarDato(char MP[3][3][20]){
    strcpy(MP[0][0], "Efectivo ");
    strcpy(MP[0][1], "0.15");
    strcpy(MP[0][3], "0");

    strcpy(MP[1][0], "Débito ");
    strcpy(MP[1][1], "0.10");
    strcpy(MP[1][2], "0");

    strcpy(MP[2][0], "Crédito");
    strcpy(MP[2][1], "0");
    strcpy(MP[3][3], "0");
}

void MontoTotal(char MP[3][3][20]){
    for(int i = 0; i<3;i++)
    {
        printf("ingrese el monto total del medio de pago %s\n", MP[i][0]);
        scanf("%s", &MP[i][2]);
    }
    for(int i = 0; i<3;i++)
    {
        printf("medio de pago: %s, porcentaje: %s, monto es de: %s\n", MP[i][0], MP[i][1], MP[i][2]);
    }
}

void calcularDescuento(char MP[3][3][20], float resultado[3]){
    float resultadoTotal;
    for(int i = 0; i < 3; i++)
    {
        float porcentajeDescuento = atof(MP[i][1]);
        float montoTotal = atof(MP[i][2]);
        resultado[i] = montoTotal * porcentajeDescuento;
        printf("El descuento de %s es: %.2f\n", MP[i][0], resultado[i]);
        resultadoTotal += resultado[i];
    }
    printf("el monto total de descuentos es:%0.2f\n", resultadoTotal);
}