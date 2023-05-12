#include<stdlib.h>
#include<stdio.h>
#include<math.h>

typedef struct Complejos{
    float a,b;
}C;
C r,x,y;

float ingresavalor(char[2]);
void suma(C,C);
void resta(C,C,char[3]);
void producto(C,C);
void cociente(C,C,char[3]);
void inverso(C,char[1]);
void raiz(C,char[1]);
void negativo(float);

int main(){

 int opc;

printf("Este programa te permite sumar, restar, multiplicar o dividir, asi como encontrar la raiz cuadrada o los inversos multiplicativos y aditivos de dos números complejos de la forma a+bi con a y b numeros reales.\n\n");

printf("Ingresa el valor de a1 ");
scanf("%f",&x.a);
if(x.a==0)x.b=ingresavalor("b1");
else{
	printf("Ingresa el valor de b1 ");
	scanf("%f",&x.b);
}
printf("Ingresa el valor de a2 ");
scanf("%f",&y.a);
if(y.a==0)y.b=ingresavalor("b2");
else{
	printf("Ingresa el valor de b2 ");
	scanf("%f",&y.b);
}

printf("\nTus numeros son:\tx= %.2f",x.a);
negativo(x.b);
printf("\ty= %.2f",y.a);
negativo(y.b);

printf("\n\nQue deceas conocer?\n1.-Suma\n2.-Resta x-y\n3.-Resta y-x\n4.-Producto\n5.-Cociente de x/y\n6.-Cociente de y/x\n7.-Raiz cuadrada de x\n8.-Raiz cuadrada de y\n9.-Inversos de x\n10.-Inversos de y\n0.-Salir");

do{
printf("\n");
scanf("%d",&opc);

switch(opc){

    case 1: suma(x,y); break;
    case 2: resta(x,y,"x-y"); break;
    case 3: resta(y,x,"y-x"); break;
    case 4: producto(x,y); break;
    case 5: cociente(x,y,"x/y"); break;
    case 6: cociente(y,x,"y/x"); break;
    case 7: raiz(x,"x"); break;
    case 8: raiz(y,"y"); break;
    case 9: inverso(x,"x"); break;
    case 10: inverso(y,"y"); break;
    case 0: printf("Fin del programa."); break;
    default: printf("Opcion no valida, intenta otro."); break;
    }
}
while(opc!=0);
return 0;
}
float ingresavalor(char s[2]){
float x;
printf("Ingresa el valor de %s: ",s);
do{
    scanf("%f",&x);
    if(x==0)printf("Valor no valido, intenta otro:");
}
while(x==0);
return x;
}
void suma(C x, C y){
	r.a=x.a+y.a;
	r.b=x.b+y.b;
    printf("La suma es: %.2f",r.a);
    negativo(r.b);
}
void resta(C x,C y,char s[3]){
	r.a=x.a-y.a;
	r.b=x.b-y.b;
    printf("La resta de %s es: %.2f",s,r.a);
    negativo(r.b);
}
void producto(C x,C y){
	r.a=x.a*y.a-x.b*y.b;
	r.b=x.a*y.b+x.b*y.a;
    printf("El producto es: %.2f",r.a);
    negativo(r.b);
}
void cociente(C x,C y,char s[3]){
	r.a=(x.a*y.a+x.b*y.b)/(y.a*y.a+y.b*y.b);
	r.b=(x.b*y.a-x.a*y.b)/(y.a*y.a+y.b*y.b);
    printf("El cociente de %s es: %.2f",s,r.a);
    negativo(r.b);
}
void inverso(C x, char s[1]){
    printf("El inverso aditivo de %s es: %.2f",s,-x.a);
    negativo(-x.b);
    r.a=x.a/(x.a*x.a+x.b*x.b);
    r.b=-x.b/(x.a*x.a+x.b*x.b);
    printf("\nEl inverso multiplicativo de %s es: %.2f",s,r.a);
    negativo(r.b);
    }
void raiz(C x, char s[1]){
	r.a=sqrt((x.a+(sqrt(x.a*x.a+x.b*x.b)))/2);
    r.b=sqrt((-x.a+(sqrt(x.a*x.a+x.b*x.b)))/2);
	printf("La raiz cuadrada de %s es: %.2f",s,r.a);
	if(x.b>=0)negativo(r.b);
    else negativo(-r.b);
}
void negativo(float x){
	if(x>0) printf("+%.2fi",x);
	else {
        if(x<0) printf("-%.2fi",-x);
    }
}
