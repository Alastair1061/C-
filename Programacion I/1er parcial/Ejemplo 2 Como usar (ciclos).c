#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, a=1, b=1 ;
    printf("\nBienvenido a la sucecion: 1, 2/4, 3/9, 4/16, 5/25, 6/36, ..., n/n^2");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {
               
          printf("\n%d/%d",a,(pow(b,2))); 

          b++;
          a++;       
    }
 system ("pause=>NULL");
    return 0;
    
}
