#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	float x1,y1,x2,y2,d;
	printf("\nIngrese la coordenada del punto 1: ");
	printf("\nValor de X: ");
	scanf("%f",&x1);
	printf("\nValor de Y: ");
	scanf("%f",&y1);
	printf("\n\nIngrese la coordenada del punto 2: ");
	printf("\nValor de X: ");
	scanf("%f",&x2);
	printf("\nValor de Y: ");
	scanf("%f",&y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("\nLa distancia entre los 2 puntos es: %.2f",d);
	printf("\n\n");
 	system("pause");
}












