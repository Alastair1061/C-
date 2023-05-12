#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=1,b=0 ;
    printf("\nBienvenido a la sucecion: 1, 3, 6, 10, 15, 21, 28, 36, 45,...,n");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
          b+=a;
          printf("\n%d",b); 
          a++;       
    }
 system ("pause=>NULL");
    return 0;
}

