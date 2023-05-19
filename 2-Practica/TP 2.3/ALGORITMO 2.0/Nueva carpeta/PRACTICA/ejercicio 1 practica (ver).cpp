#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//no me da el resultado final pero ta bien

main()
{
	float np;
	float ei;
	float tf;
	
	float a;
	float b;
	float c;
	float na;
	
	
	printf("\n ingrese nota promedio de los dos examenes: ");
	scanf("%f",&np);
	
	printf("\n ingrese la nota de su examen integrador: ");
	scanf("%f",&ei);
	
	printf("\n ingrese la nota de su trabajo final: ");
	scanf("%f",&tf);
	
	a=np*100/50;
	b=ei*100/30;
	c=tf*100/20;
	 
	na=a+b+c;  
	
	printf("\nsu calificacion de la materia algoritmo es de: ");
	printf("%f\n",na);
 
 system ("pause");
}
