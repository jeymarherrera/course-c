#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int menu()
{
int op;
printf("\n\n");
printf("========== MENU ===\n");
printf(" 1. Invertir Numero\n");
printf("===================\n");
printf("Ingrese una opcion : \n");
scanf("%d", &op);
return op;
}


int invertirnumero(int a, int b)
{
	if(a==0) return 0;
	
	else
	{
		
	b= a%10;
	a= a/10;
	printf("%d",b);
	return invertirnumero(a,b);
}
}


int main()
{
int x;
int numero, resultado, b=0;
for(;;)
{
	int op=menu();
	switch(op)
	{	
	case 1:
	printf("Ingrese numero:\n");
	scanf("%d", &numero);
	printf("el numero invertido es:");
	resultado=invertirnumero(numero,b);
	break;
	default: printf("la opcion ingresada no es valida");getch();
	}
getch();
}
}
