#include <stdio.h>
#include <string.h>

/*Ingrese por teclado la facturación de los últimos 6 meses del año. Informar:
a. La facturación total
b. El promedio de facturación
c. La máxima facturación
d. La mínima facturación */

void main()
{
    int facturacion[6], total = 0, contador = 0, max = facturacion[0], min = facturacion[0];
    float promedio = facturacion[0];

    for(int i = 0; i < 6; i++)
    {
        printf("ingrese la facturacion del me %d\n", i + 1);
        scanf("%d", &facturacion[i]);

        total += facturacion[i];
        contador++;

        if(i == 0) {
            max = facturacion[i];
            min = facturacion[i];
        } else {
            if(facturacion[i] > max){
                max = facturacion[i];
            }

            if(facturacion[i] < min) {
                min = facturacion[i];
            }
        }
    }
    printf("la facturacion total es de %d\n", total);    
    printf("la facturacion mas grande es de %d\n", max);
    printf("la facturacion mas chica es de %d\n", min);


    promedio = (float)total/6;
    printf("el promedio de la facturacion es de %0.2f\n", promedio);
}