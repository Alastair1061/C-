#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Ingrese un numero entre 3 y 159\n\n");
    scanf("%d",&a);   
    if (a>=3 && a<=159)
       printf("\nEste numero cumple la condicion");
    else if (a<3 || a>159)
       printf("\nEste numero no cumple la condicion");      
    system("pause=>NULL");
    return 0;
}
    
