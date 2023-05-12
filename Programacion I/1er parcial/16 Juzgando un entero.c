#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("\nBienvenido al programa que juzgara el numero que ingreses");
    printf("\nCualquier numero entero y de preferencia que no revase los 10 digitos");
    printf("\n\nIngresa tu numero\t");
    scanf("%d",&a);
    switch (a%10)
      {
         case 2:
         case 5: 
         case 8:                                                                                              
              printf("\nEl cuadrado de tu numero es: %d", pow (a,2)); 
              break;                                                               
         case 4:
         case 7:
         case 9:
              printf("\nTu numero multiplicado por 5 es: %d", 5*a);
              break;
         default: 
              printf("\nTu numero es %d :D", a);
      }
    system("pause=>NULL");
    return 0;
}
