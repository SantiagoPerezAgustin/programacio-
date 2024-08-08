#include <stdio.h>
#include <stdlib.h>
int esPar(int num);

int main()
{
    int num;
    int respuesta;
    printf("ingrese un numero\n");
    scanf("%d", &num);
    respuesta = esPar num);

    if(respuesta == 0)
    {
        num = num * 2;
        printf("es par\n");
    }else{
        num = num * 5;
        printf("el numero es \n");
    }

    system("pause");
}

int esPar(int num, string twxt){
    int resultado;
   if(num % 2 == 0){
        resultado = 1;
    }else{
        resultado = 0;
    }
    return resultado;
}


