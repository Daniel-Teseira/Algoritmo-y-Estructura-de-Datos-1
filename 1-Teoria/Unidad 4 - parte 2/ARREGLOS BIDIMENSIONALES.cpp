#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void MatAsimetrica(int m1,int a1[100][100])
{
	int i,j;
	
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m1;j++)
		{
			
			if (i<=j)
			{					
				if(i<j)
				{
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a1[i][j]);
				}
				else
				{
				a1[i][j]=0;
				}
			}
			else
			{
				a1[i][j]=-a1[j][i];	
			}
				
		}
	}
}

void Mostrar(int m1,int a1[100][100])
{
	int i,j;
	
	for(i=0;i<m1;i++)
	{
		printf("\n");
		for(j=0;j<m1;j++)
		{		
			printf("\t%d",a1[i][j]);
		}
	}
}

void Ordenar(int m1,int a1[100][100])
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

int SCuadro(int m1,int a1[100][100])
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

main()
{
	int m,s;
	int a[100][100];
	
	printf("INGRESE LA CANTIDAD DE FILAS Y COLUMNAS: ");
	scanf("%d",&m);
	
	//PRIMER PUNTO
	printf("INGRESE LA MATRIZ\n");
	MatAsimetrica(m,a);
	
	//MUESTRA DE MATRIZ INGRESADA
	printf("\n1) MATRIZ GENERADA\n");
	Mostrar(m,a);
	
	//SEGUNDO PUNTO
	Ordenar(m,a);
	printf("\n2) MATRIZ ORDENADA\n");
	Mostrar(m,a);//MUESTRA MATRIZ ORDENADA
	
	//TERCER PUNTO
	s=SCuadro(m,a);
	printf("\n\n3) SUMA DE LOS ELEMENTOS DEL CUADRO: %d\n",s);
	
	system("pause");
}






