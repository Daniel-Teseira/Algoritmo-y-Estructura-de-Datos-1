#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int division(int x,int y,int &resultado);

main()
{
    int x,y,resultado;
	printf("INGRESE EL PRIMER NUMERO(X): ");
	scanf("%d",&x);
	printf("\nINGRESE EL SEGUNDO NUMERO(y): ");
	scanf("%d",&y);
	if(x>y and y>0)
	{
		division(x,y,resultado);
		printf("\nEL RESULTADO DE LA DIVISION ES: %d\n",resultado);
	}
	else 
	{
		printf("INGRESE VALORES MAYORES A 0 Y X>Y");
	}
	system("pause");
}

int division(int x,int y,int &resultado)
{
	int div,cont=0,resto;
	div=x/y;
	resto=x;
	while(cont<div)
	{
		resto-=y;
		cont++;
	}
	
resultado=cont;
return resultado;
	
}






