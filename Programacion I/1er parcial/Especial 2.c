#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int n, a=1;
    float b=1;
    printf("\nBienvenido al producto de n=0 hasta m de:\n((2*n)/((2*n)-1))*((2*n)/((2*n)+1))");
    printf("\n\nHasta donde llega el producto?\t");
    scanf("%d",&n);
    while (a<=n)
    {
    b*=((2.0*a)/(2.0*a-1.0))*((2.0*a)/(2.0*a+1.0));
    printf("\n%f",b); 
    a++;
    }
 system ("pause=>NULL");
 return 0;
}
