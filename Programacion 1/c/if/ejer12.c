#include <stdio.h>

void main()
{
    int dni, medioPago, tipoTarjeta, cuotas;
    printf("ingresar el numero de dni\n");
    scanf("%d", &dni);
    int total = 4600;
    if (100000 < dni && dni < 99999999)
    {
        printf("el dni es valido\n");

        printf("que medio de pago vas a utilizar (1:efectivo, 2:tarjeta)\n");
        scanf("%d", &medioPago);

        switch (medioPago)
        {
        case 1:
            printf("paga con efectivo\n");
            break;
        case 2:
            printf("paga con tarjeta\n");
            printf("ingresar con que tarjeta vas a pagar (1:visa, 2:american express, 3:mercado pago: ,4:cabal)\n");
            scanf("%d", &tipoTarjeta);
            switch (tipoTarjeta)
            {
            case 1:
                printf("paga con visa\n");
                printf("con cuantas cuotas vas a pagar(1: recargo 0, 3: reacrgo 4%%, 8,12: recargo 8%%)\n");
                scanf("%d", &cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("no tendras ningun recargo\n");
                    break;
                case 3:
                    printf("tenes un recargo de un 4%%\n");
                    total = total * 1.04;
                    break;
                case 8:
                case 12:
                    printf("tenes un recargo de 8%%\n");
                    total = total * 1.08;
                default:
                    printf("no aceptamos mas cuotas\n");
                    break;
                }
                break;
            case 2:
                printf("paga con american express\n");
                printf("con cuantas cuotas vas a pagar(1: recargo 0, 3: reacrgo 4%%, 8,12: recargo 8%%)\n");
                scanf("%d", &cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("no tendras ningun recargo\n\n");
                    break;
                case 3:
                    printf("tenes un recargo de un 4%%\n");
                    total = total * 1.04;
                    break;
                case 8:
                case 12:
                    printf("tenes un recargo de 8%%\n");
                    total = total * 1.08;
                default:
                    printf("no aceptamos mas cuotas\n");
                    break;
                }
                break;
            case 3:
                printf("paga con mercado pago\n");
                printf("con cuantas cuotas vas a pagar(1: recargo 0, 3: reacrgo 4%%, 8,12: recargo 8%%)\n");
                scanf("%d", &cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("no tendras ningun recargo\n");
                    break;
                case 3:
                    printf("tenes un recargo de un 4%%\n");
                    total = total * 1.04;
                    break;
                case 8:
                case 12:
                    printf("tenes un recargo de 8%%\n");
                    total = total * 1.08;
                default:
                    printf("no aceptamos mas cuotas\n");
                    break;
                }
                break;
            case 4:
                printf("paga con cabal\n");
                printf("con cuantas cuotas vas a pagar(1: recargo 0, 3: reacrgo 4%%, 8,12: recargo 8%%)\n");
                scanf("%d", &cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("no tendras ningun recargo\n");
                    break;
                case 3:
                    printf("tenes un recargo de un 4%%\n");
                    total = total * 1.04;
                    break;
                case 8:
                case 12:
                    printf("tenes un recargo de 8%%\n");
                    total = total * 1.08;
                default:
                    printf("no aceptamos mas cuotas\n");
                    break;
                }
                break;
            default:
                printf("no aceptamos ese tipo de tarjeta\n");
                break;
            }
            break;
        default:
            printf("no tenemos otro medio de pago\n");
            break;
        }
        printf("\nResumen de compra:\n");
        printf("DNI: %d\n", dni);
        printf("Medio de pago: %d\n", medioPago);
        printf("Tarjeta utilizada: %d\n", tipoTarjeta);
        printf("Cuotas elegidas: %d\n", cuotas);
        printf("Total a pagar: %d\n", total);
    }
    else
    {
        printf("el dni no es valido\n");
    }
}