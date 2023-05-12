#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=3,b=3,c;
    printf("\nBienvenido a la sucecion geométrica: 95, 167, 259, 3611, 4913,...");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while ((a-2)<=n)
    {    
         c=pow(a,2);
         b+=2;
         printf("\n%d%d",c,b); 
         a++; 
    }
 system ("pause=>NULL");
    return 0;
}
