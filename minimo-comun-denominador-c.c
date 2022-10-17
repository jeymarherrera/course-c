#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mcdMetodo(int p, int q) 
{
    if (q == 0) return p;
    return mcdMetodo(q, p % q);
}


int main(void) 
{
	srand(time(NULL)); 
	int P, Q, R; 
	P = rand()%100;
	printf(" Valor de 'p' generado:  %d\n ",P);
	Q = rand()%100;
	printf("Valor de 'q' generado: %d\n ", Q);
	R = mcdMetodo(P,Q);
    printf("Maximo Comun Divisor es: %d\n ", R);
    
    if (Q > P)
    {
     printf("'q' = %d es mayor y divide a 'p' = %d\n",Q,P);
	}
	else if (Q==0)
	{
	 printf("'q' es igual a 0 por lo que el mcd es (%d,%d)\n",Q,P);		
	}
	else
	{ 
	 printf("El MCD es: %d, %d'&'%d \n", Q, P,Q);		
	}
}

