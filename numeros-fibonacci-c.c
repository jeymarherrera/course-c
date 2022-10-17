#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{	
	printf("\t\t\tPrograma generador de Numeros Fibonacci \n");
	generarNum();
	return 0;
}

int generarNum()
{
	srand(time(NULL));
	int n;

	n=rand()%11;
	printf("Numero generado : %d \n", n);
 	metodoFibonacci(n);	
}

void metodoFibonacci(int num){
	int t1 = 0, t2 = 1, siguiente = 0;
	char control='n';
	printf("Numeros Fibonacci : %d, %d, ", t1, t2);
    siguiente = t1 + t2;
	while (siguiente <= num) {
        printf("%d, ", siguiente);
        t1 = t2;
        t2 = siguiente;
        siguiente = t1 + t2;
    }	
	printf("\nDesea continuar: ");
	scanf("%c",&control);
	while (control=='s' || control =='S')
    {
    system("CLS");	
	generarNum();
	}

}
