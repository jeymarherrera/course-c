/**16. Escribir un programa en el que se genere aleatoriamente un vector de 20 números enteros. 
El vector ha de quedar de tal forma que la suma de los 10 primeros elementos sea mayor que la suma de los 10 últimos elementos. 
Mostrar el vector original y el vector con la distribución indicada.**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void rellenarVector(int array[20]) //metodo rellenarVector, recibe el parametro array de 10 posiciones
{ int i, num; //declaracion de variables locales
  srand(time(NULL)); //funcion que permite que se generen distintos numeros las veces que se ejecute el programa
  
	printf("\tGenerando numeros aleatorios... \n"); 
	for(i=0; i<20; i++) //ciclo for, para introducir los elementos que estaran en el vector con su posicion correspondiente
	{ // 1. indice inicializado en 0 - 2. cantidad de elementos a acceder será menor a 10 - 3. incremento del indice   
    num=rand()%11; //generar numeros de 0 a 10
	array[i]=num; //introducir numero generado en el arreglo 
	}
	
	printf("\n\t**Vector original**    "); 
	for(i=0; i<20; i++) //imprimir arreglo, ciclo for para imprimir posicion por posicion 
	{  
	printf("[%d]",array[i]); 
	}
	
}



void ordenarArreglo(int array[20]) //metodo ordenarArreglo, recibe arreglo como parametro 
{
	int aux=0, i, j; //variables locales 
	
	for(i=0; i<20; i++) //ciclo for, para organizar los numeros que quedaron en desorden 
	{
		for(j=0; j<20; j++) //ciclo for para ordenar los 20 numeros que se encuentran en el arreglo 
		{
			if(array[j]<array[j+1]) //condicion si el arreglo en la posicion j es menor a la posicion siguiente
			{
			aux=array[j]; // tomar el elemento del arreglo
			array[j]=array[j+1]; //posicionarse en la posicion siguiente
			array[j+1]=aux;	//en la posicion siguiente poner el elemento tomado
			}
		}
	}
	
	printf("\n\t**Vector modificado**  ");
	for(i=0; i<20; i++) //imprimir arreglo, ciclo for para imprimir posicion por posicion 
	{  
	printf("[%d]",array[i]); 
	}
}



void calcularSuma(int array[20]) //metodo que realiza las sumas de los elementos
{
	int sumaP=0, sumaU=0, i; //variables locales
	for (i=0 ;i<10; i++) //ciclo for, suma de los primeros 10 numeros del arreglo 
	{
		sumaP+=array[i]; //contador que va sumando los elementos por posicion
	}
	
	printf("\n\t**Suma de los primeros 10 numeros: %d**  ",sumaP); //impresion de la suma de los 10
	
	for (i=10 ;i<20; i++ ) //ciclo for, suma de los ultimos 10 numeros del arreglo 
	{
		sumaU+=array[i]; //contador que va sumando los elementos por posicion
	}
	
	printf("\n\t**Suma de los ultimos 10 numeros: %d**  ",sumaU); //impresion de la suma de los 10
}




int main()
{
	int arreglo[20]; //creacion del arreglo
	int  aux=0;
	
	//mensajes
	printf("\t\t\t\t\tBienvenido al programa No. 16: ");
	printf("\n\t\t\tprograma en el que se genere aleatoriamente un vector de 20 numeros enteros");
	printf("\n\tEl vector ha de quedar de tal forma que la suma de los 10 primeros elementos sea mayor que la suma de los 10 ultimos elementos");
	printf("\n\t\t\tMostrar el vector original y el vector con la distribucion indicada");
	printf("\n\n");	
	
	rellenarVector(arreglo); //llamada a la funcion rellenarVector, se envia el arreglo como parametro
	printf("\n\t\t\t");
	
	ordenarArreglo(arreglo); //llamada a la funcion ordenarArreglo, se envia el arreglo como parametro
	printf("\n\t\t\t");
	
	calcularSuma(arreglo); //llamada a la funcion calcularSuma, se envia el arreglo como parametro
	printf("\n\t\t\t");
	
	printf("\n\n");	
	system("PAUSE");
    return 0;	
}
