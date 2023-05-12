#include <stdio.h>
#include <stdlib.h>
int main()
{
    int h; 
    float p; 
    printf("\nBienvenido al programa que calcula cuanto ganaras segun cuantas horas trabajaste\nIntroduce la cantidad de horas trabajadas:\t");
    scanf("%d",&h);
    printf("\nItrodusca la cantidad que se paga por hora:\t");
    scanf("%f", &p);
    if(h<=40)
    {
     printf("\nLa cantidad a pagar es:%.2f", h*p);
    }
    else if (h>40)
    {
      printf("\nLa cantidad a pagar es:%.2f", (h%=40)*(3*p/2)+40*p);    
    }
    system("pause=>NULL");
    return 0;
}
