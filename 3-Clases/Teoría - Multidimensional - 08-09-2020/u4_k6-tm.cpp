#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void leer(int m1, int n1, int p1,int a[10][10][10]);
int total(int m1, int n1, int p1,int a[10][10][10]);
void hotel(int m1, int n1, int p1,int a[10][10][10]);
main()

{
	int n,m,p,t;
	int a[10][10][10];
	
	printf("ingrese la cantidad de filas: ");
	scanf("%d",&m);
	printf("ingrese la cantidad de columnas: ");
	scanf("%d",&n);
	printf("ingrese la cantidad de planos: ");
	scanf("%d",&p);
	
	leer(m,n,p,a);
	
	t=total(m,n,p,a);
	printf("\nCantidad total de personas: %d",t);
	
	hotel(m,n,p,a);
}

void leer(int m1, int n1, int p1,int a[10][10][10])
{
	int i,j,k;
	
	for(k=0;k<p1;k++)
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("a[%d][%d][%d]=",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
}

int total(int m1, int n1, int p1,int a[10][10][10])
{
	int i,j,k,s;
	
	s=0;
	for(k=0;k<p1;k++)
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				s=s+a[i][j][k];
			}
		}
	}
	return s;
}

void hotel(int m1, int n1, int p1,int a[10][10][10])
{
	int i,j,k,s,mayh,hotel1;
	
	mayh=0;
	hotel1=0;
	
	for(k=0;k<p1;k++)
	{
		s=0;
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				s=s+a[i][j][k];
			}
		}
		if (s>mayh)
		{
			mayh=s,
			hotel1=k;
		}
	}
	printf("\nHotel con mayor cantidad de personas: %d",hotel1);
}
