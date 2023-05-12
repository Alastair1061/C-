#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Ingrese un numero para juzgarlo\t\t");
    scanf("%d",&a);
    if (a==0)
            printf("\nEste numero es igual a cero");
    else if(a<0)
            printf("\nEste numero es menor que cero");
    else if (a>0)
            printf("\nEste numero es mayor que cero");  
    system("pause=>NULL");
    return 0;
}
    

