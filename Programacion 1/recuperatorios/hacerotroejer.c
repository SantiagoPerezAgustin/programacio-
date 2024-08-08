#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int salir;
    int cant_prod, importeTotal = 0, precioProducto;
    int miembroToco;
    const float IVA = 1.21; 
    do
    {
        precioProducto = 0;
        importeTotal = 0;
        printf("ingrese lqa cantidad de productos\n");
        scanf("%d", &cant_prod);
        for(int i = 0; i < cant_prod; i++)
        {
            printf("ingrese el precio de los prductos\n");
            scanf("%d", &precioProducto);
            printf("\n\n");
            importeTotal += precioProducto;
        }
        if(cant_prod >= 15 && importeTotal > 149999)
        {
            printf("tenes un descuento del 10 porciento de descuento");
            importeTotal *= 0.90; 
        }
        printf("ingrese 1 si sos miembro del TOCO\n");
        scanf("%d", &miembroToco);
        if(miembroToco == 1)
        {
            printf("tenes un 5 porciento de descuento por se miembre\n\n");
            importeTotal *= 0.95;
        }
        importeTotal *= IVA;

        printf("El total es de %d\n\n", importeTotal);

        printf("hay mas gente? 1 = si, 2 = no\n");
        scanf("%d", &salir);
    } while (salir == 1);
    printf("gracias por elegirnos\n");;
    
}

