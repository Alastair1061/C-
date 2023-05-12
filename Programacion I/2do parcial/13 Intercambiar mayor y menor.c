#include <stdlib.h>
#include <time.h>
//#include <studio.h>
int main ()
{
    int i,j,n,temp,mayor,menor,a,b,inf,sup;
    printf("\t\t\tBienvenido al programa.\n\nA continuacion determinaras el tamaño del arreglo de datos aleatorios con el quetrabajaremos, e intercambiaremos las pociciones de los numeros mayores y menores");
    srand(time(NULL));
    scanf("%d",&n);
    printf("Elige el rango de los numeros aleatorios\n");
    scanf("%d",&inf);
    scanf("%d",&sup);
    int arreglo[n],acomodado[n];
    for (i=0;i<n;i++)
    {arreglo[i]=inf+(rand()%(sup-inf+1));}
    for (i=0;i<n;i++)
    {printf("\n%d = %d",i+1,arreglo[i]);}
    for (i=0;i<n;i++)
    {acomodado[i]=arreglo[i];}
    for(i=0;i<n;i++){
    for(j=i;j<n;j++){
    if(acomodado[i]<acomodado[j]){
    temp=acomodado[i];
    acomodado[i]=acomodado[j];
    acomodado[j]=temp;}}}
    mayor=acomodado[0];
    menor=acomodado[n-1];
    for (i=0;i<n;i++)
    {if(arreglo[i]==mayor){arreglo[i]=menor;}
    else if(arreglo[i]==menor){arreglo[i]=mayor;}}   
    printf("\n\nDigitos mayor y menor intercambiados\n");
    for (i=0;i<n;i++){
    if(arreglo[i]==mayor){printf("\n%d = %d    cambio",i+1,arreglo[i]);}
    else if(arreglo[i]==menor){printf("\n%d = %d    cambio",i+1,arreglo[i]);}
    else {printf("\n%d = %d",i+1,arreglo[i]);}}
    system("pause==>NULL");
    return 0;
}
    
