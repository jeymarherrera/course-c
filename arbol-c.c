
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0
//1.
struct treenodo {
   struct treenodo *izqptr;  		
   char dato[40];     			
   struct treenodo *derptr; 	
};            
void crear(treenodo *nodo) 		
{
char resp[1];
clrscr();
printf("Entre el dato ";
gets (nodo->dato);
printf("Hay nodos a la Izquierda entre S/N ";
gets(resp);
//2.
if (strcmp(resp, "S") = = 0) {
    nodo->izqptr= new (treenodo);
    crear(nodo->izqptr); }
else
    nodo->izqptr=NULL;
printf("Hay nodos a la Derecha entre S/N ");
gets(resp);
//3.
if (strcmp(resp, "S") = = 0) {
       nodo->derptr = new (treenodo);
       crear (nodo->derptr); }
else
       nodo->derptr =NULL;
return;
}
//4.
main (){
treenodo *nodo;   
nodo= new treenodo;
crear (nodo);
getch();}

