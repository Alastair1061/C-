#include <stdlib.h>
#include <stdio.h>
int main()
{
 int i,j,k,n,m,a,b,c,dia,mes,ano,d1,d2,m1,m2,a1,a2,u1,u2,ultimos,l,e1=0,e2=0;
 char nombre[50],s,lp,vp,lm,ln,scp,scm,scn,estado[30],edoa=48,edob=48;
 printf("\n\t\t\tBienvenido al programa");
 printf("\n\nA continuacion se te pedira que ingreses cierta cantidad de datos para\ndeterminar tu CURP.\nLee cuidadosamente las instrucciones o el programa se cerrara.\nSi tienes mas de un nombre de pila, solo ingrese el primero.");
 //Nombre
 printf("\nSi tiene algun nombre o apellido compuesto, solo ingresar la palabra principal.");
 printf("\n\nIngresa tu nombre en el siguiente formato:\nNombre 'espacio' ApellidoPaterno 'espacio' Apellido materno\n\n");
 gets(nombre);
 n=strlen(nombre);
 //Encontrar espacios
 for(i=0;i<n;i++)
 {if(nombre[i]==32){a=i;break;}}
 for(i=a+1;i<n;i++)
 {if(nombre[i]==32){b=i;break;}}
 for(i=b+1;i<n;i++)
 {if(nombre[i]==32){c=i;break;}}
 //if(c!=0){return 0;}
 //Determinar letras necesarias
 lp=nombre[a+1];
 lm=nombre[b+1];
 ln=nombre[0];
 for(j=a+2;j<n;j++)
 {if(nombre[j]=='a' || nombre[j]=='e' || nombre[j]=='i' || nombre[j]=='o' || nombre[j]=='u' || nombre[j]=='A' || nombre[j]=='E' || nombre[j]=='I' || nombre[j]=='O' || nombre[j]=='U')
 {vp=nombre[j];break;}}
 for(j=a+2;j<n;j++)
 {if(nombre[j]=='a' || nombre[j]=='e' || nombre[j]=='i' || nombre[j]=='o' || nombre[j]=='u' || nombre[j]=='A' || nombre[j]=='E' || nombre[j]=='I' || nombre[j]=='O' || nombre[j]=='U'){continue;}
 else{scp=nombre[j];break;}}
 for(j=b+2;j<n;j++)
 {if(nombre[j]=='a' || nombre[j]=='e' || nombre[j]=='i' || nombre[j]=='o' || nombre[j]=='u' || nombre[j]=='A' || nombre[j]=='E' || nombre[j]=='I' || nombre[j]=='O' || nombre[j]=='U'){continue;}
 else{scm=nombre[j];break;}}
 for(j=1;j<n;j++)
 {if(nombre[j]=='a' || nombre[j]=='e' || nombre[j]=='i' || nombre[j]=='o' || nombre[j]=='u' || nombre[j]=='A' || nombre[j]=='E' || nombre[j]=='I' || nombre[j]=='O' || nombre[j]=='U'){continue;}
 else{scn=nombre[j];break;}}
 //Convertir a mayusculas
 if(lp>=97 && lp<=122){lp=lp-32;}
 if(vp>=97 && vp<=122){vp=vp-32;}
 if(lm>=97 && lm<=122){lm=lm-32;}
 if(ln>=97 && ln<=122){ln=ln-32;}
 if(scp>=97 && scp<=122){scp=scp-32;}
 if(scm>=97 && scm<=122){scm=scm-32;}
 if(scn>=97 && scn<=122){scn=scn-32;}
 //Fecha de nacimiento
 printf("\nIngresa tu fecha de nacimiento:\n");
 printf("\nNo del dia a 2 digitos:\t");
 scanf("%d",&dia);
 if(dia<=0 || 31<dia){return 0;}
 printf("No del mes a 2 digitos:\t");
 scanf("%d",&mes);
 if(mes<=0 || 12<mes){return 0;}
 printf("Año:\t\t\t");
 scanf("%d",&ano);
 if(ano<=0 || 2016<ano){return 0;}
 //Asignar digitos necesarios
 d1=dia/10;
 d2=dia%10;
 m1=mes/10;
 m2=mes%10;
 a1=(ano/10)%10;
 a2=ano%10;
 //Sexo
 fflush(stdin);
 printf("\nEres hombre (H) o mujer (M)?\t");
 scanf("%c",&s);
 //Convertir a mayuscula y verificar condicion
 if(s==77 || s==72 || s==104 || s==109)
 {if (s==104 || s==109){s=s-32;}}
 else {return 0;}
 //Lugar de nacimiento
 fflush(stdin);
 printf("\nIngrese el estado en donde nacio:\t");
 gets(estado);
 l=strlen(estado);
 //Convertir a mayusculas
 for(i=0;i<l;i++){if (97<=estado[i] && estado[i]<=122){estado[i]=estado[i]-32;}}
 //Encontrar espacios
 for(i=0;i<l;i++){if(estado[i]==32){e1=i;break;}}
 for(i=e1+1;i<l;i++){if(estado[i]==32){e2=i;break;}}
 //BCN, BCS y SLP
 if(e2!=0)
 {     if (estado[16]=='S'){edoa='B';edob='S';}
  else if (estado[16]=='N'){edoa='B';edob='C';}
  else if (estado[0]=='S'){edoa='S';edob='P';}}
  else{
 // 2 nombres
 if(e1!=0)
 {switch (estado[0]){
        case 'D':edoa='D';edob='F';break;
        case 'N':edoa='N';edob='L';break;
        case 'Q':edoa='Q';edob='R';break;}}
 //QUERETARO Y CAMPECHE 
 else if(e1==0)
 {
     if (estado[0]=='Q'){edoa='Q';edob='T';}
 else if (estado[0]=='C' && estado[7]=='E'){edoa='C';edob='C';}
 else if (estado[0]=='E'){edoa='N';edob='E';}
 //Estados en general 
 else 
 {edoa=estado[0];
  for (i=l-1;0<i;i--)
  {if(estado[i]==65 || estado[i]==69 ||estado[i]==73 || estado[i]==79 || estado[i]==85){continue;}
   else {edob=estado[i];break;}}}}
 }
 //Ultimos digitos
 printf("\nIngresa los ultimos dos digitos de tu CURP, si no los sabes los ultimos digitos de tu curp seran incorrectos ya que tendras que ingresar el numero que se te    ocurra:\t");
 scanf("%d",&ultimos);
 if(ultimos<10){u1=0;u2=ultimos;}
 else {u1=(ultimos/10)%10;u2=ultimos%10;}
 //Imprimir curp
 printf("\n\nTu CURP es: %c%c%c%c%d%d%d%d%d%d%c%c%c%c%c%c%d%d",lp,vp,lm,ln,a1,a2,m1,m2,d1,d2,s,edoa,edob,scp,scm,scn,u1,u2);
 system("pause==>NULL");
 return 0;
}
