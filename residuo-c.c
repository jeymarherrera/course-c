#include <stdio.h>
#include <stdlib.h>
void InvertirNumero(int n);
int main()
{
int a,b;
//leer el número a invertir
printf("n= ");
scanf("%d", &a);
//Calcular y visualizar la inversión del número
	b= a%10;
printf("\n %d",b);	
	a= a/10;
printf("\n %d",a);

}

