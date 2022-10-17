#include <stdio.h>
#include <stdlib.h>
// Funci�n principal del programa
int main(int argc, char *argv[])
{
	int n=0;
    printf("ingrese el tamano de su matriz (1 numero): ");
    scanf("%d",&n);
    int Matriz[n][n];
    // Variable a utilizar como contador de n�meros
    int contador=0;
    // Variables a utilizar para determinar la posici�n x e y en la matriz
    // almacenar las posiciones y los limites de la matriz
    int x=0;
    int y=0;
    int vx=0;
    int vy=0;
    // N�mero de n�meros que hay que contar y limites de la matriz
    int limite=n*n;
    int limitex = n - 1;
    int limitey = n - 1;
    // Inicializar los valores de la matriz a 0
    for( x=0 ; x<n ; x++)
    {
       for( y=0 ; y<n ; y++ )
         {
              Matriz[x][y] = 0;
        }
    }
    // Establecer la posici�n x e y inicial de la matriz donde almacenar
    // el primer numero siendo en la primera fila posici�n central
    x = n/ 2;
    y = 0;
    // El primer numero se sit�a en la casilla central de la fila
    // superior de la matriz, a continuaci�n el siguiente numero se
    // sit�a en la diagonal arriba derecha, es decir una posici�n
    // de fila mas alta y una posici�n de columna a la derecha, en
    // caso de ya estar ocupada la casilla se sit�a el numero correspondiente
    // debajo de la casilla de donde se part�a inicialmente, si al
    // desplazarse por la matriz se superan los limites por alg�n sitio
    // se entra a la misma por el lado contrario, es decir si nos pasamos
    // de posici�n por la parte derecha de la matriz se empieza por la parte
    // izquierda de la misma, y as� en todos los sentidos.
    // Bucle que se ejecuta el numero de casilla que contiene la matriz
    for(contador=1;contador<=limite;contador++)
    {
       // Asignar la posici�n del numero en la matriz
        Matriz[y][x] = contador;
        // Guardar la posici�n actual
        vx = x;
        vy = y;
        // Aumentar la posici�n de x si sobrepasa el limite derecho
        // situarla en el limite izquierdo
        x++;
        if( x > limitex ) x = 0;
        // Disminuir la posici�n de y, ya que se pretende avanzar en
        // diagonal
        y--;
        if( y < 0 ) y = limitey;
        // Se comprueba si la posici�n ya esta ocupada por un numero
        // si es as� se vuelve a la posici�n original y se resit�a el
        // numero justo en la casilla inferior
        if (Matriz[y][x]>0)
        {
            // La casilla esta ocupada y se asigna el numero en la
            // casilla situada justo debajo de la casilla de donde proced�a
            x = vx ;
            y = vy +1 ;
        }
    }
    // Visualizar la matriz
    printf("\nCUADRADO MAGICO \n");
    for( x=0 ; x<n ; x++)
    {
         for( y=0 ; y<n ; y++ )
         {
              printf("|%3d|",Matriz[x][y]);
         }
         printf("\n");
    }

 system("PAUSE");
  return 0;
}
