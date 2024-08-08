#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantLotes, cantPiezas, totalPieza, lotelongitud = 0, loteespesor = 0;
    float Espesor, Longitud, espesorTotal = 0, longitudTotal = 0, longitudPromedio = 0, EspesorPromedio = 0;
    float minLongitud = 10000000000000, maxespesor = -1;

    printf("ingrese la cantidad de lostes\n");
    scanf("%d", &cantLotes);
    
    for(int i = 0; i < cantLotes; i++)
    {
        espesorTotal = 0;
        longitudTotal = 0;
        printf("ingrese cuantas piezas tiene el lote %d\n", i + 1);
        scanf("%d", &cantPiezas);
        totalPieza = cantPiezas;
        for(int j = 0; j < cantPiezas; j++)
        {

            Longitud = 0;
            Espesor = 0;

            printf("por cada pieza se ingresa la Longitud[1.3, 2.1] m y el Espesor[2.5, 3.1] mm\n");
            printf("Longitud\n");
            scanf("%f", &Longitud);
            while(Longitud < 1.3 || Longitud > 2.1)
             {
                printf("ingresaste mal la longitud[1.3, 2.1] m\n");
            scanf("%f", &Longitud);
            }
            longitudTotal += Longitud;

            printf("\n");


            printf("Espesor\n");
            scanf("%f", &Espesor);
            while(Espesor < 2.5 || Espesor > 3.1)
            {
                printf("ingresaste mal el espesor,[2.5, 3.1] mm\n");
                scanf("%f", &Espesor);
            }
            espesorTotal += Espesor;
        }
        

        printf("la longitud del lote es de %0.2f\n", longitudPromedio);
        printf("el espesor del lote es de %.2f\n", EspesorPromedio);

        if(longitudPromedio < minLongitud)
        {
            minLongitud = longitudPromedio;
            lotelongitud = i + 1;
        }
        if(EspesorPromedio > maxespesor)
        {
            maxespesor = EspesorPromedio;
            loteespesor = i + 1;
        }
    }
    printf("el lote %d con una longitud menor es de %.2f\n",lotelongitud, minLongitud);
    printf("el lote %d con mayor espesor es de %.2f\n", loteespesor, maxespesor);
    printf("la cantidad de piezas evaluadas es de %d\n", totalPieza);
    printf("la cantidad de lotes evaluados es de %d\n", cantLotes);

    return 0;
}