#include<stdlib.h>
#include<stdio.h>

struct primo{
    long valor;
    struct primo *sig;
};
struct primo *raiz_primo=NULL;

struct factor{
    long valor;
    struct factor *sig;
};
struct factor *raiz_factor=NULL;

void ingresa_primo(long);
void ingresa_factor(long);
void nuevo_primo(int,int);
void mostrar_factores(long);
long compara(long,long);

int main(){

long a,b,n,N;
int k=1;

printf("Tarea A / Problema 5\nIngresa 2 numeros enteros y este programa encontrara los factores primos del numero que resulte al sumar los cuadrados de los numeros que ingresaste (n=a^2+b^2).\n");
printf("No esta permitido el numero 0 ni que n sea mayor a 2,000,000\n");
printf("\nIngresa el valor de a= ");
do{
    scanf("%ld",&a);
    if(a==0) printf("\nValor no valido, intenta otro: ");
}
while(a==0);
printf("\nIngresa el valor de b= ");
do{
    scanf("%ld",&b);
    if(b==0) printf("\nValor no valido, intenta otro: ");
}
while(b==0);

n=(a*a)+(b*b);
N=n;
if(n>2000000){
    printf("No se permiten valores de n mayores a 2,000,000");
    return 0;
}

ingresa_primo(2);
n=compara(n,raiz_primo->valor);
ingresa_primo(3);
n=compara(n,raiz_primo->valor);
ingresa_primo(5);
n=compara(n,raiz_primo->valor);

while(n!=1){
    nuevo_primo(k,1);
    n=compara(n,raiz_primo->valor);
    if(n==1) break;
    nuevo_primo(k,5);
    n=compara(n,raiz_primo->valor);
    k++;
}
mostrar_factores(N);

return 0;
}

void ingresa_primo(long p){
    struct primo *nuevo;
    nuevo=malloc(sizeof(struct primo));
    nuevo->valor=p;
    if(raiz_primo==NULL){
        raiz_primo=nuevo;
        nuevo->sig=NULL;
    }
    else{
        nuevo->sig=raiz_primo;
        raiz_primo=nuevo;
    }
}

void ingresa_factor(long p){
    struct factor *nuevo;
    nuevo=malloc(sizeof(struct factor));
    nuevo->valor=p;
    if(raiz_factor==NULL){
        raiz_factor=nuevo;
        nuevo->sig=NULL;
    }
    else{
        nuevo->sig=raiz_factor;
        raiz_factor=nuevo;
    }
}

void nuevo_primo(int k,int i){
    struct primo *lista=raiz_primo;
    int no=0;
    while(lista!=NULL){
        if(6*k+i%lista->valor==0) no=1;
        if(no==1) break;
        lista=lista->sig;
    }
    if(no==0) ingresa_primo(6*k+i);
}

void mostrar_factores(long N){
    struct factor *lista=raiz_factor;
    long x,y;
    int n=1;
    printf("\nEl valor de n es: %ld y sus factores primos son: ",N);
    while(lista!=NULL){
        x=lista->valor;
        lista=lista->sig;
        if(lista==NULL){
            printf("(%ld^%d)\n\n",x,n);
            break;
        }
        else y=lista->valor;
        if(x==y)n++;
        if(x!=y){
            printf("(%ld^%d), ",x,n);
            n=1;
        }
    }
}

long compara(long n,long x){
while(n%x==0){
    ingresa_factor(x);
    n/=x;
}
return n;
}
