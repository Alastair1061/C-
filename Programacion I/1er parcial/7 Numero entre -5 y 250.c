#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a;
    printf("ingrese un numero entre -5 y 250:\t");
    scanf("%d",&a);
    if (a>=-5 && a<=250)
       printf("\nEste numero cumple la condicion");
    else if (a<-5 || a>250)
       printf("\nEste numero no cumple la condicion");      
    system("pause=>NULL");
    return 0;
}
    
