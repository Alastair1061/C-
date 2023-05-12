#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op, opc, rad, opcu, lcua, opr, br, ar, opt, bt, at, l1, l2, l3;
    printf("\nBienvenido");
    printf("\nElige una de entre las siguientes opciones");
    printf("\n\n1.-Circulo\n2.-Cuadrado\n3.-Rectangulo\n4.-Triangulo\n\n");
    scanf("%d",&op);
    switch (op)
      {
         case 1:
              printf("\nElige una de entre las siguientes opciones"); 
              printf("\n\n1.-Area\n2.-Perimetro\n\n");
              scanf("%d",&opc);
              if (opc==1)
              {
                 printf("Ingresa el radio de tu circulo\t");
                 scanf("%d",&rad);
                 printf("\nEl Area de tu circulo es:%.2f",(3.1416)*(pow(rad,2)));
                 }
              else if (opc==2)
              {   
                 printf("Ingresa el radio de tu circulo\t");
                 scanf("%d",&rad);
                 printf("\nEl Perimetro de tu circulo es:%.2f",(3.1416)*(rad*2));
                 }
              else
              {
                  printf("Esta opcion no es valida");
                  }
          break;
         case 2: 
              printf("\nElige una de entre las siguientes opciones"); 
              printf("\n\n1.-Area\n2.-Perimetro\n\n");
              scanf("%d",&opcu);
              if (opcu==1)
              {
                 printf("Ingresa cuanto mide cualquier lado de tu cuadrado\t");
                 scanf("%d",&lcua);
                 printf("\nEl Area de tu cuadrado es:%.2f", 4*lcua);
                 }
              else if (opcu==2)
              {
                 printf("Ingresa cuanto mide cualquier lado de tu cuadrado\t");
                 scanf("%d",&lcua);
                 printf("\nEl Perimetro de tu cuadrado es:%.2f", lcua*lcua);
                 }
              else
              {
                  printf("Esta opcion no es valida");
                  }
              break;
         case 3:  
              printf("\nElige una de entre las siguientes opciones"); 
              printf("\n\n1.-Area\n2.-Perimetro\n\n");
              scanf("%d",&opr);
              if (opr==1)
              {
                 printf("Ingresa cuanto mide La base de tu rectangulo\t");
                 scanf("%d",&br);
                 printf("Ingresa cuanto mide la altura de tu rectangulo\t");
                 scanf("%d",&ar);
                 printf("\nEl Area de tu rectangulo es:%.2f", br*ar);
                 }
              else if (opr==2)
              {
                 printf("Ingresa cuanto mide La base de tu rectangulo\t");
                 scanf("%d",&br);
                 printf("Ingresa cuanto mide la altura de tu rectangulo\t");
                 scanf("%d",&ar);
                 printf("\nEl Perimetro de tu rectangulo es:%.2f", (2*ar)+(2*br));
                 }
              else
              {
                  printf("Esta opcion no es valida"); 
                  }
              break;                                                                                                                                                          
         case 4:
              printf("\nElige una de entre las siguientes opciones"); 
              printf("\n\n1.-Area\n2.-Perimetro\n\n");
              scanf("%d",&opt);
              if (opt==1)
              {
                 printf("Ingresa cuanto mide La base de tu triangulo\t");
                 scanf("%d",&bt);
                 printf("Ingresa cuanto mide la altura de tu triangulo\t");
                 scanf("%d",&at);
                 printf("\nEl Area de tu triangulo es:%.2f", (bt*at)/2);
                 }
              else if (opt==2)
              {
                 printf("Ingresa la longitud de los lados de tu triangulo\n\n");
                 scanf("%d %d %d",&l1, &l2, &l3);
                 printf("\nEl Perimetro de tu triangulo es:%.2f", l1+l2+l3);
                 }
              else
              {
                  printf("Esta opcion no es valida"); 
                  }
              break;         
         default: 
              printf("Esta opcion no es valida");
      }
          
    system("pause=>NULL");
    return 0;
}
