#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, a=1,b=3,c;
    printf("\nBienvenido a la sucecion: 1331, 2442, 3553, 4664, ...");
    printf("\n\nCuantos terminos de la sucecion quieres?\t");
    scanf("%d",&n);
    while (a<=n)
    {    
         printf("\n%d%d%d%d",a,b,b,a); 
         a++;
         b++; 
    }
 system ("pause=>NULL");
    return 0;
}
