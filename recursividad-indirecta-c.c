//recursividad indirecta
#include<stdio.h>
#define false 0
#define true 1
int impar(int numero)
{
	if (numero==0)
		return false;
	else
		return par(numero-1);
}
int par(int numero)
{
	if (numero==0)
		return true;
	else
		return impar(numero-1);
}
int main()
{

	int n,num; 
  
	printf("Ingrese un n�mero: ");
	scanf("%d",&n);
	num=impar (n);
	printf("N�mero impar: %d\n",num);	

}
