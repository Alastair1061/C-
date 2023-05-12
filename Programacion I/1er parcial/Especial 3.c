#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int n, a=0;
    float b;
    printf("\nBienvenido a la serie de n=0 hasta m de:\n((-1)^n)/((2*n)+1)");
    printf("\n\nHasta donde llega el producto?\t");
    scanf("%d",&n);
    while (a-1<=n)
    {
    b+=(pow((-1),a))/((2*a)+1);
    printf("\n%f",b);      
    a++;
    }    
 system ("pause=>NULL");
 return 0;
}
