#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,cont=1,b,c,a=0;
    printf("\nBienvenido al programa que dependiendo el numero que ingreses te devolvera una  \n\t\t\t\t''SORPRESA'' \n\n(maximo 2147483647)");
    printf("\n\nIngresa tu numero:\t");
    scanf("%d",&n);
    c=n%10; 
    while(n/10>0)
    {
        n=n/10;
        b=n%10;
        a+=b;
        cont++;
    }
    printf("\nEl numero que ingresaste tiene %d cifras",cont);
    printf("\n\nY la suma de sus cifras es:%d",a+c);
    system("pause=>NULL");
    return 0;
}
