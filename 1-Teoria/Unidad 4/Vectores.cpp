#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int legajo(int n,float v[100],int &leg);
void vector(int n,float v[100]);

main()
{
    int n,leg;
 	float v[100],lmay;
 	
	printf("INGRESE LA CANTIDAD DE ALUMNOS: ");
	scanf("%d",&n);
	printf("\n");
	
	vector(n,v);
	legajo(n,v,leg);
	
	printf("\nLEGAJO CON MAYOR PROMEDIO: %d\n",leg);
system("pause");
}

void vector(int n,float v[100])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("INGRESE LA NOTA DEL ALUMNO (%d): ",i);
		scanf("%f",&v[i]);
	}
}

int legajo(int n,float v[100],int &leg)
{
	int i,may=0;
	
	for (i=0;i<n;i++)
	{
		if(v[i]>may)
		{
			may=v[1];
			leg=i;
		}
	}
	return leg;
}







