#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a;
    int fijo;
    printf("\nBienvenido al programa que le dice cuanto ganara esta semana segun sus ventas");
    printf("\n\nA cuanto acienden sus ventas semanales?\t");
    scanf("%f",&a);
    fijo=200;
    printf("\nEsta semana sus ingresos acienden a $%.2f", (fijo+(0.09*a)));
    system("pause=>NULL");
    return 0;
}
