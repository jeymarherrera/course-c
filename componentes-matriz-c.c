
#include <stdio.h>
#include <conio.h>
int main()
{
int edades[3][2] = {{1,2},{9,8},{14,21}};
int size1 = sizeof(edades);
int size2 = sizeof(edades[0]);
int size3 = sizeof(edades[0]);
int size4 = sizeof(edades[0][0]);
int filas = (size1/size2);
int columnas = (size3/size4);

printf("Los componentes de la matriz edades son: ");
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
printf("%d,",edades[i][j]);
}
}
printf("\nVariable 1: %d ", size1);
printf("\nVariable 2: %d ", &size2);
printf("\nVariable 3: %d ", &size3);
printf("\nVariable 4: %d ", &size4);
printf("\nValor de la variable fila: %d ", &filas);
printf("\nValor de la variable columna: %d ", &columnas);
}

