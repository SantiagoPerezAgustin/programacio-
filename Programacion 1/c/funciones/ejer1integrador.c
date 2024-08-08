#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void cargarDatos(char productos[4][4][20]);
void cantVendida(char productos[4][4][20]);
void calcularMonto(char productos[4][4][20]);
void ordenar(char productos[4][4][20], float montos[4]);

int main()
{
    char prod[4][4][20];
    float monto[4];
    cargarDatos(prod);
    for(int i = 0; i<4; i++)
    {
        printf("posicion: %s, precio: %s, descripcion: %s, precio: %s\n", prod[i][0], prod[i][1], prod[i][2], prod[i][3]);
    }
    cantVendida(prod);

    calcularMonto(prod);

    ordenar(prod, monto);
    return 0;
}

void cargarDatos(char productos[4][4][20]){
    strcpy(productos[0][0], "01");
    strcpy(productos[0][1], "3500.00");
    strcpy(productos[0][2], " 3500.00 Mantel 2x2");
    strcpy(productos[0][3], "0");

    strcpy(productos[1][0], "02");
    strcpy(productos[1][1], "800.99");
    strcpy(productos[1][2], "Plato playo 24cm");
    strcpy(productos[1][3], "0");

    strcpy(productos[2][0], "03");
    strcpy(productos[2][1], "1450.50");
    strcpy(productos[2][2], "Copa vino");
    strcpy(productos[2][3], "0");

    strcpy(productos[3][0], "04");
    strcpy(productos[3][1], "650.50");
    strcpy(productos[3][2], "Plato hondo 22cm");
    strcpy(productos[3][3], "0");
}

void cantVendida(char productos[4][4][20]){
    for(int i = 0; i<4; i++)
    {
        printf("ingrese la cantidad vendida\n");
        scanf("%s", productos[i][3]);
    }
}


void calcularMonto(char productos[4][4][20]){
    float cant, precio, ventaNeta, VentaIva;

    for(int i = 0; i<4;i++){
    cant = atof(productos[i][3]);
    precio = atof(productos[i][1]);
    }

    ventaNeta = precio * cant;
    VentaIva = ventaNeta * 1.21;

    printf("las la venta neta es de %0.2f\n", ventaNeta);
    printf("las ventas mas iva es: %0.2f\n", VentaIva);
}


void ordenar(char productos[4][4][20],float montos[4]){
    int pos_mayor, ventaCant, ventaPrecio, ventaMayor;
    char cajita_cantV[50];
    for(int i = 0; i<4;i++)
    {   
        //encontar pos del q tiene mas entas
        pos_mayor = i;
        ventaMayor = atoi(productos[i][3]);
        for(int j = i+1;j<4;j++)
        {
            if(ventaMayor<atoi(productos[j][3]))
            {
                ventaMayor = atoi(productos[j][3]);
                pos_mayor = j;
            }
        }


        //intercambiar

        for(int campo = 0;campo<4;campo++)
        {
            strcpy(cajita_cantV, productos[i][campo]);
            strcpy(productos[i][campo], productos[pos_mayor][campo]); 
            strcpy(productos[pos_mayor][campo], cajita_cantV);
        }


    }
    for(int i = 0; i<4; i++)
    {
        printf("%s %s %s %s\n", productos[i][0], productos[i][1], productos[i][2], productos[i][3]);
    }
}