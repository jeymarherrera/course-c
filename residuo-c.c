#include <stdio.h>
#include <stdlib.h>
void InvertirNumero(int n);
int main()
{
int a,b;
//leer el n�mero a invertir
printf("n= ");
scanf("%d", &a);
//Calcular y visualizar la inversi�n del n�mero
	b= a%10;
printf("\n %d",b);	
	a= a/10;
printf("\n %d",a);

}

