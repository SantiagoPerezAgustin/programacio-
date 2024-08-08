#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant_Corredores, sumaMarcas1 = 0, sumatotal = 0;
    float promedio1 = 0, promediototal= 0;
    printf("ingrese la cantidad de corredores de la carrera\n");
    scanf("%d", &cant_Corredores);
    int corredores[3][cant_Corredores];
    // struct Corredores corredores[cant_Corredores];

    for(int vuelta = 0; vuelta < 3; vuelta++)
    {
        printf("Vuelta %d\n", vuelta+1);

        for(int i = 0; i < cant_Corredores; i++) {
            printf("ingrese el numero del corredor %d\n", i+1);
            scanf("%d", &corredores[i][0]);


        while(2000 > corredores[i][0] || corredores[i][0] > 3000)
        {
            printf("ingresaste mal el codigo del corredor, vuelva a ingresarlo\n");
            scanf("%d", &corredores[i][0]);
        }
            printf("ingrese la marca del corredor %d, en la vuelta %d\n", i+1, vuelta+1);
            scanf("%d", &corredores[i][1]);

            sumaMarcas1 += corredores[i][1];
            promedio1 = (float)sumaMarcas1/cant_Corredores;
            printf("el promedio de la vuelta %d es de %.2f\n", vuelta+1, promedio1);
            printf("----------------------------------------------\n");
        }
        for(int i = 0; i < cant_Corredores;i++)
        {
            if(!corredores)
            {

            }
        }
        sumatotal = sumaMarcas1;

    }
    


    
}