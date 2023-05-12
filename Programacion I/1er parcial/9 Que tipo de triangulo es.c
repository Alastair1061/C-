#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    printf ("\nIntroduzca las 3  longitudes  de los lados de un tringulo \n\n");
    scanf("%d %d %d", &a, &b, &c);
    if ( a==b && a==c && b==c)
            printf("\nEs un tringulo equilatero");    
    else if (a==b && a!=c || a==c && b!=c || b==c && a!=b)
            printf("\nEs un tringulo isosceles");      
    else
         printf ("\nEs un tringulo escaleno");        
    system ("pause=>NULL");
    return 0;
}
