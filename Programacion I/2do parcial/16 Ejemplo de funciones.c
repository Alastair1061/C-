#include <stdio.h>
#include <stdlib.h>
#include "divicionyproducto.h"

int suma (int a,int b)//Funcion definida por el usuario
{
 return a+b;   
}
int resta (int a,int b);//Definicion de la funcion prototipo

int main()
{
    int a,b;
    printf("\nValor de a:\t");
    scanf("%d",&a);
    printf("\nValor de b:\t");
    scanf("%d",&b);
    printf("\n\nLa suma es:%d",suma(a,b)/*Llamado a la funcion definida por el usuario 'suma'*/);
    printf("\nLa resta es:%d",resta(a,b)/*Llamado a la funcion prototipo 'resta'*/);
    printf("\nEl producto es:%d",producto(a,b)/*Llamado a la funcion externa 'producto'*/);
    printf("\nLa divicion es:%d",divicion(a,b)/*Llamado a la funcion externa 'divicion'*/);
    system("pause==>NULL");
    return 0;
}
int resta (int a,int b)//Programa de la funcion prototipo
{
 return a-b;   
}
