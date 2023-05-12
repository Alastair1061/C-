#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
int diez(int x)
{    
    int diez=1,n;
    for(n=1;n<=x;n++)
    {diez*=10;}
    return diez;
}    
 
int AleatorioConXCifras(int x)
{
    int n,a=0,b;
    srand(time(NULL));
    a=(1+(rand()%9))*diez(x-1);
    for(n=0;n<(x-2);n++)
    {b=(rand()%10)*diez(n);a+=b;}
    return a;
}

int main ()
{
    int n,m,x,arreglo[1000],i,b,a=0;
    printf("\n\t\t\tBienvenido al programa\nA continuacion ingresaras el tamaño del arreglo que se imprimira, seguido de el numero de digitos (1-5) de cada dato aleatorio del arreglo:\n\n");
    scanf("%d %d",&m,&x);
    printf("\nLos datos del arreglo son:\n");
    srand(time(NULL));
    for (i=0;i<m;i++)
    {a=(1+(rand()%9))*diez(x-1);
     for(n=0;n<(x-2);n++)
     {b=(rand()%10)*diez(n);
      a+=b;}
     arreglo[i]=a;
     printf("\ndato%d=\t%d",i+1,arreglo[i]);}
    getch();
    return 0;
}
