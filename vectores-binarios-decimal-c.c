#include <stdio.h>
#include <stdlib.h>

void rellenarVector(int array[5])
{ int i; //declaracion de variables locales

	for(i=0; i<5; i++) 
	{ 
	array[i]=(i%2); 
	}	
}

void convertirDecimal(int array[5])
{int i;
	float arrayB[5];
	for(i=0; i<5; i++) 
	{ 
	array[i]=arrayB[i];
	}
	
	for(i=0; i<5; i++) 
	{ 
	arrayB[i]=(i%2*1.0); 
	}
	printf("\n\t\t\t");
	
	for(i=0;i<5;i++) 
	{
	printf("[%.1f]",arrayB[i]);	
	}
			
}


int main()
{
	int arreglo[5]; //creacion del arreglo
	float arregloB[5];
	int x; //declaracion de la variable que se utilizara como indice 
	
	
	rellenarVector(arreglo); //llamada a la funcion rellenarVector, se envia el arreglo como parametro
	printf("\n\t\t\t");
	
	printf("\n\t\t\tArreglo binario \n");
	printf("\n\t\t\t");
	for(x=0;x<5;x++) 
	{
	printf("[%d]",arreglo[x]);	
	}

	printf("\n\n\t\t\tArreglo decimal \n");
	convertirDecimal(arreglo);
	printf("\n\t\t\t");
	
	
	printf("\n\n");	
	system("PAUSE");
    return 0;
	
}
