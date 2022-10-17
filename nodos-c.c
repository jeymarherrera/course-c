#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0
//1.
struct treenodo 
{
   struct treenodo *izqptr;  		
   char dato[40];     			
   struct treenodo *derptr; 	
};            
using namespace std;
void crear(treenodo *nodo) 		
{
char resp[1];
system("clr");
cout<< "Entre el dato ";
gets (nodo->dato);
cout <<"Hay nodos a la Izquierda entre S/N ";
cin>>resp;
//2.
if (strcmp(resp, "S") == 0) 
{
    nodo->izqptr = new (treenodo);
    crear(nodo->izqptr); 
}
else
    nodo->izqptr=NULL;
cout <<"Hay nodos a la Derecha entre S/N ";
cin>>resp;
//3.
if (strcmp(resp, "S") == 0) 
{
       nodo->derptr = new (treenodo);
       crear (nodo->derptr); 
}
else
       nodo->derptr =NULL;
return;
}
//4.
int main ()
{
treenodo *nodo;   
nodo= new treenodo;
crear (nodo);
getch();
}

