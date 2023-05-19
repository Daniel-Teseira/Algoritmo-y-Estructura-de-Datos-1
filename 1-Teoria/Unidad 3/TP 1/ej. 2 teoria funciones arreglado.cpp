#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void cuadrado(int x,int y,bool &valor);

main()
{
	int x,y,n,z;
	bool valor;
	
	printf("INGRESE LA CANTIDAD DE COORDENADAS: ");
	scanf("%d",&n);	
	for(z=0;z<n;z=z++)
		{
			printf("\n");
			printf("INGRESE EL VALOR DE X: ");
			scanf("%d",&x);			
			printf("INGRESE EL VALOR DE Y: ");
			scanf("%d",&y);
			
			cuadrado(x,y,valor);
			if(valor==true)
			{
				printf ("\nEL PUNTO SE ENCUENTRA DENTRO DEL CUADRADO\n\n");
				system("cls");
			}
			else
			{
				printf ("\nEL PUNTO SE ENCUENTRA FUERA DEL CUADRADO\n");
				system("cls");
			}
		}
system("pause");
}

void cuadrado(int x,int y,bool &valor)
{
	if (x>=-3 and y<3 and x<=3 and y>=-3)
		{
			valor=true;
		}	
		
	else 
		{ 
			valor=false;
		}
}





