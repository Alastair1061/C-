#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
int main ()
{
    int i,n,m,j=0,k=0,e=0,ne,numero[1000],aleatorio[1000],encri1[1000],encri2[1000],encri3[1000],encri4[1000],encri[1000],num[1000],encria[1000],encrib[1000],caracteres[1000];
    char mensaje[1000],letra[1000],codigo[1000];
    printf("\n\t\t\tBienvenido al programa\n\nA continuacion ingresaras un mensaje y este programa lo encriptara:");
    printf("\n\nMensaje Original:\n\n");
    gets(mensaje);
    n=strlen(mensaje);
    //Intercambiar todo a mayusculas
    for(i=0;i<n;i++)
    {if(mensaje[i]>=97 && mensaje[i]<=122){mensaje[i]=mensaje[i]-32;}} 
    //Encontrar el arreglo de caracteres
    for(i=e;i<n;i++)
    {if(mensaje[i]<65 || mensaje[i]>90){caracteres[e]=i;e++;}}
    e=0;
    //Eliminar todo excepto letras
    for(i=k;i<n;i++)
    {if(mensaje[i]>=65 && mensaje[i]<=90){letra[k]=mensaje[i];k++;}}
    m=strlen(letra);
    //Asignar el codigo ascii a las letras y hacer el arreglo con aleatorios 
    srand(time(NULL));
    for(i=0;i<m;i++)
    {numero[i]=(int)letra[i];
     aleatorio[i]=10+rand()%90;}
    //Separar los numeros y para la encriptacion sustituimos cada elemento por el modulo 10 de la suma del diguito mas 7.
    for(i=0;i<m;i++)
    {encri1[i]=((aleatorio[i]/10)+7)%10;
     encri2[i]=((aleatorio[i]%10)+7)%10;
     encri3[i]=((numero[i]/10)+7)%10;
     encri4[i]=((numero[i]%10)+7)%10;}
    //Guardar y mostrar el codigo encriptado
    printf("\nMensaje encriptado:\n\n");
    for(i=0;i<m;i++)
    {encri[i]=(encri3[i]*1000)+(encri4[i]*100)+(encri1[i]*10)+encri2[i];
     printf("%d ",encri[i]);}
    //En este punto contamos con 2 arreglos, el de las letras encriptadas (encri) y el de las posiciones de los caracteres (caracteres)
    //Desencriptacion y asignar el codigo del las letras a un arrego
    for(i=0;i<m;i++)
    {encria[i]=((encri[i]/1000)+3)%10;
     encrib[i]=(((encri[i]/100)%10)+3)%10;
     num[i]=(encria[i]*10)+encrib[i];}
    //Asignar espacios en donde habia caracteres, regresar del codigo ascii e imprimir
    printf("\n\nMensaje desencriptado:\n\n");
    for(i=0;i<n;i++){codigo[i]='A';}
    for(i=1;i<n;i++){if(i==caracteres[e]){codigo[i]=32;e++;}}
    for(i=0;i<n;i++){if(codigo[i]==32){continue;}else{codigo[i]=num[j];j++;}}
    puts(codigo);
    system("pause==>NULL");
    return 0;
}
