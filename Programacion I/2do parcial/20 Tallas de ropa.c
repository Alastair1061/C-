#include <stdlib.h>
#include <stdio.h>
//#include "FuncionesP1.h"
float PoE(char op,float a)
{
    float b;
    if (op=='p'){b=a*2.20462;}
    else if (op=='e'){b=a*39.3701;}
    return b;
}
float TSombrero(float p,float e)
{
      float Tsom=(p/e)*2.9;
      return Tsom;    
}
float TSaco (float p, float e, int ed)
{
      float Ts,a,c;
      int b,i;
      b=((ed-30)/10)*10;
      for(i=1;i<1000;i++)
      {if (b==i*10){c=((float)i)/8;break;}}
      Ts=((p*e)/288)+c;
      return Ts;   
}
float TCintura(float p,int ed)
{
      float Tcin,c;
      int i,b;
      b=ed-28;
      for(i=1;i<1000;i++)
      {if(b==i*2){c=((float)i)/10;break;}}
      Tcin=(p/5.7)+c;
      return Tcin;
}
int main ()
{
    float estatura,peso;
    int edad,n,i=1,a;
    float *pso,*psa,*pci;
    printf("\n\t\t\tBienvenido al programa\n\nA continuacion determinaras la cantidad de usuarios, a los cuales despues de    ingresar su peso(Kg), estatura(m) y edad(años), se almacenara su talla de sombrero, de saco y de cintura.\nLuego de ingresar los datos de todos los usuarios, podras consultar la informacion del usuario que elijas.");
    printf("\n\nDe cuantos usuarios se almacenara la informacion?\t");
    scanf("%d",&n);
    system("CLS");
    
    pso=(float*)malloc(n*sizeof(int));
    psa=(float*)malloc(n*sizeof(int));
    pci=(float*)malloc(n*sizeof(int));
    
    for (i=0;i<n;i++)
    {
    printf("\nIngresa peso(Kg), estatura(m) y edad(años) en ese orden:\t");
    scanf("%f %f %d",&peso,&estatura,&edad);
    *(pso+i)=TSombrero(PoE('p',peso),PoE('e',estatura));
    *(psa+i)=TSaco(PoE('p',peso),PoE('e',estatura),edad);
    *(pci+i)=TCintura(PoE('p',peso),edad);
    system("CLS");
    }
    do
    {
    printf("\nDe que usuario deceas conocer los datos?\t");
    scanf("%d",&a);
    if(a<0 || a>n){printf("Usuario no valido");system("pause==>NULL");system("CLS");continue;}
    if (a==0){printf("SE BORRARA LA INFORMACION");system("pause==>NULL");continue;}
    system("CLS");
    printf("\nLos datos de el usuario %d son:",a);
    printf("\nTalla de sombrero=\t%fpulg.",*(pso+a-1));
    printf("\nTalla de saco=\t\t%fpulg.",*(psa+a-1));
    printf("\nTalla de cintura=\t%fpulg.",*(pci+a-1));
    system("pause==>NULL");
    system("CLS");
    }
    while (a!=0);
   
    
    
    
    
    getch();
    return 0;
}
















