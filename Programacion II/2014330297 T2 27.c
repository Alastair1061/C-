#include<stdlib.h>
#include<stdio.h>

int main(){
    
float x[4];
int n,t=3,i=0,j=0,k=1;
    
printf("Ejercicio 27\n\nIngresa 4 numeros que desees ordenar:\n\n");

for(n=0;n<=3;n++){
    printf("\tX%d=",n+1);
    scanf("%f",&x[n]);
}
printf("\nLos numeros ordenados de menor a mayor son:\n");
for(n=0;n<=t;n++){
    
    if((x[i]<=x[n%(t+1)])&(x[i]<=x[(n+1)%(t+1)])&(x[i]<=x[(n+2)%(t+1)])&(x[i]<=x[(n+3)%(t+1)])){
        printf("\n%d) %.2f",k,x[i]);
        k++;
        if(t==0) break;
        for(n=0;n<=t;n++){
            if(n!=i){ x[j]=x[n]; j++;}
        }
        t--; j=0; i=0; n=-1;
    }
    else {
        if(n==t){ i++; n=-1;}
    }
} 
return 0;
}
