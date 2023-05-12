#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=1, b=3;
    printf("\nBienvenido a la sucecion: 1^3/3^1 ,2^4/4^2 ,3^5/5^3 ,4^6/6^4 ,5^7/7^5 ,...,");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
          printf("\n%d^%d/%d^%d",a,b,b,a); 
          a++; 
          b++;      
    }
 system ("pause=>NULL");
    return 0;
}
