#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n, fijo, d;
	float variable1, variable2, variable3, variable4;
	printf("\nBienvenido a tu gasto mensual del agua");
	printf("\n\nQue tipo de pago quieres realizar?\n1.-Pago fijo\n2.-Pago variable\n\n");
	scanf("%d", &d);
	if (d==1)
	{
		fijo=150;
		printf ("\nEl pago total del agua de este mes es de: $%d", fijo);
	}
	else if (d==2)
	{
		printf("\nIngresa cuantos litros de agua usaste este mes:\t");
		scanf("%d", &n);
		if (n<=50)
		{
			variable1=0;
			variable2=0;
			variable3=0;
			variable4=0;
		}
		else if (n>=51 && n<=200)
		{
			variable1=0;
			variable2=(n-50)*(2.5);
			variable3=0;
			variable4=0;
		}
		else if(n<=201 && n<=300)
		{
			variable1=0;
			variable2=(n-50)*2.5;
			variable3=(n-200)*5.8;
			variable4=0;
		}
		else if(n<=301)
		{
			variable1=0;
			variable2=(n-50)*2.5;
			variable3=(n-200)*5.8;
			variable4=(n-300)*10.09;
		}
		printf ("\nEl pago total del agua de este mes es de: $%.2f", variable1+variable2+variable3+variable4);
	}
	else
	{
		printf("\nEsta opcion no es valida");
 	}
 system ("pause=>NULL");
    return 0;
}

