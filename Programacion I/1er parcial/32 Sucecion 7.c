#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=35,b=1;
    printf("\nBienvenido a la sucecion: 2/35, 4/31, 6/27, 8/23, 10/19,...,");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (b<=n)
    {    
          printf("\n%d/%d",2*b,a); 
          a+=-4; 
          b++;      
    }
 system ("pause=>NULL");
    return 0;
}
