/**1. Escribir una función que rellene un array con los 10 primeros números impares, 
y visualice los contenidos del vector cuyos índices son: 0, 2, 4, 6, 8.**/
#include <stdio.h>
#include <stdlib.h>

void rellenarVector(int array[10]) //metodo rellenarVector, recibe el parametro array de 10 posiciones
{ int i, num; //declaracion de variables locales

	printf("\tIngrese 10 numeros \n"); 
	for(i=0; i<10; i++) //ciclo for, para introducir los elementos que estaran en el vector con su posicion correspondiente
	{ // 1. indice inicializado en 0 - 2. cantidad de elementos a acceder será menor a 10 - 3. incremento del indice   
	printf("\tIngrese un numero impar en la posicion [%d]: ",i);
	scanf("%d",&num); //lectura del numero
		if(num%2==1) //condicion if, determina si el numero es impar
		{
			array[i]=num; //si la condicion es cierta entra al vector
		}
		else
		{
		printf("\n\tEl numero es par, recuerda que solo estamos utilizando numero impares\n"); 
		i=i-1;	// si la condicion es falsa, decremeta la posicion 
		}
	}	
}

int main()
{
	int arreglo[10]; //creacion del arreglo
	int x; //declaracion de la variable que se utilizara como indice 
	
	//mensajes
	printf("\t\t\tBienvenido al programa No. 1: ");
	printf("\n\tfuncion que rellene un array con los 10 primeros numeros impares");
	printf("\n\tvisualice los contenidos del vector cuyos indices son: 0, 2, 4, 6, 8");
	printf("\n\n");	
	
	rellenarVector(arreglo); //llamada a la funcion rellenarVector, se envia el arreglo como parametro
	printf("\n\t\t\t");
	
	for(x=0;x<10;x++) //ciclo for para imprimir las posiciones del vector
	{
	if(x%2==0) //condicion que determina las posiciones pares a imprimir
	printf("[%d]",arreglo[x]);	//imprimiendo el las posiciones 
	}
	printf("\n\tPosiciones:      0  2  4   6   8 ");
	printf("\n\n");	
	system("PAUSE");
    return 0;
	
}
