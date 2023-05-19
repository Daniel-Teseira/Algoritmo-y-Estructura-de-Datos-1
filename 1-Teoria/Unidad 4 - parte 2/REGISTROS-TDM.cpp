#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

struct fecha
{
	int dia,mes,anio;
};

struct paciente
{
	int cod;
	char apellido[50],nombre[50],test;
	fecha nac;		
};

void ingresar(paciente a[100],int n)
{	
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nINGRESE EL CODIGO:");
		scanf("%d",&a[i].cod);
		printf("\nINGRESE EL APELLIDO:");
		_flushall();
		gets(a[i].apellido);
		printf("\nINGRESE EL NOMBRE:");
		_flushall();
		gets(a[i].nombre);
		printf("\nINGRESE EL DIA DE NACIMIENTO:");
		scanf("%d",&a[i].nac.dia);
		printf("\nINGRESE EL MES DE NACIMIENTO:");
		scanf("%d",&a[i].nac.mes);
		printf("\nINGRESE EL AÑO DE NACIMIENTO:");
		scanf("%d",&a[i].nac.anio);
		printf("\nINGRESE EL RESULTADO DEL TEST:(P=POSITIVO O N=NEGRATIVO): ");
		_flushall();
		scanf("%c",&a[i].test);
		
	}
}

int encontrar(paciente a[100],int n)
{
	int i,c;
	c=0;
	for(i=0;i<n;i++)
	{
		if(2020-a[i].nac.anio>60)
		{
			c++;
		}
	}
	return c;
}

float porcentaje(paciente a[100],int n)
{
	int i,c;
	c=0;
	float por;
	
	for(i=0;i<n;i++)
	{
		if(a[i].test=='p'||a[i].test=='P')
		{
			c++;
		}
	}
	por=c*100/n;
	return por;
}


main()
{
	int n,mayores;
	float por;
	paciente a[100];
	
	printf("INGRESAR LA CANTIDAD DE PACIENTES: ");
	scanf("%d",&n);	
	ingresar(a,n);
	
	mayores=encontrar(a,n);
	printf("\nLA CANTIDAD DE PACIENTE MAYORES A 60 ANIOS ES: %d",mayores);
	
	por=porcentaje(a,n);
	printf("\nEL PORCENTAJE ES: %.2f",por);

printf("\n\n");
system("pause");
}

