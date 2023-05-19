#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

/*Para los siguientes enunciados, realice La codificación en Lenguaje C++ de los Ejercicios Resueltos en puntos anteriores.

Ejercicio N° 1 (Realizar con ciclo mientras)
Para N empleados que trabajan en una fábrica se ingresa el valor de cada hora y la cantidad de horas trabajadas, se pide mostrar:

Mostrar un mensaje “No trabajo” si la cantidad de horas es igual a cero.

Mostrar el sueldo del empleado, teniendo en cuenta que se le realiza un descuento del 11% para jubilación y de un 3% para obra social, y si trabajó más de 60 hs tiene un premio de 5% sobre el total de cantidad de horas*valor de la hora*/


main()
{
	
int x,y;
float j,os;
float stp,st1,st2;
float s;
float resta;
int n;
int c=0;

printf("\n\ningresar la cantidad de empleados: ");
scanf("%d",&n);

while (c<=n)
{
	printf("\nINGRESE EL VALOR DE LA HORA:  ");
scanf("%d",&x);

printf("\nINGRESE LA CANTIDAD DE HORAS TRABAJADAS: ");
scanf("%d",&y);

s=x*y; //sueldo

 j=(11*s)/100; //jubilado

 os=(3*s)/100; //obra social

resta=j+os;

if (y==0)
{
	printf("\nNO TRABAJO\n");
}
else 
{

		if (y>60)
			{
				
			float p=(5*s)/100; //premio
			
			stp=s+p;//sueldo mas premio
			
			st1=stp-resta;
			
			printf("\nEL SUELDO ES DE:$");
			printf("%f",s);
			
			printf("\nEL PREMIO ES DE:$");
			printf("%f",p);
			
			printf("\nLA JUBILACION ES:$");
			printf("%f",j);
			
			printf("\nLA OBRA SOCIAL ES:$");
			printf("%f",os);
			
			printf("\nEL SUELDO TOTAL ES:$");
			printf("%f",st1);
			
    		}
		else
			
			{			
				st2=s-resta; //sueldo dos
				
				printf("\nEL SUELDO ES DE:$ ");
				printf("%f",s);
				
				printf("\nLA JUBILACION ES:$ ");
				printf("%f",j);
				
				printf("\nLA OBRA SOCIAL ES:$");
				printf("%f",os);
				
				printf("\nEL SUELDO TOTAL ES:$ ");
				printf("%f\n",st2);
				
			}
}

	c=c+1; //contador
}

			
system("pause");

}

