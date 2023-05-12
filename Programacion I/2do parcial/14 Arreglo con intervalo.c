#include <stdlib.h>
#include <time.h>
//#include <studio.h>
int main ()
{
    int i,n,a,inf,sup;
    printf("\t\t\tBienvenido al programa.\n\nA continuacion determinaras el tamaño del arreglo e ingresaras los datos de este, despues determinaras un intervalo de numeros y el programa te mostrara que datos del arreglo entran y no en el intervalo");
    srand(time(NULL));
    printf("\nTamaño del arreglo:\n");
    scanf("%d",&n);
    int arreglo[n],arreglo2[n],arreglo3[n];
    for(i=0;i<n;i++)
    {printf("Ingresa el dato:\t");
    scanf("%d",&a);
    arreglo[i]=a;}
    printf("\nIntervalo de los numeros:\n");
    scanf("%d",&inf);
    scanf("%d",&sup);
    for(i=0;i<n;i++)
    {arreglo2[i]=0;
    arreglo3[i]=0;}
    for (i=0;i<n;i++)
    {if(arreglo[i]>=inf && arreglo[i]<=sup){arreglo2[i]=arreglo[i];}
    else if(arreglo[i]<inf || arreglo[i]>sup){arreglo3[i]=arreglo[i];}}   
    printf("\n\nOriginal\tDentro\t\tFuera\n");
    for (i=0;i<n;i++)
    {printf("\nDato[%d]=%d\tDato[%d]=%d\tDato[%d]=%d",i+1,arreglo[i],i+1,arreglo2[i],i+1,arreglo3[i]);}
    system("pause==>NULL");
    return 0;
}

    
