#include <stdio.h>
#include <stdlib.h>
// Función principal del programa
int main(int argc, char *argv[])
{
	int n=0;
    printf("ingrese el tamano de su matriz (1 numero): ");
    scanf("%d",&n);
    int Matriz[n][n];
    // Variable a utilizar como contador de números
    int contador=0;
    // Variables a utilizar para determinar la posición x e y en la matriz
    // almacenar las posiciones y los limites de la matriz
    int x=0;
    int y=0;
    int vx=0;
    int vy=0;
    // Número de números que hay que contar y limites de la matriz
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
    // Establecer la posición x e y inicial de la matriz donde almacenar
    // el primer numero siendo en la primera fila posición central
    x = n/ 2;
    y = 0;
    // El primer numero se sitúa en la casilla central de la fila
    // superior de la matriz, a continuación el siguiente numero se
    // sitúa en la diagonal arriba derecha, es decir una posición
    // de fila mas alta y una posición de columna a la derecha, en
    // caso de ya estar ocupada la casilla se sitúa el numero correspondiente
    // debajo de la casilla de donde se partía inicialmente, si al
    // desplazarse por la matriz se superan los limites por algún sitio
    // se entra a la misma por el lado contrario, es decir si nos pasamos
    // de posición por la parte derecha de la matriz se empieza por la parte
    // izquierda de la misma, y así en todos los sentidos.
    // Bucle que se ejecuta el numero de casilla que contiene la matriz
    for(contador=1;contador<=limite;contador++)
    {
       // Asignar la posición del numero en la matriz
        Matriz[y][x] = contador;
        // Guardar la posición actual
        vx = x;
        vy = y;
        // Aumentar la posición de x si sobrepasa el limite derecho
        // situarla en el limite izquierdo
        x++;
        if( x > limitex ) x = 0;
        // Disminuir la posición de y, ya que se pretende avanzar en
        // diagonal
        y--;
        if( y < 0 ) y = limitey;
        // Se comprueba si la posición ya esta ocupada por un numero
        // si es así se vuelve a la posición original y se resitúa el
        // numero justo en la casilla inferior
        if (Matriz[y][x]>0)
        {
            // La casilla esta ocupada y se asigna el numero en la
            // casilla situada justo debajo de la casilla de donde procedía
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
