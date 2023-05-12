#include <stdlib.h>
#include <stdio.h>
int main (){
    int n;
    printf("\nBienvenido al programa que te dira los numeros impares del 1 al 100\n");
    system("pause");
    for(n=1;n<=100;n++)
    {if(n%2==1){printf("\n%d",n);}
    else {continue;}}                                              
    system("pause=>NULL");
    return 0;}
          
