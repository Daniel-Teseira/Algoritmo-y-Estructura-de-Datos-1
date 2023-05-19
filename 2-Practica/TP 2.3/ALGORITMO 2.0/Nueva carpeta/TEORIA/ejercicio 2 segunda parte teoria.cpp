#include<stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Ejercicio N° 2 - (Realizar con ciclo Para)

Se ingresan N pares de valores para las variables X, Y; correspondiente a las coordenadas de un punto en el plano.

Indique :

Si dicho punto  se encuentra dentro o fuera del cuadrado.

Cantidad de puntos fuera del cuadrado.*/

main ()
{
	int N,x,y;
	int c=0;
	 
	printf ("\ningrese la cantidad de valores\n");
	scanf ("\n%d",&N);
	
	printf("\n\t-------------------------------------------------------------\n\t");
	
	for (int i=0 ;i<=N;i=i+1)
	{
	
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
	c=c+1;
	}
	
	}
	
	printf("\nla cantidad de puntos fuera del cuadrado es de:%d\n\n",c);
	
	
	
	
	system ("\n\npause");
}
