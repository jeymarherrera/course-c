#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
//variables globales
#define T 1
#define F 0
#define tamPila 10
#define tamCola 12
int contMulp=0;
int contSuma=0;
int contResta=0;
//creaci�n de la pila y la cola
typedef struct tipoPila 
{
int elemPila[tamPila]; 
int tope; //tope
}
tipoPila;

typedef struct tipoCola 
{
 int elemCola[tamCola]; 
 int front; //frente de la cola
 int final; //final de la cola
}
tipoCola;
//m�todo de presentacion
void presentacion()
{
	system("CLS");
	printf("\n\n\t         UNIVERSIDAD TECNOL�GICA DE PANAM� ");
	printf("\n\t FACULTAD DE INGENIER�A DE SISTEMAS COMPUTACIONALES");
	printf("\n\t          LIC. EN DESARROLLO DE SOFTWARE   ");
	printf("\n\t           DEPARTAMENTO DE PROGRAMACI�N   ");
	printf("\n\n\t              ESTRUCTURA DE DATOS I    ");
	printf("\n\n\t                  PROYECTO N.2  ");
	printf("\n\t          ESTRUCTURAS DE DATOS LINEALES  ");
	printf("\n\t                  PILA Y COLA  ");
	printf("\n\n\t      FACILITADOR: ING. JACQUELINE S. DE CHING   ");
	printf("\n\n\t                  INTEGRANTES  ");
    printf("\n\t           JEYMAR HERRERA - 20-70-5165   ");
	printf("\n\t                 GRUPO: 1SL112  ");
	printf("\n\n\n\t   -----Pulse cualquier tecla para volver-----");
	getch();
}
//m�todos de inicializaci�n
void iniciaPila(tipoPila *pila) //parametro pila tipo pila
{
pila->tope=-1; //pila inicialiada con tope -1
}

void iniciaCola(tipoCola *cola)
{
cola->front=0;
cola->final=-1;
}
//metodos de verficaci�n - vacia
int pilaVacia(tipoPila *pila)
{
if(pila->tope == -1)
return T;
else
return F;
}

int colaVacia(tipoCola *cola)
{
if (cola->front == cola->final)
return T;
else
return F;
}

int errorUnderflow(tipoCola *cola)
{
if (cola->front == 0 && cola->final == -1)
return T;
else
return F;
}
//m�todos de verificaci�n - llena
int pilaLlena(tipoPila *pila)
{
if(pila->tope == tamPila -1)
return T;
else
return F;
}

int colaLlena(tipoCola *cola)
{
if(cola->final == tamCola -1)
return T;
else
return F;
}

int errorOverflow(tipoCola *cola)
{
if (colaLlena(cola))
return T;
else
return F;
}
//m�todos de eliminaci�n - sacar y eliminar
int sacar(tipoPila *pila)
{
int elemento;
if(pilaVacia(pila))
{
printf("\n\t�Pila Vacia!");
}
else
{
elemento = pila->elemPila[pila->tope]; 
printf("\n\tEl elemento sacado es: %i",pila->elemPila[pila->tope]);
printf("\n\t");
pila->elemPila[pila->tope]=0;
pila->tope=pila->tope-1;
return elemento;
}
}

void eliminar(tipoCola *cola) 
{
int elemento;
elemento = cola->elemCola[cola->front];
cola->front++;
printf("\n\n\tSe ha atendido correctamente al paciente %i",elemento);
printf("\n\n\tSe ha liberado un espacio");
cola->elemCola[elemento]=0;
printf("\n\n\t---Pulse cualquier tecla para volver---");
getch();
}
//m�todos de inserci�n - meter y agregar
void meter(tipoPila *pila, int elemento)
{
if(pilaLlena(pila))
printf("\n\t�Pila Llena!\n\n");
else
{
pila->tope++;
pila->elemPila[pila->tope]= elemento;
}
}

void agregar(tipoCola *cola, int elemento)
{
cola->final++;
cola->elemCola[cola->final]= elemento;
printf("\n\tSe ha agregado exitosamente al paciente No %i",elemento);
printf("\n\n\t---Pulse cualquier tecla para volver---");
getch();
}

int controlAtencion(tipoCola *cola)
{ float hora; 

	printf("\n\tIngrese hora (24h) de llegada del paciente:  ");
	scanf("%f",&hora);
	if (hora>=19)
	{
	return T;	
	}
	else
	{
	return F;	
	} 		
}
//m�todos de visualizaci�n
void mostrarPilaTope(tipoPila *pila)
{
int i;
i=pila->tope;
printf("\n\n\tEl tope de la pila es de: %i",i);
printf("\n\n\t---Pulse cualquier tecla para volver---");
getch();
}

void mostrarPila(tipoPila *pila)
{
int i;
printf("\n\t");
for(i=pila->tope;i>=0;i--)
{
printf("\n\t %d",pila->elemPila[i]);
}
i=pila->tope;
printf("\n\n\tEl tope de la pila es de: %i",i);
printf("\n\n\t---Pulse cualquier tecla para volver---");
getch();

}

void mostrarCola(tipoCola *cola)
{
int i;
printf("\tPaciente en espera--> %i\n\t",cola->front);
for (i = 0; i<=tamCola-1; i++)
{
printf("%d\n\t", cola->elemCola[i]);
}
printf("Ultimo paciente--> %i\n", cola->final);
printf("\n\n\t---Pulse cualquier tecla para volver---");
getch();
}
//metodos para limpiar
void limpiaCola(tipoCola *cola)
{
	int i;
	for (i = 0; i<=tamCola-1; i++)
	cola->elemCola[i]=0;
}
//m�todos de operaciones
int realizarCalculos(tipoPila *pila, int elem1, int elem2)
{
int  resultado;
char r[20]=" ";

if ((elem1 % 2 == 1 && elem2 % 2 == 0) || elem1 % 2 == 0 && elem2 % 2 == 1)
{
	contMulp++;
	strcpy(r, "\n\n\tMULTIPLICACION");
	resultado= elem1 * elem2;
}
else if(elem1 % 2 == 0 && elem2 % 2 ==0) 
{
	contSuma++;
	strcpy(r, "\n\n\tSUMA");
	resultado= elem1 + elem2;
}
else
{
	contResta++;	
	strcpy(r, "\n\n\tRESTA");
	resultado= elem1 - elem2;		
}
printf(r);
printf(" = %i",resultado);
printf("\n\n\t---Pulse cualquier tecla para volver---");
getch();
return resultado;
}



void resultadoContador()
{
printf("\n\tCantidad de multiplicaciones realizadas: %i",contMulp);
printf("\n\tCantidad de sumas realizadas: %i",contSuma);
printf("\n\tCantidad de restas realizadas: %i",contResta);
printf("\n\n\t---Pulse cualquier tecla para volver---");
getch();		
}

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
	int opc,opcPila,opcCola,contCola,elem,elemento1,elemento2,res,control=0,control2=0,control3=0;
	
	tipoPila pila;
	tipoCola cola;
	
	while(control==0)
	{
	system("CLS");
	printf("\n\t****************************");
	printf("\n\t-------Men� Principal-------");
	printf("\n\n\t1. Pantalla de presentaci�n");
	printf("\n\t2. PILA");
	printf("\n\t3. COLA");
	printf("\n\t4. Salir del programa\n");
	printf("\n\t****************************\n\n\t");
	
	printf("Su opci�n: ");
	scanf("%d",&opc);
	
		switch(opc)
		{
			case 1:
				presentacion();
				break;
				
				case 2:
					iniciaPila(&pila);
					control2=0;
					while(control2==0)
					{
						system("CLS");
						printf("\n\t**********************************************************");
						printf("\n\t---------------------------PILA---------------------------");
						printf("\n\n\t1. Meter a la PILA (Mostrar TOPE)");
						printf("\n\t2. Sacar de la PILA (dos numeros) e imprimirlos.\n\t   (Mostrar TOPE)");
						printf("\n\t3. Mostrar la palabra SUMA o RESTA o MULTIPLICACI�N \n\t   de la operaci�n realizada");
						printf("\n\t4. Cantidad de operaciones de suma, resta y multiplicaci�n");
						printf("\n\t5. Mostrar PILA");
						printf("\n\t6. Regresar al men� principal\n");
						printf("\n\t**********************************************************\n\n\t");
						
						printf("Su opci�n: ");
						scanf("%d",&opcPila);
						switch(opcPila)
						{
							case 1:
								printf("\n\tIngrese un elemento a la pila: ");
					 			scanf("%d",&elem);
						 		meter(&pila,elem);
						 		mostrarPilaTope(&pila);
						 		printf("\n\t");
								break;
								
								case 2:
									elemento1=sacar(&pila);
									elemento2=sacar(&pila);
									mostrarPilaTope(&pila);
									printf("\n\t");
									break;
									
									case 3:
										elem=realizarCalculos(&pila, elemento1, elemento2);
										meter(&pila,elem);
										printf("\n\t");
										break;
										
										case 4:
											resultadoContador();
											break;
											
											case 5:
												mostrarPila(&pila);
												break;
												
												case 6:
													
													control2=1;
													break;
													
													default:
														printf("\n\n\n\t************************************\n\t   Disculpe, su opci�n es inv�lida \n\tPor favor ingresar una opci�n v�lida \n\t Pulse cualquier tecla para volver \n\t************************************\n\n\t");
														getch();
														break;
						}
				    }
					break;
					
					case 3:
						iniciaCola(&cola);
						limpiaCola(&cola);
						control3=0;
						while(control3==0)
						{
							system("CLS");
							printf("\n\t***********************************************");
							printf("\n\t----------------------COLA---------------------");
							printf("\n\n\t1. Insertar en la COLA (pacientes por atenci�n)");
							printf("\n\t2. Posici�n de FRENTE y FINAL luego de insertar");
							printf("\n\t3. Eliminar en la COLA (pacientes atendidos)");
							printf("\n\t4. Posici�n de FRENTE y FINAL luego de eliminar");
							printf("\n\t5. Regresar al men� principal\n");
							printf("\n\t***********************************************\n\n\t");
							
							printf("Su opci�n: ");
							scanf("%d",&opcCola);
							switch(opcCola)
							{
							case 1:
								if (errorOverflow(&cola))
								{
								printf("\n\t�NO HAY CUPO!");
								printf("\n\n\t---Pulse cualquier tecla para volver---");
								getch();				
								}
								else if (controlAtencion(&cola))
								{
								printf("\n\t�NO HAY CUPO!");
								printf("\n\n\t---Pulse cualquier tecla para volver---");
								getch();	
								}
								else
								{
								elem=contCola;
								agregar(&cola,elem);
								contCola=contCola+1;	
								}
								
								break;
								
								case 2:
									mostrarCola(&cola);
									break;
									
									case 3:
										if (colaVacia(&cola))
										{
										printf("\n\t�Fin de atenci�n!");
										printf("\n\n\t---Pulse cualquier tecla para volver---");
										getch();					
										}
										else if(errorUnderflow(&cola))
										{
										printf("\n\t�Error, no hay pacientes por atender!");
										printf("\n\n\t---Pulse cualquier tecla para volver---");
										getch();				
										}
										else
										{
										eliminar(&cola);
										}
										break;
										
										case 4:
										    mostrarCola(&cola);
											break;
											
											case 5:
												control3=1;
												break;
												
													default:
														printf("\n\n\n\t************************************\n\t   Disculpe, su opci�n es inv�lida \n\tPor favor ingresar una opci�n v�lida \n\t Pulse cualquier tecla para volver \n\t************************************\n\n\t");
														getch();
														break;
							}
					    }
						break;
						
						case 4:
							printf("\n\tGracias por visualizar ");
							printf("\n\t   Hasta la pr�xima \n\n");
							control=1;
							break;
						default:
							printf("\n\n\n\t************************************\n\t   Disculpe, su opci�n es inv�lida \n\tPor favor ingresar una opci�n v�lida \n\t Pulse cualquier tecla para volver \n\t************************************\n\n\t");
							getch();
		}
    }
return 0;
}
