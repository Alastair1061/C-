#include <iostream>
using namespace std;

#include <iomanip>
using std::setfill;
using std::setw;

void mostrar_cuadrado(int cuadrado[19][19], int n)
{
	int i,j;
	
	cout<<"+";//pinta linea inicial
	for(i=0;i<n*4+1;i++)
		cout<<"-";
	cout<<"+"<<endl;
		
	for(i=n-1;i>=0;i--)
	{
		cout<<"|";//pinta lineas de numeros
		for(j=0;j<n;j++)
			cout<<setfill(' ')<<setw(4)<<cuadrado[i][j];
		cout<<" |"<<endl;
		
		if(i!=0)
		{
			cout<<"|";//pinta lineas intermedias
			for(j=0;j<n*4+1;j++)
				cout<<"-";
			cout<<"|"<<endl;
		}
	}
	cout<<"+";//pinta linea final
	for(i=0;i<n*4+1;i++)
		cout<<"-";
	cout<<"+";
}

void llenar_cuadrado(int cuadrado[19][19], int n)
{
	int i,fila,columna;
	
	fila=n/2;//posisiona el indice en la casilla con coordenadas de fila y columna y empieza con 1
	columna=n/2+1;
	cuadrado[fila][columna]=1;
	
	for(i=2;i<=n*n;i++)//recorre el resto de los indices
	{
		fila=(fila+1)%n;//posisiona el indice en la casilla diagonal siguiente, el modulo es por si se sale del cuadrado
		columna=(columna+1)%n;
		cuadrado[fila][columna]=i;
		
		if(i%n==0 && i!=n*n)//cada que halla avanzado un multiplo de n avanza 2 columnas 
		{
			i++;
			columna=(columna+2)%n;
			cuadrado[fila][columna]=i;
		}
	}
}

int main ()
{
	int cuadrado[19][19];
	int n;
	
	cout<<"El presente programa calcula y muestra un cuadrado magico (nxn) con n un numero impar entre 1 y 19.\n";
	do
	{
		cout<<"Por favor ingresa el valor de n: ";
		cin>>n;
	}while(n!=1 && n!=3 && n!=5 && n!=7 && n!=9 && n!=11 && n!=13 && n!=15 && n!=17 && n!=19);
	
	cout<<"\nEl cuadrado magico es el siguiente: \n\n";
	llenar_cuadrado(cuadrado,n);
	mostrar_cuadrado(cuadrado,n);
	
	system ("pause");
	return 0;
}
