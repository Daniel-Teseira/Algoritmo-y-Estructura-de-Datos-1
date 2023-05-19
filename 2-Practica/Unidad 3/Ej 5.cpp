#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int cuadrado(int c,int &resultado);

main()
{
	int c,resultado;
	printf("INGRESE EL NUMERO AL QUE DESEA OBTENER SU CUADRADO: ");
	scanf("%d",&c);		
	cuadrado(c,resultado);
		
	printf("\nEL RESULTADO ES: %d\n",resultado);
	system("pause");
}

int cuadrado(int c,int &resultado)
{
	int res1;
	int res2=0;
	int z=1;
	while(z<=c)
	{
		res1=(2*z)-1;
		res2=res1+res2;
		z=z+1;
	}
	resultado=res2;
return resultado;	
}





