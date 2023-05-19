#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int suma(int x,int y,int &resultado);

main()
{
    int x,y,resultado;
	printf("INGRESE EL PRIMER NUMERO: ");
	scanf("%d",&x);
	printf("\nINGRESE EL SEGUNDO NUMERO: ");
	scanf("%d",&y);

	suma(x,y,resultado);
	printf("\nEL RESULTADO DE LA MULTIPLICACION ES: %d\n",resultado);

	system("pause");
}

int suma(int x,int y,int &resultado)
{
	int res=0,cont=0;

	while(cont<y)
	{		
		res=res+x;
		cont++;
	}
	resultado=res;
return resultado;
	
}










