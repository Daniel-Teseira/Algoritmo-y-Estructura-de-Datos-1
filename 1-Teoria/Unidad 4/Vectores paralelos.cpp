#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void LEG(int n,float v[100]);
void PROM(int n,float v[100]);
int NUM(int n,float v[100],float k,bool &x);

main()
{
    int n,leg,c,pos;
 	float v[100],k,y;
 	bool x;
 	
	printf("INGRESE LA CANTIDAD DE ALUMNOS: ");
	scanf("%d",&n);
	printf("\n");	
	PROM(n,v);
	
	printf("\nINGRESE EL NUMERO QUE DESEA BUSCAR: ");
	scanf("%f",&k);
	NUM(n,v,k,x);
	
	if(x==true)
	{
		printf("EL NUMERO SI ESTA EN EL VECTOR\n\n");	
	}
	else
	{
		printf("EL NUMERONO NO ESTA EN EL VECTOR\n\n");
	}
	system("pause");
	system("cls");

	
	LEG(n,v);	
	
	
	printf("LOS 3 PRIMEROS PROMEDIOS SON:\n");	
		for(c=0;c<3;c++)
		{
			printf("\n v[%d]= %.2f\n\n",c,v[c]);
		}
		
	
system("pause");
}

void PROM(int n,float v[100])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("INGRESE LA NOTA DEL ALUMNO (%d): ",i);
		scanf("%f",&v[i]);
	}
}

void LEG(int n,float v[100])
{
	int b=0,i,c;
	float aux;
	
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
	

}

int NUM(int n,float v[100],float k,bool &x)
{
	int i,b;
	
	for(i=0;i<n;i++)
	{
		if (v[i]==k)
		{
			x=true;
			b=1;
		}
	}
if(b==0)	
{
	x=false;
}	
return x;
}
   
