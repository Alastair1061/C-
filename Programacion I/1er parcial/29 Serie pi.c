#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,k=0;
    float sum=0,ar,b,p;
    printf("\nBienvenido al programa que calcula el valor de pi con la siguiente sumatoria:\nSumatoria con k=0 hasta n de (2(-1)^k(3)^(1/2-k))/(2k+1) \n");
    printf("\n\nHasta que termino de la serie quieres?\t");
    scanf("%d",&n);
    while(k<=n)
    {
        p=(0.5)-k;
        ar=2*pow(-1,k)*pow(3,p);
        b=(2*k)+1;
        sum +=ar/b;
        ++k;
    }
    printf("\nLa suma es:%f", sum);
    printf("\n\nEl VALOR DE PI ES:%f", M_PI);
system("pause=>NULL");
return 0;
}
