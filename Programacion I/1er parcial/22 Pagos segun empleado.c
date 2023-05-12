#include <stdio.h>
#include <stdlib.h> 
int main()
{
 float g,eh,ven,com,pz;
 int c,s,h,e;
 printf("\nBienvenido al programa que le dira cuanto gano esta semana\nIntroduce que tipo de empleado es para calcular su salario:\n\n1.-Gerente\n2.-Empleado por hora\n3.-Empleado por comision\n4.-Empleado por destajo\n");
 scanf("%d",&c);
    switch (c) 
    {
    case 1:
        printf("\n\nIntroduce el salario que se paga por semana:\t");
        scanf("%f",&g);
        printf("\nIntroduce cuantas semanas se  pagaran:\t");
        scanf("%d",&s);
        printf("\nEl salario a pagar es:%.2f\n",s*g);
        break;
    case 2:
        printf("\nIndroduce el pago por hora:\t");
        scanf("%f",&eh);
        printf("Introduce la cantidad de horas COMPLETAS a pagar:\t");
        scanf("%d",&h);
        if(h<=40)
        {
         printf("\nEl salario a pagar es:%.2f",eh*h);   
        }
        else if (h>40)
        {
         printf ("\nEl salario a pagar es:%.2f\n",(h%=40)*(3*eh/2)+40*eh);
        }
        break;
    case 3:
        printf("\n\nIntroduce la cantidad total de ventas (en pesos):\t");
        scanf("%f",&ven);
        com=(0.065*ven);
        printf("\nEl total de su comision es:%.2f",com);
        printf("\nEl total de su ingreso es: %.2f",3000+com);
    case 4:
        printf("\n\nIntroduce la cantidad de elementos producidos:\t");
        scanf("%d",&e);
        printf("Introduce el precio por pieza o elementos:\t");
        scanf("%f",&ven);
        printf("\nLa cantidad a pagar es:%.2f",e*ven);
        break;  
    default:
        printf("Esta opcion no es valida");
    }
    system("pause>=NULL");
    return 0;
}
