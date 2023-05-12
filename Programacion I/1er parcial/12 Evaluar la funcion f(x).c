#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float x;
	printf("Bienvenido al programa que evaluara la funcion f(x) por ti\n\nf(x)=x^2-x si x<=0\nf(x)=3x-x^2 si x>0");
	printf("\n\nIngresa el valor de x que quieres asignar a la funcion:\t");
	scanf("%f", &x);
	if (x<=0)
  	     printf("\nf(x)=%.2f",(pow(x,2))-x);
	else
         printf("\nf(x)=%.2f",3*x-(pow(x,2)));
 system ("pause=>NULL");
 return 0;
}

