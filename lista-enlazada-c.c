#include <stdio.h>
#include <conio.h>

#include <stdlib.h>
#include <string.h>
#define NULL 0
struct nodo {
char dato[10];
struct nodo *sig;
};
void crear(nodo *principio)
{
cout<< "Entre el dato ó Escriba F para terminar: ";
cin>> principio->dato;
if (strcmp(principio->dato, "FIN") == 0)
principio->sig=NULL;
else {
principio->sig= new nodo;
crear(principio->sig);
}
return;
}
void imprimir(nodo *principio)
{
if(principio->sig != NULL){
cout<<principio->dato<<endl;
imprimir(principio->sig);
}
return;
}
void main()
{
nodo *principio;
principio= new nodo;
clrscr();
crear (principio);
imprimir(principio);
getch();
}
