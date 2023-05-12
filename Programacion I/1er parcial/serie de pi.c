/*calcular el valor aproximado de la constante Pi a través del calculo de n 
términos de la serie  pi=(2(-1)^k(3)^(1/2-k))/(2k+1) con k=0 hasta infinito 
(diapositiva 52)*/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n,k=0;
	float sum=0,ar,b,p;
	printf("\nSUMATORIA (2(-1)^k(3)^(1/2-k))/(2k+1)=pi con k=0 hasta infinito\n");
	printf("\n\nIntroduce la cantidad de terminos que desea obtener de la sumatoria:\n");
	scanf("%d",&n);
	
	while(k<=n)
	{
		p=(0.5)-k;
		ar=2*pow(-1,k)*pow(3,p);
		b=(2*k)+1;
		sum +=ar/b;
		++k;
	}
	printf("\nLa suma es:%f\n", sum);
	printf("\n\nEl VALOR DE PI ES:%f\n\n", M_PI);
	
return 0;
}
