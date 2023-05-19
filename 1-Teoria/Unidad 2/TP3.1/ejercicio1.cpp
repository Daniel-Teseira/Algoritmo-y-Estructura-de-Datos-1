#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int x,y;

main()
{
	
printf("INGRESE EL VALOR DE x:");
printf("\n");
scanf("%d",&x);

printf("INGRESE EL VALOR DE y");
printf("\n");
scanf("%d",&y);

	if (x>=-3 && y<3 && x<=3 && y>=-3)
	{
		printf ("\n El punto se encuentra dentro del cuadrado\n");
	}
	
	else 
	{ 
	printf ("\n El punto se encuentra fuera del cuadrado\n");
	}
		
	



system ("pause");
}

