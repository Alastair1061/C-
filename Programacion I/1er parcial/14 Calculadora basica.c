#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b;
    char op;
    printf("\nBienvenido a tu calculadora basica");
    printf("\n\nIntroduce un numero\t");
    scanf("%f",&a);
    printf("\nIntroduce otro numero\t");
    scanf("%f",&b);
    printf("\nQue operacion quieres realizar\nSuma=+\nResta=-\nProducto=*\nDivicion=/\nResiduo=%\n");
    fflush(stdin);
    scanf("%c",&op);
    switch (op)
      {
         case '+':                                                                                               
              printf("\nLa suma es: %.2f", a+b); 
               break;                                                               
         case '-':
               printf("\nLa resta es: %.2f", a-b);
               break;
         case '*':
               printf("\nEl producto es: %.2f", a*b);
                break;
         case '/':
               printf("\nLa divicion es: %.2f", a/b);
                break;
         case '%':
              printf("\nEl residuo es: %d", ((int)a)%((int)b));
              break;
         default: 
          printf("Esta opcion no es valida");
      }
    system("pause=>NULL");
    return 0;
}
