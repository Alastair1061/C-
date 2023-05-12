#include <stdlib.h>
#include <stdio.h>
int main (){
    int a,b=1,c=0,d=1,n=1;
    printf("\nBienvenido al programa sobre los numeros perfectos.\n\nUn numero perfecto es un entero natural que es igual a la sumatoria de sus divisores propios positivos, excluyendo al propio numero.\n\nSi quieres que este programa determine por ti los 4 primeros numeros perfectos, solo presiona cualquier tecla.\n");
    system("pause=>NULL");
    printf("\nLos primeros 4 numeros perfectos son:"); 
    while (n<=4) 
    {while (d<b)
    {     if(b%d==0) {a=d;} 
          else {a=0;}
          c+=a;
          if (d==(b-1))
          {if(c==b)
          {printf("\n%d",c); n+=1;}}  
          d++;                                              }
    c=0; d=1; b++;                                                              }
    system("pause=>NULL");
    return 0;}
          
