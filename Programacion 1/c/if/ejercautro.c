#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("ingrese los valore de los tres numeros\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1>num2 && num1>num3){
        printf("el numero mayor es %d\n", num1);
    }else if (num2>num1 && num2>num3){
        printf("el numero mayor es %d\n", num2);
    }else if (num3>num1 && num3>num2){
        printf("el numero mayor es %d\n", num3);
    }else {
        printf("hay dos numero iguales\n");
    }
    system("pause");

    return 0;
}