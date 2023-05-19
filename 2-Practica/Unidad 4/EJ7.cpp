#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void vector1(int a[10]);
void vector2(int a[10],int b[10]);
void vector3(int a[10],int b[10],int c[10]);

main()
{
    int n,a[10],b[10],c[10];
 	
	printf("INGRESE 1 SI CREAR EL VECTOR (0 para salir): ");
	scanf("%d",&n);
	if(n==1)
	{
		vector1(a);	
		vector2(a,b);
		vector3(a,b,c);	
	}
	else
	{
		printf("\n\t************************************************************");
		printf("*\n\t*  USTED NO DESEA AGREGAR NUMEROS, HASTA PRONTO PAPURRI!!!  *");
		printf("\n\t*************************************************************\n\n");
	}
	
system("pause");
}

void vector1(int a[10])
{
	int i,aux,b=0;
	
	for (i=1;i<=10;i++)
	{
		printf("INGRESE EL NUMERO (%d): ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEL ARREGLO A ES:");	
	for (i=1;i<=10;i++)
		{
			printf("\n a[%d]= %d\n",i,a[i]);
		}
	system("pause");
	
}

void vector2(int a[10],int b[10])
{
	int i;
	printf("\nEL ARREGLO B ES(potencia de cada elemento del arreglo A elevado a su indice):");
	
	for (i=1;i<=10;i++)
		{
			b[i]=pow(a[i],i);
		}
		
	for (i=1;i<=10;i++)
		{
			printf("\n b[%d]= %d\n",i,b[i]);
		}	
}

void vector3(int a[10],int b[10],int c[10])
{
	int i; 
	
	
	for (i=1;i<=10;i++)
		{
			c[i]=a[i]+b[i];
		}
	printf("\nEL ARREGLO C (suma de los arreglos A y B) ES:");
	for (i=1;i<=10;i++)
		{
			printf("\n c[%d]= %d\n",i,c[i]);
		}	
}

