#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d,n,a=1;
    float p,t;
    printf("\nBienvenido a prestamos express");
    printf("\n\nCuantos prestamos realizara?\t");
    scanf("%d",&n);
    while (a<=n)
    {
                printf("\n\nA cuanto aciende su prestamo?\t");
                scanf("%f", &p);
                printf("Elija la tasa de interes anual de su prestamo:\t");
                scanf("%f", &t);
                printf("Por cuantos dias sera dicho prestamo?\t");
                scanf("%d", &d);
                printf("\nEl interes simple es de %.2f%",((p*t*d)/365));
                a+=1;
    }
    system("pause=>NULL");
    return 0;
}
