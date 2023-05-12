#include<stdlib.h>
#include<stdio.h>

int main(){
    
int n,m=1,opc;
float x[4],y[4],r[4]={0,0,0,0};
char cons[4]={'a','b','c','d'};

printf("Ejercicio 4\n\n");
printf("Concidere el conjunto H={a+bi+cj+dk donde a,b,c,d son numeros reales con i^2=j^2=k^2=ijk=-1}\n Llamaremos a los elementos de este conjunto cuaterniones.\n Este programa le permite sumar, restar y multiplicar dos cuaterniones.\n\n");

for(n=0;n<=3;n++){
    if(m==3){break;}
    printf("Ingresa el valor de la constante %c%d=", cons[n],m);
    if(m==1){scanf("%f",&x[n]);}
    if(m==2){scanf("%f",&y[n]);}
    if(n==3){m++;n=-1;}
}

for(n=0;n<=3;n++){
    for(m=0;m<=3;m++){
        if(n+m==0) r[0]=x[n]*y[m];
        else{
            if(n-m==0) r[0]-=x[n]*y[m];
            else{
            	if((n+m==1)|(n+m==5)) r[1]+=x[n]*y[m];
            	if((n+m==2)|(n+m==4)) r[2]+=x[n]*y[m];
            	if(n+m==3) r[3]+=x[n]*y[m];
       		}
	    }
    }
}
printf("\nTus cuaterniones son:\n\nX=%.2f+%.2fi+%.2fj+%.2fk\nY=%.2f+%.2fi+%.2fj+%.2fk\n\n", x[0],x[1],x[2],x[3],y[0],y[1],y[2],y[3]);
printf("\nQue deceas conocer?\n\n1.-Suma\n2.-Resta\n3.-Producto\n0.-Salir\n");

do{
scanf("%d",&opc);

switch(opc){
    
    case 1:
    printf("La suma es: (%.2f)+(%.2f)i+(%.2f)j+(%.2f)k\n", x[0]+y[0],x[1]+y[1],x[2]+y[2],x[3]+y[3]);
    break;
    
    case 2:
    printf("La resta es: (%.2f)+(%.2f)i+(%.2f)j+(%.2f)k\n",   x[0]-y[0],x[1]-y[1],x[2]-y[2],x[3]-y[3]);
    break;
    
    case 3:
    printf("El producto es:(%.2f)+(%.2f)i+(%.2f)j+(%.2f)k\n", r[0],r[1],r[2],r[3]);
    break;
    
    case 0:
    printf("Fin del programa\n");
    break;
    
    default: printf("Opcion no valida\n");break;
}
}
while(opc!=0);
return 0;
}
