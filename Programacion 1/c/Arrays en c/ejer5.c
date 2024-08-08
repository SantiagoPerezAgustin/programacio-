#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    char meses[][10] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};    
    float contador;
    float inflacionBaja, inflacionAlta;
    int mesBajo, mesAlto;

    contador = 0;

    for(int i = 0; i < 12; i++){
        printf("los numero de la inflacion son %0.1f\n", inflacion[i]);
        contador += inflacion[i];
    }

    printf("inflacion anual es: %0.1f\n", contador);
    inflacionBaja = inflacion[0];
    inflacionAlta = inflacion[0];
    
    for ( int i = 0; i < 12; i++)
    {
        if (inflacion[i] < inflacionBaja)
        {
            inflacionBaja = inflacion[i];
            mesBajo = i;
        }
        if(inflacion[i] > inflacionAlta)
        {
            inflacionAlta = inflacion[i];
            mesAlto = i;
        }
        
    }

    printf("la inflacion mas baja es: %0.1f y corresponde al mes: %s\n",inflacionBaja, meses[mesBajo]);
    printf("la inflacion mas alta es: %0.1f y corresponde al mes: %s\n",inflacionAlta, meses[mesAlto]);
    system ("pause");
    return 0;
}


