#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=0, b=0, c=0;
    printf("\nBienvenido a la serie de que determina tu numero al cuadrado con puras sumas");
    printf("\n\nIngresa tu numero:\t");
    scanf("%d",&n);
    while ((a+1)<=n)
    {
    b=(2*a)+1;
    c+=b;
    a++;
    }    
    printf("\nTu numero al cuadrado es: %d",c);   
 system ("pause=>NULL");
    return 0;   
}
