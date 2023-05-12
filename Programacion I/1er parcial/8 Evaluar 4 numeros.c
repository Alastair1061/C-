#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    printf("ingresa 4 numeros:\n\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if ((a>b && b>c)&&(c>d))
       printf ("\nEl numero mas pequeño es %d",d);
    else if ((a>b && b>d)&&(d>c))
       printf ("\nEl numero mas pequeño es %d",c);
    else if ((a>c && c>b)&&(b>d))
       printf ("\nEl numero mas pequeño es %d",d);
    else if ((a>c && c>d)&&(d>b))
       printf ("\nEl numero mas pequeño es %d",b);
    else if ((a>d && d>b)&&(b>c))
       printf ("\nEl numero mas pequeño es %d",c);
    else if ((a>d && d>c)&&(c>b))
       printf ("\nEl numero mas pequeño es %d",b);
    else if ((b>a && a>c)&&(c>d))
       printf ("\nEl numero mas pequeño es %d",d);
    else if ((b>a && a>d)&&(d>c))
       printf ("\nEl numero mas pequeño es %d",c);
    else if ((b>c && c>a)&&(a>d))
       printf ("\nEl numero mas pequeño es %d",d);
    else if ((b>c && c>d)&&(d>a))
       printf ("\nEl numero mas pequeño es %d",a);
    else if ((b>d && d>a)&&(a>c))
       printf ("\nEl numero mas pequeño es %d",c);
    else if ((b>d && d>c)&&(c>a))
       printf ("\nEl numero mas pequeño es %d",a);
    else if ((c>b && b>a)&&(a>d))
       printf ("\nEl numero mas pequeño es %d",d);
    else if ((c>b && b>d)&&(d>a))
       printf ("\nEl numero mas pequeño es %d",a);
    else if ((c>a && a>b)&&(b>d))
       printf ("\nEl numero mas pequeño es %d",d);
    else if ((c>a && a>d)&&(d>b))
       printf ("\nEl numero mas pequeño es %d",b);
    else if ((c>d && d>b)&&(b>a))
       printf ("\nEl numero mas pequeño es %d",a);
    else if ((c>d && d>a)&&(a>b))
       printf ("\nEl numero mas pequeño es %d",b);
    else if ((d>b && b>c)&&(c>a))
       printf ("\nEl numero mas pequeño es %d",a);
    else if ((d>b && b>a)&&(a>c))
       printf ("\nEl numero mas pequeño es %d",c);
    else if ((d>c && c>b)&&(b>a))
       printf ("\nEl numero mas pequeño es %d",a);
    else if ((d>c && c>a)&&(a>b))
       printf ("\nEl numero mas pequeño es %d",b);
    else if ((d>a && a>b)&&(b>c))
       printf ("\nEl numero mas pequeño es %d",c);
    else if ((d>a && a>c)&&(c>b))
       printf ("\nEl numero mas pequeño es %d",b);
    system("pause=>NULL");
    return 0;
}
    
