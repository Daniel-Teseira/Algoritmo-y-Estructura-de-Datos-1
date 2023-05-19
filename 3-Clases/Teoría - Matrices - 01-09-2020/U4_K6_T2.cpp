#include<stdio.h>

void cargar(int m1,int a1[100][100]);
void mostrar(int m1,int a1[100][100]);
void ordenar(int m1,int a1[100][100]);
int cuadro(int m1,int a1[100][100]);

main()
{
	int m,s;
	int a[100][100];
	
	printf("ingrese la cantidad de filas y columnas: ");
	scanf("%d",&m);
	
	printf("INGRESE LA MATRIZ\n");
	cargar(m,a);
	
	printf("\nMATRIZ GENERADA\n");
	mostrar(m,a);
	
	ordenar(m,a);
	printf("\nMATRIZ ORDENADA\n");
	mostrar(m,a);
	
	s=cuadro(m,a);
	printf("Suma de los elementos del cuadro: %d",s);
}

void cargar(int m1,int a1[100][100])
{
	int i,j;
	
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m1;j++)
		{
			if (i<=j)
			{					
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a1[i][j]);
			}
			else
			{
				a1[i][j]=-a1[j][i];	
			}	
		}
	}
}

void mostrar(int m1,int a1[100][100])
{
	int i,j;
	
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m1;j++)
		{		
			printf("a[%d][%d]=%d\n",i,j,a1[i][j]);
		}
	}
}

void ordenar(int m1,int a1[100][100])
{
	int i,j,b,aux;
	
	do
	{
		b=0;
		for(i=0;i<m1;i++)
		{
			for(j=0;j<m1-1;j++)
			{
				if (a1[i][j]>a1[i][j+1])
				{
					aux=a1[i][j];
					a1[i][j]=a1[i][j+1];
					a1[i][j+1]=aux;
					b=1;
				}
			}
			if (i<m1-1)
			{
				if (a1[i][m1-1]>a1[i+1][0])
				{
					aux=a1[i][m1-1];
					a1[i][m1-1]=a1[i+1][0];
					a1[i+1][0]=aux;
					b=1;
				}
			}
		}
	}
	while (b==1);
}

int cuadro(int m1,int a1[100][100])
{
	int s=0,i,j;
	
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m1;j++)
		{		
			if (i==0 or i==m1-1 or j==0 or j==m1-1)
			{
				s=s+a1[i][j];
			}			
		}
	}
	return s;
}
