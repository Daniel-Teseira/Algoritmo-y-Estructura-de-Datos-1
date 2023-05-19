#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//int ;
float x1,y1,x2,y2,x,y,a,b,a1,b1;

main()
{

printf("HOLA ESPERANCITA BIENVENIDA AL SOFTWARE DE DANIEL.CORPORATION.INC");
printf("\n");
printf("\n");
printf("INGRESE DEL PUNTO A LAS COORDENADAS DE X: ");
printf("\n");
scanf("%f",&x1);
printf("\n");

printf("INGRESE DEL PUNTO A LAS COORDENADAS DE Y: ");
printf("\n");
scanf("%f",&y1);
printf("\n");

printf("INGRESE DEL PUNTO B LAS COORDENADAS DE X: ");
printf("\n");
scanf("%f",&x2);
printf("\n");

printf("INGRESE DEL PUNTO B LAS COORDENADAS DE Y: ");
printf("\n");
scanf("%f",&y2);
printf("\n");

x=x1-x2;
y=y1-y2;

if (x<0 and y>0)
	{
		a=(-1*x);
		printf("LA DISTANCIA ENTRE A Y B ES: (%.0f,%.0f",a,y);
		printf(")");
		printf("\n");
	}
if (x<0 and y<0)
	{
		a1=(-1*x);
		b1=(-1*y);
		
		printf("LA DISTANCIA ENTRE A Y B ES: (%.0f,%.0f",a1,b1);
		printf(")");
		printf("\n");
	}	
	

if (x>0 and y>0)
	{
		printf("LA DISTANCIA ENTRE A Y B ES: (%.0f,%.0f",x,y);
		printf(")");
		printf("\n");
		
	}
if (x>0 and y<0)
	{
		b=(-1*y);
		printf("LA DISTANCIA ENTRE A Y B ES: (%.0f,%.0f",x,b);
		printf(")");
		printf("\n");
	}


system("pause");
}

