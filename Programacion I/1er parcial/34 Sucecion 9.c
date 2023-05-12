#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=1,b, c=-3 ;
    printf("\nBienvenido a la sucecion: -3/2, 2/4, 7/8, 12/16, 17/32,...,");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
          b=pow(2,a);
          printf("\n%d/%d",c,b); 
          a++;
          c+=5;       
    }
 system ("pause=>NULL");
    return 0;
}
