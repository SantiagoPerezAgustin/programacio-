#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nota;
    printf("ingresar el valor de la nota\n");
    scanf("%d", &nota);

    if (0<= nota && nota<=10){
        printf("la nota es valida\n");
        switch(nota)
        {
            case 0: case 1: case 2: case 3:
            printf("esta reprobado\n");
            break;
            case 4: case 5: 
            printf("esta regular\n");
            break;
            default:
            printf("esta promocionado\n");
            break;
        }
            
    }
    else{
        printf("esta nota no es valida\n");
    } 
    system("pause");
}