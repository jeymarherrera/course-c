//Calcular la inversión de un número
#include <stdio.h>
#include <stdlib.h>
void InvertirNumero(int n);
int main()
{
int n;
//leer el número a invertir
printf("n= ");
scanf("%d", &n);
//Calcular y visualizar la inversión del número
InvertirNumero(n);
}
void InvertirNumero(int n) // calcular la inversion de un numero
{
if (n > 10)
{ printf("%d", n%10);
InvertirNumero(n/10);
}
else
printf("%d", n%10);
}

