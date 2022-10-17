#include <stdlib.h>
#include <conio.h>
#include<stdio.h>

#define maxtam 4 //tamaño de la cola

struct //creacion de la cola
{
 int items[maxtam]; // elementos [tamaño]
 int front_c; //frente de la cola
 int final_c; //final de la cola
}s_cola;  //cola de elemento

//metodo (Agregar elemento)
void agregar(int elemento) //recibe parametro
{
 s_cola.items[++s_cola.final_c]=elemento; //inserta parametro en la posicion final
}

//metodo (Eliminar elemento)
int eliminar()
{
 return s_cola.items[++s_cola.front_c]; //elemento
}

//metodo Cola Vacía
int c_vacia()
{
 if (s_cola.front_c==s_cola.final_c) // si frente = final
 return 1;//cierto
 else
 return 0; //falso
}

//Error Underflow (Subdesbordamiento)
int error_underflow()
{
 if (c_vacia()) //llamada al metodo c_vacia
 return 1; //cierto
 else
 return 0; //falso
}

//metodo Cola llena
int c_llena()
{
 if (s_cola.final_c==maxtam-1) //si final = tamaño-1
 return 1;//cierto
 else
 return 0; //falso
}
//Error Overflow (Desbordamiento)
int error_overflow()
{
 if (c_llena()) //llamada al metodo c_llena
 return 1;//cierto
 else
 return 0; //falso
}

void mostrar () //metodo mostrar
{
 int i;
 printf("Final--> %d\n",s_cola.final_c); //posicion final
 for (i = 0; i<=maxtam-1; i++) //mostrar elemntos de la cola
 printf("%d\n",s_cola.items[i]);
 printf("Front--> %d\n", s_cola.front_c);//posicion delantera
 getch(); //limpiar
}
void IniciaCola() //metodo IniciaCola, posicion de la cola frente y final en -1
{ s_cola.front_c=-1;
 s_cola.final_c=-1;
 printf("Cola Iniciada \n");
}

//main
int main()
{ //bloque de declarativa
 int item=NULL ,opcion;
 char opc;

 IniciaCola(); //llamada al metodo IniciaCola
 do
 { //menu
 printf("\n\tEstructura Cola maximo= %d",maxtam); //tamaño
 printf("\nMenu\n");
 printf("\n1.Agregar");
 printf("\n2.Eliminar");

 if (c_vacia()) //llamada al metodo c_vacia
 printf("\n\tEstado actual: Cola vacia!"); //si es cierto imprime el mensaje

 else if (c_llena()) //sino llama al metodo c_llena
 printf("\n\tEstado actual: Cola llena!"); //si es cierto imprime el mensaje

 else // de otro modo
 printf("\n\tEstado actual: %d espacios disponibles",(maxtam)-s_cola.final_c); //imprime que espacio queda disponible  tamaño-final
 printf("\n3.Mostrar Cola");
 printf("\n4.Salir");
 printf("\n\nSeleccione una opcion: ");
 scanf("%d",&opcion);//leer opcion ingresada

 switch(opcion)//switch
 {
 case 1:if (error_overflow()) //llamada al metododo error_overflow
 		printf("\nError: Overflow!\n\t(La Cola ya esta llena, no se puede agregar otro elemento)\n"); //si esta llena imprime el siguiente mensaje
 		else //sino esta llena
		{
 		printf("\nIngrese el numero para agregar a la Cola \n"); //imprime el siguiente mensaje
 		scanf ("%d",&item); //agregar elemento a la cola
 		agregar(item); //llamada al metodo agregar, enviando parametro
 		mostrar (); //llamada al metodo mostrar para visualizar cola
 		}
 		break;

 case 2:if (error_underflow()) //llamada al metododo under_overflow
 		printf("\nError: Underflow!\n\t(La Cola esta vacia, no hay elemento que eliminar)\n"); //si esta vacia imprime el siguiente mensaje
		else //sino esta vacia
 		item=eliminar(); //se llama al metodo eliminar y retorna a la varibable item el elemento eliminado
		mostrar();  //llamada al metodo mostrar para visualizar cola
 		printf("\nEl elemento eliminado fue %d \n",s_cola.items[s_cola.front_c]); //elemento[frente]
		break;
 case 3:mostrar();  //llamada al metodo mostrar para visualizar cola

 case 4:exit(0); //salida

 default:printf("\n\nNo seleccionaste una opcion, intenta de nuevo.\n");
 		 getch();
 		 system("cls");
 return main();
 }
 printf("\n\nDesea continuar trabajando con la Cola?\nSi (S)/No (N)\n\n");
 opc=getch(); //limpieza
 }
while(opc=='S' || opc=='s');
return 0;
}
