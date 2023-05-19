#include<stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Ejercicio N° 2 -
Se ingresan las variables X, Y; correspondiente a sus coordenadas de un punto.

Indique :

Si dicho punto  se encuentra dentro o fuera del cuadrado.*/



main ()
{
	int x,y;
	
	printf("\nIngrese la variable x:\n");
	scanf("%d",&x);
	
	printf("\n Ingrese la variable y: \n");
	scanf ("%d",&y);
	
	printf("\n\t-------------------------------------------------------------\n\t");

	
	if (x>=-3 and y<3 and x<=3 and y>=-3)
	{
		printf ("\n El punto se encuentra dentro del cuadrado\n");
	}
	
	else 
	{ 
	printf ("\n El punto se encuentra fuera del cuadrado\n");
	}
	
	
	
	system ("pause");
}
