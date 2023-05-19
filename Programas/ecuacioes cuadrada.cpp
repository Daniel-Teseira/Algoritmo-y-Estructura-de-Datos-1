#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	char c;
	float a,b;
	float x1,x2;
	float discri;
	printf("\nIngrese los coeficientes de la ecuacion");
	printf ("\nIngrese el coeficiente de A: ");
	scanf("%f",&a);
	printf ("Ingrese el coeficiente de B: ");
	scanf("%f",&b);
	printf ("Ingrese el coeficiente de C: ");
	scanf("%f",&c);
	
	discri=(b)*(b)-4*(a)*(c);
	x1=(-(b)+sqrt(discri))/2*(a);
	x2=(-(b)-sqrt(discri))/2*(a);
	
	if(discri>=0)
		{
			
			if (discri=0)
			{
				printf("\nLas raices son iguales");
				printf("%f",x1);	
			}
			else
			{
				printf("\nLas raices son distintas");
				printf("\nx1: ");
				printf("%f",x1);
				printf("\nx2: ");
				printf("%f",x2);
		
			}
		}
		else
		{
			printf("\nNo tiene raices");
		}
			
	
printf("\n\n");
system("\npause");
}

