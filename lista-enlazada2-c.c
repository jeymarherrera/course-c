
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct lista
{
	int dato;
	struct lista*sig;
}*entero;

void crear(struct lista **);
void insertar(struct lista **, int);
void eliminar(struct lista **, int);
void recorrer(struct lista **);
int buscar(struct lista **, int);

void crear(struct lista **entero)
{
	*entero = NULL;
}
void insertar(struct lista **entero, int dato)
{
	struct lista*auxiliar, *puntero, *anterior;
	auxiliar = new lista;
	if(!auxiliar)
	{
		printf("error:memoria insuficiente");
		exit(1);
	}
	auxiliar->dato = dato;
	anterior = NULL;
	puntero = *entero; //puntero es el puntero auxiliar que recorre a la lista
	while((puntero != NULL) && (puntero->dato < dato))
	{
		anterior = puntero;
		puntero = puntero->sig;
	}
	if (anterior == NULL)
	{
		auxiliar->sig = *entero;
		*entero = auxiliar; 
	}
	else
	{
		anterior->sig = auxiliar;
		auxiliar->sig = puntero;
	}
}

void eliminar (struct lista **entero, int dato)
{
	struct lista *puntero, *anterior;
	puntero = *entero;
	anterior = NULL;
	while((puntero != NULL) && (puntero->dato < dato))
	{
		anterior = puntero;
		puntero  = puntero->sig;
	}
	if(puntero->dato != dato)
	
		printf("El numero no existe");
	else
	{
		if (anterior == NULL) //1er lista
			*entero = (*entero)->sig;
		else
			anterior->sig = puntero->sig;
		delete puntero;
	}
}
void recorrer(struct lista **entero)
{
	struct lista*puntero;
	puntero = *entero;
	while(puntero != NULL)
	{
		printf("%d ",puntero->dato,"  ");
		puntero = puntero->sig;	
	}	
}
int main()
{
	system("cls");
	int dato;
	crear(&entero);
	printf("OPERACIONES CON LA LISTA ENLAZADA\n\n");
	printf("Para finalizar la insercion ingrese el cero\n\n");
	printf("Ingrese un numero: ");
	scanf("%d",&dato);
	while(dato != 0)
	{
		insertar(&entero,dato);
		printf("ingrese un numero: ");
		scanf("%d",&dato);
	}
	printf("\n\nELEMENTOS DE LA LISTA \n\n");
	recorrer(&entero);
	printf("\n\nIngrese el numero a eliminar: ");
	scanf("%d",&dato);
	printf("\n");
	eliminar(&entero,dato);
	recorrer(&entero);
}

