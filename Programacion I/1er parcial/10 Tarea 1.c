#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   /// DECLARACION DE VARIABLES
  float ax, ay, bx, by, cx, cy, ab, bc, ca, dx, dy, fx, fy, ex, ey, mab, mbc, mca, barix, bariy, ra, rb, rc, mcx, mcy, max, may, mbx, mby, pmc, pma, pmb, inx, iny, cirx, ciry, radins, radcin, area, ang_a, ang_b, ang_c;
  int v;
   /// INGRESANDO COORDENADAS DE LOS VECTORES
  printf("NOTA IMPORTANTE: El programa puede tener problemas cuando xi=xj o cuando yi=yj");
  printf ("\n\nIngresa las coordenadas del punto a:\n");
  scanf("%f %f", &ax, &ay);
  printf ("\nIngresa las coordenadas del punto b:\n");
  scanf("%f %f", &bx, &by);
  printf ("\nIngresa las coordenadas del punto c:\n");
  scanf("%f %f", &cx, &cy);
   /// Longitud de los lados
  ab= sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
  bc= sqrt(((bx-cx)*(bx-cx))+((by-cy)*(by-cy)));
  ca= sqrt(((cx-ax)*(cx-ax))+((cy-ay)*(cy-ay)));
   /// Área.
  area=((ax*(cy-by))+(cx*(by-ay))+(bx*(ay-cy)))/2;
   /// Ángulos internos.
  ang_a=(acos(((ab*ab)-(bc*bc)-(ca*ca))/((-2)*(bc*ca))))*(180/3.1416);
  ang_b=(acos(((bc*bc)-(ab*ab)-(ca*ca))/((-2)*(ab*ca))))*(180/3.1416);
  ang_c=(acos(((ca*ca)-(ab*ab)-(bc*bc))/((-2)*(bc*ab))))*(180/3.1416);
   /// Puntos medios.
  dx=((fabs(ax))+(fabs(bx)))/2;
  dy=((fabs(ay))+(fabs(by)))/2;
  ex=((fabs(bx))+(fabs(cx)))/2;
  ey=((fabs(by))+(fabs(cy)))/2;
  fx=((fabs(cx))+(fabs(ax)))/2;
  fy=((fabs(cy))+(fabs(ay)))/2; 
   /// Pendientes de las ecuaciones de las rectas de los lados.
  mab=(by-ay)/(bx-ax);
  mbc=(cy-by)/(cx-bx);
  mca=(ay-cy)/(ax-cx);
   /// Lo necesario para las ecuaciones de las bisectrices.
  ra=(ab/ca);
  rb=(bc/ab);
  rc=(ca/bc);
  max=(bx+(ra*cx))/(1+ra);
  may=(by+(ra*cy))/(1+ra);
  mbx=(cx+(rb*ax))/(1+rb);
  mby=(cy+(rb*ay))/(1+rb);
  mcx=(ax+(rc*bx))/(1+rc);
  mcy=(ay+(rc*by))/(1+rc);
  pma=(ay-may)/(ax-max);
  pmb=(by-mby)/(bx-mbx);
  pmc=(cy-mcy)/(cx-mcx);
   /// Baricentro. 
  barix=(ax+bx+cx)/3;
  bariy=(ay+by+cy)/3; 
   /// Incentro.
  inx=((may-(max*pma))-(mby-(mbx*pmb)))/(pmb-pma);
  iny=(may-(max*pma))+((pma)*inx);
   /// Circuncentro.
  cirx=(((dx+(dy*mab))/mab)-((ex+(ey*mbc))/mbc))/((1/mbc)-(1/mab));
  ciry=((ex+(ey*mbc))/mbc)-((1/mbc)*cirx);
   /// Radio de la circunferencia inscrita en el triángulo.
  radins=sqrt(((dx-inx)*(dx-inx))+((dy-iny)*(dy-iny)));
   /// Radio de la circunferencia circunscrita al triángulo.
  radcin=sqrt(((ax-cirx)*(ax-cirx))+((ay-ciry)*(ay-ciry)));
   /// Que tipo de triangulo es:  
   if (ang_a==0 || ang_b==0 || ang_c==0)
        printf("\n\nEste no es un triangulo, las siguientes opciones no aplican\n\n");
   else if (ang_a==ang_b && ang_b==ang_c)
        printf("\n\nEste es un triangulo equilatero\n\n");
   else if (ang_a!=ang_b && ang_b!=ang_c && ang_a!=ang_c)
        printf("\n\nEste es un triangulo escaleno");
   else
        printf("\n\nEste es un triangulo isoseles");
       system ("pause=>NULL");
   ///ELECCION DEL USUARIO 
   printf ("\n\nQue deceas conocer:\n\n1.-Longitud de los lados.\n2.-Area.\n3.-Perimetro.\n4.-Angulos internos.\n5.-Punto medio.\n6.-Ecuaciones de las rectas de los lados.\n7.-Ecuaciones de las mediatrices.\n8.-Ecuaciones de las bisectrices.\n9.-Baricentro.\n10.-Incentro.\n11.-Circuncentro\n12.-Ecuacion de la circunferencia inscrita en el triangulo.\n13.-Ecuacion de la circunferencia circunscrita al triangulo:\n");
   scanf("%d",&v);    
   switch(v)
   {
     case 1:
         printf("\nLas longitudes de los lados son:\nab=%.2f \nbc=%.2f \nca=%.2f", ab, bc, ca); 
         break; 
     case 2:
         printf("\nEl Area del tirangulo es:\t%.2f", area); 
         break;    
     case 3:
         printf("\nEl Perimetro del triangulo es: %.2f", ab+bc+ca);
         break;  
     case 4:
         printf("\nLos Angulos Internos son:\n\n%.2f \n%.2f \n%.2f", ang_a, ang_b, ang_c); 
         break; 
     case 5:
         printf("\nEl punto medio de ab es: (%.2f,%.2f)\nEl punto medio de bc es: (%.2f,%.2f)\nEl punto medio de ca es: (%.2f,%.2f)", dx,dy,ex,ey,fx,fy); 
         break; 
     case 6:
         printf("\nEcuacion de la recta ab: y=(%.2f)+(%.2f)x\nEcuacion de la recta bc: y=(%.2f)+(%.2f)x\nEcuacion de la recta ca: y=(%.2f)+(%.2f)x", ay-(ax*mab), mab, by-(bx*mbc), mbc, cy-(cx*mca), mca);  
         break;
     case 7:
         printf("\nEcuacion de la mediatriz que pasa por ab: y=(%.2f)-(%.2f)x\nEcuacion de la mediatriz que pasa por bc: y=(%.2f)-(%.2f)x\nEcuacion de la mediatriz que pasa por ca: y=(%.2f)-(%.2f)x", (dx+(dy*mab))/mab, 1/mab, (ex+(ey*mbc))/mbc, 1/mbc, (fx+(fy*mca))/mca, 1/mca);  
         break;
     case 8:
         printf("\nEcuacion de la bisectriz que pasa por el vertice a: y=(%.2f)+(%.2f)x\nEcuacion de la bisectriz que pasa por el vertice b: y=(%.2f)+(%.2f)x\nEcuacion de la bisectriz que pasa por el vertice c: y=(%.2f)+(%.2f)x", may-(max*pma), pma, mby-(mbx*pmb), pmb, mcy-(mcx*pmc), pmc); 
         break;
     case 9:
         printf("\nLas coordenadas del Baricentro son: (%.2f,%.2f)", barix, bariy);  
         break;
     case 10:
         printf("\nLas coordenadas del Incentro son: (%.2f,%.2f)", inx, iny);  
         break;
     case 11:
         printf("\nLas coordenadas del Circuncentro son: (%.2f,%.2f)", cirx, ciry);
         break;
     case 12:
         printf("\nLa ecuacion de la circunferencia inscrita es: (x-%.2f)+(y-%.2f)=%.2f", inx, iny, radins);  
         break;
     case 13:
         printf("\nLa ecuacion de la circunferencia circunscrita es: (x-%.2f)+(y-%.2f)=%.2f", cirx, ciry, radcin);  
         break;
     default:
         printf("\nEsta opcion no es valida");
         }                 
    system ("pause=>NULL");
    return 0;
}
