#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//definicion de las funciones
void pagPresentacion(); 
void impCadenas (char cad1[],char cad2[],char cad3[]);
int calcLongitud  (char cad1[],char cad2[],char cad3[]);
void concatenarCadenas(char cad1[],char cad2[],char cad3[]);
void dosCaracter(char cad1[],char cad2[],char cad3[]); 
void buscarIgualdad (char cad1[],char cad2[]);
// definicion de las variables globlal
char cadena1[20];
char cadena2[20];
char cadena3[20];
	
int main ()
{
	//definicion de las variables 
	int n, op;	
	do //Menu por do-while
	{   
        system("CLS");
        printf("\n    **************************************************************************************");
		printf("\n     ----------------------------------MENU PRINCIPAL------------------------------------");
		printf("\n\n    1. Pantalla de presentacion      ");
		printf("\n\n    2. Cargada de las tres cadenas     ");
		printf("\n\n    3. Impresion de las tres cadenas     ");
		printf("\n\n    4. Impresion de la longitud de cada cadena     ");
		printf("\n\n    5. Impresion de la concatenacion de las tres cadenas      ");
		printf("\n\n    6. Impresion de la concatenacion de las dos primeras letras de las tres cadenas     ");
		printf("\n\n    7. Impresion si las dos primeras cadenas son iguales     ");
		printf("\n\n    8. Salir del programa     ");
		printf("\n    **************************************************************************************");
		printf("\n\t ");
		do
		{

			printf("\n\t Introduzca una opcion (1-8): ");
			fflush(stdin); //limpieza de la memoria de entrada
			scanf("%c", &op);
		} 
		
		while(op <'1' || op >'8');
		system("CLS");
		switch(op)
		{
			case '1':printf("\n\t*** HA ELEGIDO LA OPCION 1 *** \n\n");
					 pagPresentacion(); // llamada de la funcion pagPresentacion
					 printf("\n\t");
						break;
						
			case '2':
			         
					 printf("\n\t*** HA ELEGIDO LA OPCION 2 *** \n\n");
			         printf("\n\tIntroduce cadena 1: ");
    				 scanf("%s",&cadena1);
					 printf("\n\tIntroduce cadena 2: ");
  					 scanf("%s",&cadena2);
    				 printf("\n\tIntroduce cadena 3: ");
  					 scanf("%s",&cadena3);
			         printf("\n\t");
						break;
						
			case '3':printf("\n\t*** HA ELEGIDO LA OPCION 3 ***\n\n");
			         impCadenas (cadena1,cadena2,cadena3); // llamada de la funcion impCadenas
			         printf("\n\t");
						break;
						
			case '4':printf("\n\t*** HA ELEGIDO LA OPCION 4 *** \n\n");
			         calcLongitud  (cadena1,cadena2,cadena3); // llamada de la funcion calcLongitud
			         printf("\n\t");
						break;
						
			case '5':printf("\n\t*** HA ELEGIDO LA OPCION 5 *** \n\n");
					 concatenarCadenas(cadena1,cadena2,cadena3); // llamada de la funcion concatenarCadenas
					 printf("\n\t");
						break;
						
			case '6':printf("\n\t*** HA ELEGIDO LA OPCION 6 *** \n\n");
					 dosCaracter(cadena1,cadena2,cadena3); // llamada de la funcion dosCaracteres
			         printf("\n\t");
						break;
						
			case '7':printf("\n\t*** HA ELEGIDO LA OPCION 7 *** \n\n"); // llamada de la funcion buscarIgauldad
			         buscarIgualdad (cadena1,cadena2);
					 printf("\n\t");
						break;
		}	
	} 
	    while(op!='8');

}
void pagPresentacion() //funcion: opcion 1
{
	system("CLS");
	printf("\n\n       UNIVERSIDAD TECNOLOGICA DE PANAMA ");
	printf("\n\n FACULTAD DE INGENIERIA DE SISTEMAS COMPUTACIONALES      ");
	printf("\n\n         LIC. EN DESARROLLO DE SOFTWARE   ");
	printf("\n\n         DEPARTAMENTO DE PROGRAMACION   ");
	printf("\n\t  ");
	printf("\n\n            ESTRUCTURA DE DATOS I    ");
	printf("\n\n                PROYECTO N.1  ");
	printf("\n\n           OPERACIONES CON CADENAS  ");
	printf("\n\t\t \n  ");
	printf("\n\n  FACILITADOR: ING. JACQUELINE S. DE CHING   ");
	printf("\n\t  ");
	printf("\n\n               INTEGRANTES  ");
    printf("\n\n       JEYMAR HERRERA - 20-70-5165   ");
	printf("\n\t  ");
	printf("\n\n             GRUPO: 1SL112  ");
	printf("\n\t  ");
	printf("\n\n ---Toque Cualquier tecla para volver---");
	getch();
}
void impCadenas (char cad1[],char cad2[],char cad3[]) //funcion: opcion 3
{ 
    printf("\n\t***********************");
	printf("\n\tLa cadena 1 es: %s",cad1);
	printf("\n\tLa cadena 2 es: %s",cad2);
	printf("\n\tLa cadena 3 es: %s",cad3);
	printf("\n\t***********************");
	getch();
}
int calcLongitud  (char cad1[],char cad2[],char cad3[]) //funcion: opcion 4
{
	int longitud1,longitud2, longitud3;
	longitud1= strlen(cad1);
	longitud2= strlen(cad2);
	longitud3= strlen(cad3); //medir longitud de la cadena
	printf("\n\t*************************************");
	printf("\n\tEl numero de letras para %s es: %d",cad1,longitud1);
	printf("\n\tEl numero de letras para %s es: %d",cad2,longitud2);
	printf("\n\tEl numero de letras para %s es: %d",cad3,longitud3);
	printf("\n\t*************************************");
	getch();
}
void concatenarCadenas(char cad1[],char cad2[],char cad3[]) //funcion: opcion 5
{	
	char cad[20];
	strcpy(cad,cad1); //copiar cad1 a nueva variable llamada cad
	strcat(cad,cad2);  //concatenar cad2 a cad
	strcat(cad,cad3);  //concatenar cad3 a cad 
	printf("\n\t*************************************");
	printf("\n\tCadenas concatenadas: %s",cad); // imprenta de caracteres
	printf("\n\t*************************************");
	getch();
}
void dosCaracter(char cad1[],char cad2[],char cad3[]) //funcion: opcion 6
{

   int cantCaracter = 2; // constante. Cantidad de caracteres a imprimir (izquierda a derecha)
   char NuevaC[20]={0}; 
   
   strncpy(NuevaC,cad1,cantCaracter); //copia dos caracteres de la cadena 1 a la variable Nueva
   strncat(NuevaC,cad2,cantCaracter); //concatena dos caracteres de la cadena 2 a la variable Nueva
   strncat(NuevaC,cad3,cantCaracter); //concatena dos caracteres de la cadena 3 a la variable Nueva
   printf("\n\t*************************************************************************************");
   printf("\n\tEl resultado de concatenar las dos primeras letras de las cadenas es: %s ",NuevaC); // imprenta de caracteres
   printf("\n\t*************************************************************************************");
   getch();
}
void buscarIgualdad (char cad1[],char cad2[]) //funcion: opcion 7
{
	if (strcmp(cad1,cad2)) //comparar cadenas
		printf("\n\tLa primera cadena, %s, no es igual a la segunda cadena, %s.",cad1,cad2);
	else
		printf("\n\tLa primera cadena, %s, es igual a la segunda cadena, %s.",cad1,cad2);
		getch();
}
