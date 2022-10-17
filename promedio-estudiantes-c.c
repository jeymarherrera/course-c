/*Calcula el promedio de calificaciones almacenadas en un arreglo*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main(){
float calificaciones[5];
float promedio = 0, mayor=0, menor=0;
printf("Programa que calcula promedio de 5 calificaciones.. \n");
for(int i = 0; i < 5; i++){
printf("Introduzca la calificacion %d: ", i+1);
scanf("%f", &calificaciones[i]);
promedio += calificaciones[i];
printf("\n");
mayor=calificaciones[0];
menor=mayor;
}
for (int i = 0; i < 5; i++){
printf("calificacion %f \n", calificaciones[i]);
}

for (int i = 0; i < 5; i++) {
if (calificaciones[i]>mayor){
	mayor=calificaciones[i];
}
	if(calificaciones[i]<menor){
	menor=calificaciones[i];
	}
}

printf("El promedio de las calificaciones es: %.2f\n\n", promedio/5);
printf("Mayor: %f\n", mayor);
printf("Menor: %f\n", menor);
return 0;
}

