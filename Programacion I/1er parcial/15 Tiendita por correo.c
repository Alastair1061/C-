#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("\nBienvenido a tu tiendita por correo");
    printf("\n\nA continuacion se te muestra un a lista de nuestros productos:");
    printf("\n\n1.-Libros\n2.-Libretas\n3.-Lapices\n4.-Escuadras\n5.-Transportadores");
    printf("\n\nIngresa la opcion del precio que deceas conocer\t");
    scanf("%d",&a);
    switch (a)
      {
         case 1:
              printf("\nEl precio de los libros es de:$32.98"); 
              break;
         case 2: 
              printf("\nEl precio de las libretas es de:$14.50"); 
              break;
         case 3:  
              printf("\nEl precio de los lapices es de:$0.90"); 
              break;                                                                                                                                                          
         case 4:
              printf("\nEl precio de las escuadras es de:$5.80"); 
              break;
         case 5:
              printf("\nEl precio de los transportadores es de:$2.45"); 
              break;
         default: 
              printf("Esta opcion no es valida");
      }
    system("pause=>NULL");
    return 0;
}
