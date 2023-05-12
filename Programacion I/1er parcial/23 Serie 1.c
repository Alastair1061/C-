#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int n,a=1,f=1;
    float x,b,c;
    printf("\nBienvenido a la serie: 1 + x/1! + x^2/2! + x^3/3!+...+x^n/n!");
    printf("\n\nCual es el valor de x ?\t");
    scanf("%f",&x);
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
          f*=a;
          b=pow(x,a);
          c+=(b/f);
          printf("\n%f",1+c); 
          a++;
    }
 system ("pause=>NULL");
    return 0;
}
