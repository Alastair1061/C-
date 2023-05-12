#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,x;
    float a,prom=0,media;
    float v1=0,v;
    srand(time(NULL));
    printf("\nBienvenido al programa que te permitira determinar el tamaño de un conjunto de numeros que pordras ingresar y asi obtener la media y la varianza del conjunto, ademas los numeros por debajo de la media.\nTamaño del arreglo:\t");
    scanf("%d",&n);
    float dato[n];
    for(x=0;x<n;x++){
    printf("Ingresa el numero:\t");
    scanf("%f",&a);
    dato[x]=a;
    prom+=dato[x];}
    media=prom/n;
    for(x=0;x<n;x++)
    {v1+=(dato[x]-media)*(dato[x]-media);}
    v=v1/n;
    printf("\nEsta es la media: %.2f\nEsta es la varianza: %.2f",media,v);
    for(x=0;x<n;x++)
    {if (dato[x]<media){printf("\nEste numero esta por debajo de la media: %.2f",dato[x]);}}
    system("pause==>NULL");
    return 0;
}

    
    
