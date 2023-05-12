#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int a=1, n;
    float menos, b;
    printf("\nBienvenido a la sucecion: -2, 4, -8, 16, -32, 64, -128,...");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
         menos=pow((-1),(a));
         b=pow(2,a);
         printf("\n%.0f", menos*b);
         a++;
    }
 system ("pause=>NULL");
    return 0;
}
