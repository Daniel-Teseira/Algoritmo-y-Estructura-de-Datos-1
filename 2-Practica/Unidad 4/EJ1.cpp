#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int menor(int n,int v[100],int &num);
void vector(int n,int v[100]);
void muestra(int n,int v[100]);

main()
{
    int n,v[100],num;
 	
	printf("INGRESE LA CANTIDAD DE NUMEROS: ");
	scanf("%d",&n);
	printf("\n");
	
	vector(n,v);
	muestra(n,v);
	menor(n,v,num);
	
	printf("\nEL MENOR NUMERO ES: %d\n",num);
	
	
	
system("pause");

}

void vector(int n,int v[100])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("INGRESE EL (%d) NUMERO: ",i);
		scanf("%d",&v[i]);
	}
}

int menor(int n,int v[100],int &num)
{
	int b=0,i,c,aux;
	
	do
	{
		b=0;
		for (i=0;i<n-1;i++)
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
	
		for (i=0;i<n;i++)
	{
		printf("\n v[%d]= %d\n\n",i,v[i]);
	}
	
	num=v[n-1];
		
return num;
}

void muestra(int n,int v[100])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("\n v[%d]= %d\n\n",i,v[i]);
	}
}







