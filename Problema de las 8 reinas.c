#include <stdio.h>
#include <stdlib.h>
/*
Programador:Jorge Ivan Vazquez Rocha 
Fecha: 24 de mayo del 2021 
Descripcion:En un arreglo bidimensional de 8x8, se designan 8 reinas de ajedrez, 
donde se determinaran las diferentes combinaciones en que pueden estar dichas 
piezas sin amenazarse.
*/

int main(int argc, char *argv[]) {
	
	int columna[8],diagonal1[8],diagonal2[8],i,j,k,n,m,filas,columnas,fin;
	char reina[100][8][8];
	
	printf("Bienvenido, a continuacion se presenta un arreglo bidimensional de 8x8 "); 
	printf("donde se designan 8 reinas de ajedrez, donde se determinaran las ");
	printf("diferentes combinacionesen que pueden estar dichas piezas sin amenazarse.\n ");
	
	fin=0;//Bandera para determinar cuando terminamos de revisar todo el tablero
	m=0;//contador de soluciones
	j=0;//inician las columnas en cero
	
	for(i=0;i<8;i++)//recorremos las 8 filas
	{
		while(j==8)//Esto se ejecuta cuando la pieza se sale de las columnas
		{
			i--;//te regresas a la anterior
			j=columna[i]+1;//y le sumas una columna
			
			if(i==-1)//Si te regresas hasta terminar con las filas
			{
				fin=1;//terminamos de revisar todas las filas y columnas
				j=1;//salimos del while
			}
		}
		
		if(fin==1)
			break;//Salimos del for 
			
		columna[i]=j;//En la fila i columna j se asigna una reina
		diagonal1[i]=j+i; //determina la diagonal de abajo a arriba de izquierda a derecha
		diagonal2[i]=j-i; //determina la diagonal de abajo a arriba de derecha a izquierda 
	
		/*
		printf("\ni=%d j=%d",i,j); //hacer pruebas
		if(j==10)
		return 0;
		*/	
		
		n=1;//bandera que sirve para determinar si paso la condicion de amenaza
		
		for(k=0;k<i;k++)//comparamos con las filas anteriores para verificar que no se amenacen
			if(columna[k]==columna[i] || diagonal1[k]==j+i || diagonal2[k]==j-i)//Si se amenazan
			{
				j++;//nos pasamos a la siguiente columna	
				i--;//volvemos a evaluar la fila
				n=0;//No paso la condicion
				break;
	 		}
	
		if(n==1)//Si paso la condicion (No amenazo a nadie)
			j=0;//Regresamos las columnas a 0 y al terminar el for pasamos a la siguiente fila
		
		if(i==7)//Si llegamos a este punto significa que ya encontro una solucion entonces la guardamos en el arreglo reina
		{
			for(filas=0;filas<8;filas+=2)//Estos 2 for son para pintar las casillas, simulando un tablero de ajedrez
			{
				for(columnas=0;columnas<8;columnas+=2)
					reina[m][filas][columnas]=176;
				for(columnas=1;columnas<8;columnas+=2)
					reina[m][filas][columnas]=219;	
			}
			for(filas=1;filas<8;filas+=2)
			{
				for(columnas=1;columnas<8;columnas+=2)
					reina[m][filas][columnas]=176;
				for(columnas=0;columnas<8;columnas+=2)
					reina[m][filas][columnas]=219;	
			}

			for(k=0;k<8;k++)//Este es para pintar el simbolo de la reina en las casillas soluciones
				reina[m][k][columna[k]]=140;
			m++;//y nos pasamos a la siguiente solucion
			
			/*
			for(k=0;k<8;k++) //para hacer pruebas
			printf("\nfila=%d columna=%d",k,columna[k]);	
			*/
			
			j=columna[i]+1; //ya que guardanmos la solucion avanzamos la 8va reina una columna
			i--;//y la volvemos a evaluar	
		}
	}//Cuando termina el for nos pasamos a la siguiente fila o volvemos a evaluar la pieza
	 
	//Solo saldremos del for hasta que hallamos recorrido todo el tablero y el arreglo reina tendra todas las soluciones
	
	 /*
	for(i=0;i<8;i++) //para hacer pruebas
		printf("\nfila=%d columna=%d",i,columna[i]);
	*/
	
	printf("\n\nEn total son %d soluciones.\n",m);
	do
	{
		do
		{
			printf("\n¿Cual quieres conocer? ");
			scanf("%d",&i);
			fflush(stdin);
		}while (i<1 || i>m);
	
		printf("\nEsa solucion es:");
		for(filas=0;filas<8;filas++) //Este for muestra el tablero en pantalla
		{
			printf("\n\t\t\t\t");
			for(columnas=0;columnas<8;columnas++)
				printf("%c",reina[i-1][filas][columnas]);
		}
		
		printf("\n\n¿Quieres conocer otra? (0=no) ");
		scanf("%d",&j);
		fflush(stdin);
	}while(j!=0);
	return 0;
}
