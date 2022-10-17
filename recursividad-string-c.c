#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define Lar 30

char cadena[Lar];

void intro(char cadena[Lar]);
int contador(char cadena[Lar]);
int alreves(int carac);


int alreves(int lon)
{
    while (lon>=0)
    {
        printf("%c", cadena[lon]);
        return alreves(lon-1);
    }
}

int contador(char cadena[])
{
    int a;
    char aux='a';

    for (a=0;a<Lar;a++)
    {
        aux=cadena[a];

        if(!aux)
        {
            return a-1;
            break;
        }
    }
}

void intro(char cadena[])
{
    printf("\n\nIntroduce una cadena de texto: \n\n");
    scanf("%s",cadena);
    printf("\n\nLa cadena de texto al reves es: \n\n");
}

void main()
{
    int longi;    
    
    intro(cadena);
    longi=contador(cadena);
    alreves(longi);
    printf("\n\n\n");
}
