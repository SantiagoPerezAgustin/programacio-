#include <stdio.h>

int main()
{
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;

    int dniIngresado = 0;
    int passIngresado = 0;

    int intentos = 1;
    int ingresaCorrectamente = 0;

    do
    {
        printf("intento numero %d\n", intentos);
        printf("ingresar el dni correcto(tines tres intentos)\n");
        scanf("%d", &dniIngresado);
        printf("ingrese su pass\n");
        scanf("%d", &passIngresado);
        if(dniIngresado == dni && passIngresado == pass)
        {
            printf("bienvenido al banco\n");
        }else{
            intentos++;
        }
        if (intentos == 4)
        {
            printf("te quedaste sin intentos\n");
        }
        

    } while (dniIngresado != dni && passIngresado != pass && intentos < 4);

    if(dniIngresado == dni && passIngresado == pass && intentos <= 3)
    {
        do
        {
            printf("coloque 1 para ver su saldo\n");
            if(ingresaCorrectamente == 1)
            {
                printf("su saldo es de %d\n", saldo);
            }
            printf("ingrese 2 para ver su CBU\n");
            if(ingresaCorrectamente == 2)
            {
                printf("el CBU es %d\n", cbu);
            }
            printf("ingrese 3 para salir\n");           
            scanf("%d", &ingresaCorrectamente);
            if(ingresaCorrectamente > 3)
            {
                printf("opcion incorrecta\n");
            }
        }while(dniIngresado < 2 && 4 < dniIngresado);
        printf("gracias por elegirnos :)\n");
    }
    return 0;
}