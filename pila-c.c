#include<stdio.h>
#define TRUE 1 //boleano
#define FALSE 0 //boleano
#define PILA_TAM 8 //tamaño de la cola
//creacion de la pila
typedef struct Pila 
{ 
int tope; //tope
int ArrPila[PILA_TAM]; //pila[tamaño]
}Pila;
//metodos
void IniciaPila(Pila *pila); //metodo iniciaPila
int PilaVacia(Pila *pila); //metodo pilaVacia
int PilaLlena(Pila *pila); //metodo pilaLlena
int Pop(Pila *pila); //metodo Pop - sacar
void Push(Pila *pila, int dato); //metodo Push - meter
void elementos(Pila *pila); //metodo elementos
void ImprimaPila(Pila *pila); //metodo imprimaPila
//main
int main()
{ Pila pila; //pila de tipo Pila
 IniciaPila(&pila); //llamado al metodo iniciaPila y envio del parametro pila
 Pop(&pila); //llamada al metodo pop y envio del parametro pila
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,25); //llamada al metodo push y envio del parametro pila y elemento 25
 ImprimaPila(&pila); //llamada al metodo imprimirPila y envio del parametro pila 
 Pop(&pila); //llamada al metodo pop y envio del parametro pila
 Pop(&pila); //llamada al metodo pop y envio del parametro pila
 ImprimaPila(&pila); //llamada al metodo imprimirPila y envio del parametro pila 
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 Push(&pila,14); //llamada al metodo push y envio del parametro pila y elemento 14
 ImprimaPila(&pila); //llamada al metodo imprimirPila y envio del parametro pila 
 return 0;
}
//metodo IniciaPila
void IniciaPila(Pila *pila) //parametro pila tipo pila
{ pila->tope=-1; //pila inicialiada con tope -1
 printf("Pila Iniciada ");
}
//metodo pilaVacia
int PilaVacia(Pila *pila) //parametro pila tipo pila
{ if(pila->tope==-1) //si el tope de la pila es igual a -1
 return TRUE; //cierto
 else
 return FALSE; //falso
}
//metodo pilaLlena
int PilaLlena(Pila *pila) //parametro pila tipo pila
{
 if(pila->tope == PILA_TAM -1) //si el tope de la pila es igual a tamaño-1
 return TRUE; //cierto
 else
 return FALSE; //falso
}
//metodo pop(sacar) 
int Pop(Pila *pila) //parametro pila tipo pila
{
if(PilaVacia(pila)) //llamada al metodo pilaVacia
 printf("Pila Vacia \n"); //si esta vacia imprime el siguiente mensaje
else
{ 
int dato = pila->ArrPila[pila->tope]; //sino el elemento que esta en el tope de la pila lo almacena la variable dato
pila->tope=-1; //tope de la pila se resta 1
 return dato; //retorna el elemento sacado
}
}
//metodo push(meter)
void Push(Pila *pila, int dato) //parametro pila tipo pila y elemento a ingresar en pila
{
 if(PilaLlena(pila)) //llamada al metodo pilaLlena
 printf("Pila Llena \n"); //si esta llena imprime el siguiente mensaje
 else
 {
 pila->tope++; //de otro modo el tope se incrementa en 1
 pila->ArrPila[pila->tope]= dato; //mete el elemento al tope de la pila
 }
}
//metodo elementos
void elementos(Pila *pila) //parametro pila tipo pila
{
printf("la pila tiene %d elementos",pila->tope+1); //imprime el elemento tiene que cantidad de elementos
}
//metodo imprimaPila
void ImprimaPila(Pila *pila) //parametro pila tipo pila
{
 if(PilaVacia(pila)) //llamado al metodo pilaVacia
 printf("Pila Vacia\n"); //si la pila esta vacia imprime el siguiente mensaje
 else
 {
 int i; 
 for(i=pila->tope;i>=0;i--) //de otro modo 
 {
 printf("[%d]",pila->ArrPila[i]); //imprimir elementos de la pila 1 a 1 
 }
 printf("\n");
 }
}
