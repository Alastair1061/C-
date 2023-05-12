#include<stdlib.h>
#include<stdio.h>

typedef struct R{
    int p, q;
}Q;
Q r;

int ingresavalor(char[3]);
int mcd(int,int);
int simpli(int, int);
void suma(Q,Q);
void resta(Q,Q,char[3]);
void producto(Q,Q);
void cociente(Q,Q,char[3]);
void inverso(Q,char[1]);

int main(){

Q x,y;
int opc;

printf("Este programa te permite sumar, restar, multiplicar o dividir, asi como encontrar los inversos de dos numeros racionales de la forma p/q, con p y q numeros enteros.\nSolo acepta numeros entre el -32,768 y 32,767 y puede fallar con varios numeros cercanos a estos valores.\nNo acepta al cero por comodidad.\n\n");

x.p=ingresavalor("x.p");
x.q=ingresavalor("x.q");
y.p=ingresavalor("y.p");
y.q=ingresavalor("y.q");

if(x.q<0) {x.p*=-1; x.q*=-1;}
if(y.q<0) {y.p*=-1; y.q*=-1;}

printf("\nTus numeros son:\tx=%d",x.p);
if(x.q>1)printf("/%d",x.q);
printf("\ty=%d",y.p);
if(y.q>1)printf("/%d",y.q);

printf("\n\nQue deceas conocer?\n1.-Suma\n2.-Resta x-y\n3.-Resta y-x\n4.-Producto\n5.-Cociente de x/y\n6.-Cociente de y/x\n7.-Inversos de x\n8.-Inversos de y\n0.-Salir\n");

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
    case 7: inverso(x,"x"); break;
    case 8: inverso(y,"y"); break;
    case 0: printf("Fin del programa."); break;
    default: printf("Opcion no valida, intenta otro."); break;
    }
}
while(opc!=0);
return 0;
}

int ingresavalor(char s[3]){
int x;
printf("Ingresa el valor de %s:",s);
do{
    scanf("%d",&x);
    if(x==0)printf("Valor no valido, intenta otro:");
}
while(x==0);
return x;
}

int mcd(int x, int y){
    int r;
    if(x==0) return y;
    if(y==0) return x;
    if(x<0) x*=-1;
    if(y<0) y*=-1;
    while((r=x%y)!=0){
        x=y;
        y=r;
    }
    return y;
}

int simpli(int x, int y){
    return x/mcd(x,y);
}

void suma(Q x, Q y){
    r.p=simpli(x.p*y.q+x.q*y.p,x.q*y.q);
    r.q=simpli(x.q*y.q,x.p*y.q+x.q*y.p);
    printf("La suma es: %d",r.p);
    if(r.q>1)printf("/%d",r.q);
}

void resta(Q x,Q y,char s[3]){
    r.p=simpli(x.p*y.q-x.q*y.p,x.q*y.q);
    r.q=simpli(x.q*y.q,x.p*y.q-x.q*y.p);
    printf("La resta de %s es: %d",s,r.p);
    if(r.q>1)printf("/%d",r.q);
}

void producto(Q x,Q y){
    r.p=simpli(x.p*y.p,x.q*y.q);
    r.q=simpli(x.q*y.q,x.p*y.p);
    printf("El producto es: %d",r.p);
    if(r.q>1)printf("/%d",r.q);
}

void cociente(Q x,Q y,char s[3]){
    r.p=simpli(x.p*y.q,x.q*y.p);
    r.q=simpli(y.p*x.q,y.q*x.p);
    printf("El cociente de %s es: %d",s,r.p);
    if(r.q>1)printf("/%d",r.q);
}

void inverso(Q x, char s[1]){
    r.p=x.p; r.q=x.q;
    printf("El inverso aditivo de %s es: %d",s,-r.p);
    if(r.q>1)printf("/%d",r.q);
    if(r.p<0){ r.p=-r.p; r.q=-r.q;}
    printf("\nEl inverso multiplicativo de %s es: %d",s,r.q);
    if(r.p>1)printf("/%d",r.p);
}
