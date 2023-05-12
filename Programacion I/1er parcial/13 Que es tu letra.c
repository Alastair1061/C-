#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char evaluado;
	printf("Quieres que adivine que tipo de letra ingresaste??\n(SOLO UNA)");
	printf("\n\nIngresa tu letra:\t");
	scanf("%c", &evaluado);
	if ((evaluado>=65 && evaluado<=90) || (evaluado>=97 && evaluado<=122) )
	{
		if (evaluado=='a' || evaluado=='e' || evaluado=='i' || evaluado=='o' || evaluado=='u' || evaluado=='A' || evaluado=='E' || evaluado=='I' || evaluado=='O' || evaluado=='U')
			printf("\nTu letra es una Vocal :)");
		else 
			printf("\nTu letra es una Consonante :)");
	} 
	else 
		printf("\nEsta no es una letra :(");		
 system ("pause=>NULL");
 return 0;
}

