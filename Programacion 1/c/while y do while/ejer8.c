#include <stdio.h>

void main()
{
    char A, B, C, D, E;
    int Aventa, Bventa, Cventa, Dventa, Eventa;
    int sumaA, sumaB, sumaC, sumaD, sumaE;
    float comisionA, comisionB, comisionC, comisionD, comisionE;
    A = 'A';
    B = 'B';
    C = 'C';
    D = 'D';
    E = 'E';
    sumaA = 0;
    sumaB = 0;
    sumaC = 0;
    sumaD = 0;
    sumaE = 0;


    do
    {
        printf("ingrese las ventas del vendedor %C\n", A);
        scanf("%d", &Aventa);
        if (Aventa == 0){
            printf("no ingreso mas dinero\n");
        }else{
            sumaA = sumaA + Aventa;
        }
    } while (Aventa != 0);
    printf("la suma del vendedor %c es: %d\n", A, sumaA);
    
     do
    {
        printf("ingrese las ventas del vendedor %c\n", B);
        scanf("%d", &Bventa);
        if (Bventa == 0){
            printf("no ingreso mas dinero\n");
        }else{
            sumaB = sumaB + Bventa;
        }
    } while (Bventa != 0);
    printf("la suma del vendedor %c es: %d\n", B, sumaB);

    do
    {
        printf("ingrese las ventas del vendedor %c\n", C);
        scanf("%d", &Cventa);
        if (Cventa == 0){
            printf("no ingreso mas dinero\n");
        }else{
            sumaC = sumaC + Cventa;
        }
    } while (Cventa != 0);
    printf("la suma del vendedor %c es: %d\n", C, sumaC);

    do
    {
        printf("ingrese las ventas del vendedor %c\n", D);
        scanf("%d", &Dventa);
        if (Dventa == 0){
            printf("no ingreso mas dinero\n");
        }else{
            sumaD = sumaD + Dventa;
        }
    } while (Dventa != 0);
    printf("la suma del vendedor %c es: %d\n", D, sumaD);

    do
    {
        printf("ingrese las ventas del vendedor %c\n", E);
        scanf("%d", &Eventa);
        if (Eventa == 0){
            printf("no ingreso mas dinero\n");
        }else{
            sumaE = sumaE + Eventa;
        }
    } while (Eventa != 0);
    printf("la suma del vendedor %c es: %d\n", E, sumaE);

    comisionA = sumaA*0.025;
	comisionB = sumaB*0.025;
	comisionC = sumaC*0.025;
	comisionD = sumaD*0.025;
	comisionE = sumaE*0.025;

    printf("al vendedor %c le corresponde el monto de %.2f\n",A ,comisionA);
    printf("al vendedor %c le corresponde el monto de %.2f\n",B ,comisionB);
    printf("al vendedor %c le corresponde el monto de %.2f\n",C ,comisionC);
    printf("al vendedor %c le corresponde el monto de %.2f\n",D ,comisionD);
    printf("al vendedor %c le corresponde el monto de %.2f\n",E ,comisionE);
}