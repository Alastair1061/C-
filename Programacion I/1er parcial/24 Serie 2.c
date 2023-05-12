#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int n, con=0;
    float A, B, c, d;
    printf("\nBienvenido a la serie: 1/A + 1/(A+B) + 1/(A+2B) +...+ 1/(A+NB)");
    printf("\n\nCual es el valor de A ?\t");
    scanf("%f",&A);
    printf("\n\nCual es el valor de B ?\t");
    scanf("%f",&B);
    printf("\n\nHasta que termino de la serie quieres?\t");
    scanf("%d",&n);
    while ((con)+1<=n)
    {    
          c=(A+(con*B));
          d+=1/c;
          printf("\n%f",d); 
          con++;
    }
 system ("pause=>NULL");
    return 0;
}
