
/*Desarrolle un programa que determine el pago bruto de cada uno de los empleados.
 La empresa paga horas completas por las primeras 40 horas trabajadas por cada empleado y 
paga hora y media por todas las horas extras trabajadas después de las 40.(diapositiva 48)
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int h; //horas de pago
	float p; //pago por hora 
	printf("\n\nPROGRAMA PARA CALCULAR EL PAGO POR EMPLEADO\n\n");
	printf("\n\nIntrodusca la cantidad de horas trabajadas (no se cuentan los minutos u horas incompletas):\n\n");
	scanf("%d",&h);
	printf("\n\nItrodusca la cantidad que se paga por hora:\n\n");
	scanf("%f", &p);
	if(h<=40)
	{
	 printf("\n\nLa cantidad a pagar es:%f\n\n", h*p);
	}
	else if (h>40)
	{
	  printf("\n\nLa cantidad a pagar es:%f\n\n", (h%=40)*(3*p/2)+40*p);	
	}
	
	system("pause=>NULL");
	return 0;
}
