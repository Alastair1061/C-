#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    printf("Ingrese tres numeros distintos\n");
    scanf("%d  %d  %d",&a, &b, &c);  
    if (a>b && b>c)
       printf("\nEn orden de mayor a menor\n\nPrimero va %d luego %d y al final %d", a, b, c);
    else if (a>c && c>b)
       printf("\nEn orden de mayor a menor\n\nPrimero va %d luego %d y al final %d", a, c, b);
    else if (b>a && a>c)
       printf("\nEn orden de mayor a menor\n\nPrimero va %d luego %d y al final %d", b, a, c); 
    else if (b>c && c>a)
       printf("\nEn orden de mayor a menor\n\nPrimero va %d luego %d y al final %d", b, c, a);
    else if (c>a && a>b)
       printf("\nEn orden de mayor a menor\n\nPrimero va %d luego %d y al final %d", c, a, b);
    else if (c>b && b>a)
       printf("\nEn orden de mayor a menor\n\nPrimero va %d luego %d y al final %d", c, b, a);
    else
       printf("\nError, verifique sus numeros");
    system("pause=>NULL");
    return 0;
}
    
