#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=1,b ;
    printf("\nBienvenido a la sucecion: An=((-1)^(n+1))*((n+1)^2)");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
          b=(pow((-1),(a+1)))*(pow((a+1),2));
          printf("\n%d",b); 
          a++;       
    }
 system ("pause=>NULL");
    return 0;
}
