#include <iostream>
#include <stdio.h>

/*
Fecha de creación: 24/03/2022
Programador: Alastair1061
Descripción: 
	Este programa fue escrito con la finalidad de practicar con el uso de clases en c++.
	Usa la estructura FRACCION para poder operar con este tipo de dato y la clase MATRIZ con sus respectivos métodos.
	La finalidad de este programa es resolver por el metodo de gauss-jordan una matriz cuadrada.
	Cabe la posibilidad de agregar nuevos métodos y jugar con la clase MATRIZ. 
*/

using namespace std;

typedef struct FRACCION{ //Define una estructura FRACCION para poder manipular este ente matematico	
	int num, den;
}FRACCION;

FRACCION SimplificarFraccion (FRACCION a)
{
	int x,y,r;
	
	if (a.num==0) 
	{
		a.den=1;
		return a;
	}
	
	x=a.num; y=a.den;
	do
	{
		r=x%y;
		x=y;
		if (r!=0) 
			y=r;
	}
	while(r!=0);
	
	a.num/=y; a.den/=y;
	
	if(a.den<0)
	{
		a.num*=-1;
		a.den*=-1;
	}
	return a;
}

FRACCION SumarFracciones (FRACCION a, FRACCION b)
{
	FRACCION c;
	c.num = a.num*b.den + b.num*a.den;
	c.den = a.den * b.den;
	return SimplificarFraccion(c);
}

FRACCION RestarFracciones (FRACCION a, FRACCION b)
{
	FRACCION c;
	c.num = a.num*b.den - b.num*a.den;
	c.den = a.den * b.den;
	return SimplificarFraccion(c);
}

FRACCION MultiplicarFracciones (FRACCION a, FRACCION b)
{
	FRACCION c;
	c.num = a.num * b.num;
	c.den = a.den * b.den;
	return SimplificarFraccion(c);
}

FRACCION DividirFracciones (FRACCION a, FRACCION b)
{
	FRACCION c;
	c.num = a.num * b.den;
	c.den = a.den * b.num;
	return SimplificarFraccion(c);
}

class Matrices //Crea una clase MATRICES para poder manipular este ente matemático
{
	private:
		int i, j, filas, columnas;
		FRACCION matriz[10][10];
		
	public:
		Matrices(int _filas, int _columnas);
		int Filas(){return filas;}
		int Columnas(){return columnas;}
		FRACCION Valor(int fila, int columna){return matriz[fila][columna];}
		int Valor_num(int fila, int columna){return matriz[fila][columna].num;}
		int Valor_den(int fila, int columna){return matriz[fila][columna].den;}
		void Ingresar ();
		void Mostrar ();
		void MultiplicarConstante (FRACCION constante);
		void MultiplicarFila (FRACCION constante, int fila);
		void DividirFila (FRACCION constante, int fila);
		void IntercambiarFilas (int fila1, int fila2);
		void SumarMultiplosDeFilas (FRACCION constante, int fila1, int fila2);
		void RestarMultiplosDeFilas (FRACCION constante, int fila1, int fila2);
};

Matrices::Matrices(int _filas, int _columnas)
{	
	filas= _filas;
	columnas= _columnas;
	for(i=0; i<filas; i++)
	{
		for(j=0; j<columnas; j++) //inicia las matrices con el valor 0/1
		{
			matriz[i][j].num=0;
			matriz[i][j].den=1;
		}
	}
}

void Matrices::Ingresar()
{
	int f;
	do
	{
		cout<<"La matriz usa fracciones? (si=1 no=0) ";
		cin>>f;
	}
	while (f!=1 && f!=0);
	
	for (i=0; i<filas; i++)
	{
		for (j=0; j<columnas; j++)
		{
			if (f==0)
			{
				cout<<"Ingresa el valor ("<<i+1<<","<<j+1<<") de la matriz: ";
				cin>>matriz[i][j].num;
				matriz[i][j].den=1;
			}
			else
			{
				cout<<"Ingresa el numerador del valor ("<<i+1<<","<<j+1<<") de la matriz: ";
				cin>>matriz[i][j].num;
				do
				{
					cout<<"Ingresa el denominador del valor ("<<i+1<<","<<j+1<<") de la matriz: ";
					cin>>matriz[i][j].den;
				}
				while(matriz[i][j].den==0);
			}
		}
	}
}

void Matrices::Mostrar()
{
	for (i=0;i<filas;i++)
	{
		for (j=0;j<columnas;j++)
		{
			cout<<matriz[i][j].num;
			if(matriz[i][j].den==1)
				cout<<" ";
			else
				cout<<"/"<<matriz[i][j].den<<" ";
			printf("\t");
		}
		cout<<endl;
	}
	cout<<endl;
}

void Matrices::MultiplicarConstante (FRACCION constante)
{
	FRACCION fraccion;
	for (i=0;i<filas;i++)
		for (j=0;j<columnas;j++)
			matriz[i][j]= MultiplicarFracciones (matriz[i][j],constante);
}

void Matrices::MultiplicarFila (FRACCION constante, int fila)
{
	for (j=0;j<columnas;j++)
		matriz[fila][j]= MultiplicarFracciones (matriz[fila][j],constante);
}

void Matrices::DividirFila (FRACCION constante, int fila)
{
	for (j=0;j<columnas;j++)
		matriz[fila][j]= DividirFracciones (matriz[fila][j],constante);
}

void Matrices::IntercambiarFilas (int fila1, int fila2)
{
	FRACCION aux;
	for(j=0; j<columnas; j++)
	{
		aux.num = matriz[fila1][j].num;
		aux.den = matriz[fila1][j].den;
		matriz[fila1][j].num = matriz[fila2][j].num;
		matriz[fila1][j].den = matriz[fila2][j].den;
		matriz[fila2][j].num = aux.num;
		matriz[fila2][j].den = aux.den;
	}
}

void Matrices::SumarMultiplosDeFilas (FRACCION constante, int fila1, int fila2)
{
	for(j=0; j<columnas; j++)
		matriz[fila1][j] = SumarFracciones( matriz[fila1][j] , (MultiplicarFracciones(matriz[fila2][j] , constante )));
}

void Matrices::RestarMultiplosDeFilas (FRACCION constante, int fila1, int fila2)
{
	for(j=0; j<columnas; j++)
		matriz[fila1][j] = RestarFracciones( matriz[fila1][j] , (MultiplicarFracciones(matriz[fila2][j] , constante )));
}
/*
void SumarMatrices(fraccion suma[10][10], fraccion matriz_a[10][10], fraccion matriz_b[10][10], int filas, int columnas)
{
	Fracciones fraccion;
	for (i=0;i<filas;i++)
	{
		for (j=0;j<columnas;j++)
			suma[i][j]=fraccion.Suma(matriz_a[i][j],matriz_b[i][j]);
	}
}

void RestarMatrices(fraccion resta[10][10], fraccion matriz_a[10][10], fraccion matriz_b[10][10], int filas, int columnas)
{
	Fracciones fraccion;
	for (i=0;i<filas;i++)
	{
		for (j=0;j<columnas;j++)
			resta[i][j]=fraccion.Resta(matriz_a[i][j],matriz_b[i][j]);
	}
}

void Matrices::Multiplicar(fraccion producto[10][10], fraccion matriz_a[10][10], fraccion matriz_b[10][10], int filas_a, int columnas_a, int filas_b, int columnas_b)
{
	int k;
	Fracciones f;
	fraccion aux;
	
	if(columnas_a==filas_b)
	{
		for(i=0;i<filas_a;i++)
		{
			for(j=0;j<columnas_b;j++)
			{
				producto[i][j].n=0;
				producto[i][j].d=1;
		
				for(k=0;k<columnas_a;k++)
				{
					aux=f.Producto (matriz_a[i][k],matriz_b[k][j]);
					producto[i][j]=f.Suma(producto[i][j],aux);
				}
			}
		}
	}
	else
		cout<<"\nNo se puede realizar la multiplicacion.\n";
}
*/
int main(int argc, char** argv) 
{
	int fila, columna, i, fila2;
	FRACCION aux;
	
	Matrices matriz(3,3);
	
	matriz.Ingresar();
	
	/*
	do{	
		cout<<"\nQue quieres hacer: "
			<<"\n1.-Dividir fila"
			<<"\n2.-Restar multiplo  "
			<<"\n3.-Mostrar matriz  ";
		cin>>i;
	
		if(i==1)
		{
			cout<<"\nA cual fila: ";
			cin>>fila;
			cout<<"Que columna: ";
			cin>>columna;
			matriz.DividirFila(matriz.Valor(fila,columna),fila);
		}
		else if(i==2)
		{
			cout<<"\nA que fila restas: ";
			cin>>fila;
			cout<<"Que fila restas: ";
			cin>>fila2;
			cout<<"Que columna ";
			cin>>columna;
			matriz.RestarMultiplosDeFilas(matriz.Valor(fila,columna),fila,fila2);
		}
		else if(i==3)
		{
			cout<<endl;
			matriz.Mostrar();
		}
	}while(i!=0);

	*/
	
	cout<<"\n\nMatriz original: \n";
	matriz.Mostrar();
	
	fila=0, columna=0, i=1;
	
	while(columna<matriz.Columnas())
	{
		if(matriz.Valor_num(fila,columna)==0)
		{
			if(fila+i==matriz.Filas())
			{
				columna++;
				i=1;
				continue;
			}
			cout<<"Intercambiar fila "<<fila+1<<" por "<<fila+i+1<<endl<<endl;
			matriz.IntercambiarFilas(fila,fila+i);
			matriz.Mostrar();
			i++;
		}
		else
		{
			if(matriz.Valor_num(fila,columna)!=1 || matriz.Valor_den(fila,columna)!=1)
			{	
				cout<<"Dividir por "<<matriz.Valor_num(fila,columna)<<"/"<<matriz.Valor_den(fila,columna)<<" la fila "<<fila+1<<endl<<endl;	
				matriz.DividirFila(matriz.Valor(fila,columna),fila);			
				matriz.Mostrar();
			}
			for(i=fila+1; i<matriz.Filas(); i++)
			{
				if(matriz.Valor_den(i,columna)!=0)
				{
					cout<<"A la fila "<<i+1<<" restarle la fila "<<fila+1<<" por "<<matriz.Valor_num(i,columna)<<"/"<<matriz.Valor_den(i,columna)<<endl<<endl;	
					matriz.RestarMultiplosDeFilas(matriz.Valor(i,columna),i,fila);
					matriz.Mostrar();
				}
			}
			fila++, columna++, i=1;				
		}
	}
	
	fila=matriz.Filas()-1; columna=matriz.Columnas()-1;
	
	while(columna>0)
	{
		if(matriz.Valor_num(fila,columna)!=0)
		{
			aux.num=matriz.Valor_num(fila,columna);
			aux.den=matriz.Valor_den(fila,columna);
			matriz.DividirFila(matriz.Valor(fila,columna),fila);
					
			for(i=fila-1; i>=0; i--)
			{
				if(matriz.Valor_num(i,columna)!=0)
				{		
					cout<<"A la fila "<<i+1<<" restarle la fila "<<fila+1<<" por "<<matriz.Valor_num(i,columna)<<"/"<<matriz.Valor_den(i,columna)<<endl<<endl;	
					matriz.RestarMultiplosDeFilas(matriz.Valor(i,columna),i,fila);
					matriz.MultiplicarFila(aux,fila);
					matriz.Mostrar();
					matriz.DividirFila(aux,fila);
				}
			}
			matriz.MultiplicarFila(aux,fila);
			columna--;
			fila=matriz.Filas()-1;
		}
		fila--;
	}
	
	system("pause");
	return 0;
}
