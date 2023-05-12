#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Ingrese un numero\n\n");
    scanf("%d",&a);   
    if (a>100 && (a%2)==0)
       printf("\nEste numero es par");
    else if ((a>100) && (a%2)==1)
       printf("\nEste numero es impar");   
    else if (a<=100)
       printf("\n¡ERROR!");   
    system("pause=>NULL");
    return 0;
}
    
