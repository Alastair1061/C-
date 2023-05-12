#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=1,c=2;
    printf("\nBienvenido a la sucecion: 4, 8, 10, 20, 22, 44, ...");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
         if (a%2==1)
         {
         c+=2;
          }
         else if (a%2==0)
         {
         c*=2;
          }
         printf("\n%d",c); 
         a++;
    }
 system ("pause=>NULL");
    return 0;
}
