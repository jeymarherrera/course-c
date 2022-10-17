#include<stdio.h>

int funcionRec(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return n* funcionRec(n-1);
	}
}
int main()
{
	int num, numero;
	printf("Ingrese un número: ");
	scanf("%d",&num);
	numero= funcionRec (num);
	printf("Número Factorial: %d",numero);	
}
