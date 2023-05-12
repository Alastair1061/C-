#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

float IE(float v, float t)
{
    float v1,v2,w;
    v1=pow(v,0.016);
    v2=pow(v,0.16);
    w=(13.12)+(0.6215*t)-(11.37*v2)+(0.3965*t*v1);
    return w;	
}

float IC(float t, float Hr)
{
      float IC;
      t=(1.80*t)+32;
      IC=-(42.379)+(2.04901523*t)+(10.14333127*Hr)-(0.22475541*t*Hr)-(6.83783*0.001*t*t)-(5.481717*0.01*Hr*Hr)+(1.22874*0.001*t*t*Hr)+(8.5282*0.0001*t*Hr*Hr)-(1.99*0.000001*t*t*Hr*Hr);
      return IC;
}

int main()
{
    int n,m,i=0;
    float t,v,hr,*pt,*pv,*phr;
    printf("\t\t\tBienvenido\n\nCuantos datos guardara el programa?\t");
    scanf("%d",&n);
    //system("CLS");
    pt=(float*)malloc(n*sizeof(int));
    pv=(float*)malloc(n*sizeof(int));
    phr=(float*)malloc(n*sizeof(int));
    printf("\n\nAcontinuacion ingresaras la velocidad del viento(m/s), la temperatura(°C) y el porcentaje de la humedad relativa(%).\n");
	for(i=0;i<n;i++)
    {printf("\n\nIngresa los datos:\t");
     scanf("%f %f %f",&v,&t,&hr);
     *(pt+i)=t; *(pv+i)=v; *(phr+i)=hr;}
    //system("CLS");
    do
    {
    printf("\n\nQue datos deceas conocer?\t");
    scanf("%d",&m);
    if(*(pt+m-1)>-100 && *(pt+m-1)<=10)
    {printf("\n\nEl Indice de Enfriamiento es: %f",IE(*(pv+m-1),*(pt+m-1)));}
    else if (*(pt+m-1)>=27 && *(phr+m-1)>=40) 
    {printf("\n\nEl Indice de Calor es: %f",IC(*(pt+m-1),*(phr+m-1)));}  
    else 
    {printf("\n\nEstos datos no me dicen nada c:");}
    //system("pause==>NULL");system("CLS");                  
    }
    while(m!=0);
    system("pause==>NULL");
    return 0;
}

     
