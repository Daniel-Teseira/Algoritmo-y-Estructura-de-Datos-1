#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void mostrar(int n,int v[100]);
main()
{
    int n,v[100];
 	
	printf("INGRESE LA CANTIDAD DE NUMEROS QUE INGRESARA: ");
	scanf("%d",&n);
	mostrar(n,v);
	
system("pause");
}

void mostrar(int n,int v[100])
{
	int i,aux,b=0;
	for (i=1;i<=n;i++)
	{
		printf("INGRESE EL NUMERO (%d): ",i);
		scanf("%d",&v[i]);
	}
	
	printf("\nVECTOR ORIGINAL:");	
	for (i=1;i<=n;i++)
		{
			printf("\n v[%d]= %d\n",i,v[i]);
		}
	system("pause");
	do
	{
		b=0;
		for (i=1;i<=n-1;i++)
		{
			if (v[i]>v[i+1])
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				b=1;
			}
		}
	}
		while (b==1);
		
	printf("\nVECTOR DE MENOR A MAYOR:");
	for (i=1;i<=n;i++)
		{
			printf("\n v[%d]= %d\n",i,v[i]);
		}	
	system("pause");
	do
	{
		b=0;
		for (i=1;i<=n-1;i++)
		{
			if (v[i]<v[i+1])
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				b=1;
			}
		}
	}
		while (b==1);
		
	printf("\nVECTOR DE MAYOR A MENOR");
	for (i=1;i<=n;i++)
		{
			printf("\n v[%d]= %d\n",i,v[i]);
		}
}






