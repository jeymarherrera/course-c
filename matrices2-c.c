/**4. Escribir una función que encuentre el elemento mayor y menor de una matriz, así como las posiciones que ocupa y los visualice
en pantalla.**/
#include <stdio.h> 
#define i 3
#define j 3


void encontarNum(int m[3][3])
{int y,x, elemento;

 int menor = m[0][0];    // Iniciar los números, suponiendo que son los primeros
 int mayor = m[0][0];
 
	 for (y = 0; y < i; y++) 
	{
        for (x = 0; x < j ; x++) 
		{// Recorrer la matriz y comparar
            elemento = m[y][x];            
            if (elemento > mayor) 
			mayor = elemento;
				
            if (elemento < menor) 
			menor = elemento;
        }	
    }   
	printf("\nElemento Mayor:  %d \n",mayor);
    printf("Elemento Menor: %d  \n", menor);
}



void imprimirMatriz(int m[3][3]) //metodo imprimir matriz
{
    int x, y; //indices

    for(x=0; x<3; x++) //ciclo for columnas
    {
        for(y=0; y<3; y++) //ciclo for filas
		{
        printf("[%d]  ", m[x][y]); //imprimiendo la matriz por posicion 
        }
        printf("\n");
    }
}



int main() 
{ int x,y;
	int matriz[i][j] = {{20,  50, 80}, {90, 12, 44},{56,  14,  30}}; //matriz con valores fijos
	
	printf("\t\t\tBienvenido al programa No. 4: ");
	printf("\n\tfuncion que encuentre el elemento mayor y menor de una matriz");
	printf("\n\n");	

	printf("Matriz cargada...\n");
	imprimirMatriz(matriz); //llamada al metodo mimprimir matriz 
	printf("\nBuscando elemento mayor y menor de la matriz...\n");
	encontarNum(matriz); //llamada a la funcion encontrarNum

    return 0;
}
