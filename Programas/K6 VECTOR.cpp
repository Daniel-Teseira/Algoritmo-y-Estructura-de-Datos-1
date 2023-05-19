#include<stdio.h>
#include<stdlib.h>
#include <ctime>

void carga(int orden,int vector[50]);
void mostrar(int orden,int vector[50]);
void pausa();
float promedio(int N, int vector[50]);
int mayormenor(int orden,int vector[50],int &posm);
int cargainde(int vector[50]);

main()
{
	int N,i,edad[50],nro_azar,posmen,posmay;
	float prom;
	srand(time(0));
	//printf("\nIngrese la cantidad de elementos: ");
	//scanf("%d",&N);
	//carga(N,edad);
	N=cargainde(edad);
	mostrar(N,edad);
	prom=promedio(N,edad);
	printf("\nEl promedio de edades es: %.2f",prom);
	posmay=mayormenor(N,edad,posmen);
	printf("\nEl elemento mayor es: %d",edad[posmay]);
	printf("\nY se encuentra en la posicion: %d",posmay+1);
	printf("\nEl elemento Menor es: %d",edad[posmen]);
	printf("\nY se encuentra en la posicion: %d",posmen+1);
	
	pausa();
}

int cargainde(int vector[50])
{
	int x,i=0;
	printf("\nIngrese el elemento del vector [0 para terminar]: ");
	scanf("%d",&x);
	while(x!=0)
	{
		vector[i]=x;
		i++;
		printf("\nIngrese el elemento del vector [0 para terminar]: ");
		scanf("%d",&x);
	}
	return i;	
		//nro_azar=1+rand()%100;
		
		//printf("\nIngrese el elemento: ");
		//scanf("%d",&vector[i]);
}

int mayormenor(int orden,int vector[50],int &posm)	
{
	int mayor=vector[0],menor=vector[0],posM=0;
	posm=0;
	for(int i=0;i<orden;i++)
	{
		if(vector[i]>mayor)
		{
			mayor=vector[i];
			posM=i;
		}
		if(vector[i]<menor)
		{
			menor=vector[i];
			posm=i;
		}
	}
	return posM;
}

float promedio(int orden, int vector[50])
{
	int suma=0;
	float p;
	for(int i=0;i<orden;i++)
	{
		suma=suma+vector[i];
	}
	p=(float)suma/orden;
	return p;
}
void pausa()
{
	printf("\n\n");
	system("pause");
}

void carga(int orden,int vector[50])
{
	int nro_azar;
	for(int i=0;i<orden;i++)
	{	
		nro_azar=1+rand()%100;
		vector[i]=(nro_azar);
		//printf("\nIngrese el elemento: ");
		//scanf("%d",&vector[i]);
	}
}

void mostrar(int orden,int vector[50])	
{
	printf("\nLos elementos del vector es: \n\n");
	for(int i=0;i<orden;i++)
	{
		printf("\t%d",vector[i]);
	}
}
