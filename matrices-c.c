/**2. Se dice que una matriz tiene un punto de silla si alguna posición de la matriz es el menor valor de su fila, y a la vez el mayor
de su columna. Escribir una función que tenga como parámetro una matriz de números reales, y calcule y escriba los
puntos de silla que tenga, así como las posiciones correspondientes.**/
#include <stdio.h>
#include <stdlib.h>



int calcularPSilla(float m[4][4], int posFila, int posColumna) //metodo calcular punto silla, parametro matriz, puntero posicion fila y posicion columna
{
    int i, j, n=1; //indices, variable declarada como falsa

    for(i=0; i<4 && n; i++) //for para las filas
    {
        for(j=0; j<4 && n; j++) // for para las columnas
        {
            if(m[posFila][posColumna]>m[posFila][j] || m[posFila][posColumna]<m[i][posColumna]) //condicion 
			{ //si la matriz en la posicion del puntero es mayor a la posicion de la fila actual o la matriz en la posicion del puntero es menor a la actual de la columna
                n=0; //return cierto
            }
        }
    }
    return n;
}



void imprimirMatriz(float m[4][4]) //metodo imprimir matriz
{
    int i, j; //indices

    for(i=0; i<4; i++) //ciclo for filas
    {
        for(j=0; j<4; j++) //ciclo for columnas
		{
            printf("[%.1f] ", m[i][j]);//imprimiendo la matriz 
        }
        printf("\n");
    }
}
    
    
    
    
int main()
{   //cargando la matriz
    float matriz[4][4] = {{3.5, 6.7, 5.5, 3.0}, {2.1, 3.3, 2.4, 2.8},{1.2, 2.2, 0.4, 1.8}, {2.0, 1.9, 9.0,1.6}}; //matriz con valores fijos
    
    int posFila=2, posColumna=1; //punteros de las posiciones de las filas y columnas
	 
	printf("\t\t\tBienvenido al programa No. 2: ");
	printf("\n\tfuncion que tenga como parametro una matriz de numeros reales");
	printf("\n\tcalcule y escriba los puntos de silla que tenga, asi como las posiciones correspondientes.");
	printf("\n\n");	

    imprimirMatriz(matriz); //llamado al metodo imprimir, enviando matriz como parametro
	printf("\n\n");	
	
    //comparar todas las posiciones de la matriz para ver si son punto de silla
    for (posFila = 0; posFila < 4; posFila++) //comparando las posiciones filas
        for (posColumna = 0; posColumna < 4; posColumna++) //comparando las posiciones columna
            if(calcularPSilla(matriz, posFila, posColumna)==1) //condicion, llamado al metodo calcular punto silla 
                printf("Tiene punto de silla en la posicion [%d][%d]\n", posFila, posColumna);

    return 0;
}



