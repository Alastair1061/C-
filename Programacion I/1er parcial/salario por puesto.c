/*Una empresa paga a sus empleados como sigue:
Gerentes (quienes reciben un salario semanal fijo)
Empleados por hora (quienes reciben una paga fija por la primeras 40 horas,
 y hora y media por las horas extras trabajadas, es decir, 1.5 veces su salario por hora)
Empleados por comisión (quienes reciben $3,000.00 más 6.5% de sus ventas brutas semanales)
Empleados por destajo (quienes reciben un monto fijo de dinero por cada elemento que 
producen, cada empleado por destajo trabaja solo en un tipo de pieza). 
Cada tipo de empleado tiene su propio código. Elabore un programa que calcule el salario de los empleados. 
(diapositiva 49)*/
//gerente 201
//empelado por hora 102
//empleados por comision 102,
//empleados por destajo 103
//todos los empleados tiene tu tipo de codigo 


#include <stdio.h>
#include <stdlib.h> //("\n\n\n\n");
#include <math.h>

int main()
{
	float g,eh,ven,com,pz;//g=PAGO del gerente, empleado hora, ventas, comision
	int c,s,h,e;//c=codigos=semanas a pagar
	printf("\n\nSALARIO DE EMPLEADOS DEPENDIENDO SU PUESTO\n\n");
	printf("\ncodigo");
	printf("\n201.  Gerente\n101.  Empleado por hora\n102.  Empleado por comision \n103.  Empleado por destajo");
	printf("\n\nIntrodusca el codido del empleado para calcular su salario:\n\n");
	scanf("%d",&c);
	switch (c) 
	{
	case 201:
		printf("\n\t\t\tGERENTE\n\nIntrodusca el salio que se paga por semana\n");
		scanf("%f",&g);
		printf("Introdusca cuantas semanas se  pagaran;\n ");
		scanf("%d",&s);
		printf("\nEl salario a pagar es%f\n",s*g);
		break;
	case 101:
		printf("\n\n\t\tEMPELADO POR HORA\n\nIndrodusca el pago por hora:\n");
		scanf("%f",&eh);
		printf("\nIntrodusca la cantidad de horas a pagar(no se cuentan horas imcompletas o minutos):\n");
		scanf("%d",&h);
		if(h<=40)
		{
		 printf("\nEl salario a pagar es:%f\n",eh*h);	
		}
		else if (h>40)
		{
		 printf	("\nEl salario a pagar es:%f\n",(h%=40)*(3*eh/2)+40*eh);
		}
		break;
		
	case 102:
		printf("\n\tEMPLEADO POR COMISION\n\nIntrodusca la cantidad total de ventas (en pesos):\n");
		scanf("%f",&ven);
		com=(0.065*ven);
	    if (ven>0)
    	printf("\n\nEl total de su comision es:%f\n\n", com);
	    if(ven>0)
	    printf("\n\nEl total de su ingreso es: %f\n\n", (3000+com) );
	    else if (ven<0)
	    printf("\n\n\Si la cantidad a continuacion  es negativa tiene que pagarla\n\nEl total de su ingreso es :%f\n\n",3000- fabs(ven) );
	
	else 
	printf("\n\nSu ingreso total es de $3000 \n\n");
	break;
		
	case 103:
	printf ("\n\n\tEMPLEADO POR DESTAJO\nIntrodusca el numero de elementos vendidos,recuerde que debe ser solo de un tipo\n");
	scanf("%d",&e);
	printf("\n\nIntroduce el precio por pieza o elementos:\n");
	scanf("%f",&ven);
	printf("La cantidad a pagar es:%f", e*ven);
	
	break;	
	}
	
	
    system("pause>=NULL");
	return 0;
}
