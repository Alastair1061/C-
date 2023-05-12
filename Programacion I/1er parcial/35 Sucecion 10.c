#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=1,b ;
    printf("\nBienvenido a la sucecion: An=((n-2)(n+4))/(n+3)");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
          b=((a-2)*(a+4))/(a+3);
          printf("\n%d",b); 
          a++;       
    }
 system ("pause=>NULL");
    return 0;
}
