#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void llamadaXD(float x,float &valor);

main()
{
	float x,valor;
	printf("INGRESE LOS MINUTOS QUE DURA UNA LLAMADA TELEFONICA(en minutos): ");
	scanf("%f",&x);
	
	llamadaXD(x,valor);	
	
	printf("\nEL VALOR DE LA LLAMADA ES: $%.2f",valor);
	printf("\n");	
	system("pause");
}

void llamadaXD(float x,float &valor)
{
	float x1,x2,x3;
	if(x>=3)
	{
		if(x>3)
		{
			x1=x-3;
			x2=x1*0.25;
			x3=3*0.7;
			valor=x2+x3;
		}
		else
		{
			valor=3*0.7;
		}
	}
	else
	{
		valor=x*0.7;
	}
}










