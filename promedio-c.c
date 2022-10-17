#include <stdio.h>
void main()
{
	int prom, i, num, acum=0;
	for (i=0; i<5; i++){
		printf("\t Introduzca un número");
		scanf("%d",&num);
		acum=acum+num;
	}
	prom=acum/5;
	printf("\t el promedio es de: %d",prom);
}
