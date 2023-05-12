#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int con=0, a,n,r=0;
    printf("Bienvenido al programa mas interesante de hoy\n");
    printf("Ingresa el numero de sumandos que deceas:\t");
    scanf("%d",&n);
    while (con<n)
    {
    printf("Ingresa un numero entero\t");
    scanf("%d",&a);
       if (((a%2)==0) && a<0)
       {
         con+=1;
         r+=a;
       }
       else
       {
         con+=0;
       }
    }
    printf("\nLa suma es:%d",r);
 system ("pause=>NULL");
 return 0;
}
